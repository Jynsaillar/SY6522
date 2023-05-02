include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

if (NOT DEFINED SY6522_INSTALL_CMAKEDIR)
   set(SY6522_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/SY6522"
       CACHE STRING "Path to SY6522 CMake files")
endif ()

install(TARGETS SY6522 EXPORT SY6522_Targets
        RUNTIME COMPONENT SY6522_Runtime
        LIBRARY COMPONENT SY6522_Runtime
        NAMELINK_COMPONENT SY6522_Development
        ARCHIVE COMPONENT SY6522_Development
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

install(DIRECTORY "${SY6522_SOURCE_DIR}/include/" "${SY6522_BINARY_DIR}/include/"
        TYPE INCLUDE
        COMPONENT SY6522_Development)

if (BUILD_SHARED_LIBS)
    set(type shared)
else ()
    set(type static)
endif ()

install(EXPORT SY6522_Targets
        DESTINATION "${SY6522_INSTALL_CMAKEDIR}"
        NAMESPACE SY6522::
        FILE SY6522-${type}-targets.cmake
        COMPONENT SY6522_Development)

write_basic_package_version_file(
    SY6522ConfigVersion.cmake
    COMPATIBILITY SameMajorVersion)

install(FILES
        "${CMAKE_CURRENT_SOURCE_DIR}/SY6522Config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/SY6522ConfigVersion.cmake"
        DESTINATION "${SY6522_INSTALL_CMAKEDIR}"
        COMPONENT SY6522_Development)

# TODO: add additional CPack variables here
include(CPack)
