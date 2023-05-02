cmake_minimum_required(VERSION 3.14)
project(
    SY6522 
    VERSION 0.0.1
    DESCRIPTION "A library for defining pins in an embedded software context.")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(WIN32)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

endif()


## C++ language configuration boilerplate

if (NOT DEFINED CMAKE_CXX_VISIBILITY_PRESET AND
    NOT DEFINED CMAKE_VISIBILITY_INLINES_HIDDEN)
  set(CMAKE_CXX_VISIBILITY_PRESET hidden)
  set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)
endif ()

## Let SY6522_SHARED_LIBS override BUILD_SHARED_LIBS

if (DEFINED SY6522_SHARED_LIBS)
    set(BUILD_SHARED_LIBS "${SY6522_SHARED_LIBS}")
endif ()

## Import required headers
find_package(ChipPins 0.0.1 REQUIRED)

## Create the main SY6522 library target

add_library(SY6522 src/SY6522.cpp)
add_library(SY6522::SY6522 ALIAS SY6522)
set_target_properties(SY6522 PROPERTIES
                      VERSION ${SY6522_VERSION}
                      SOVERSION ${SY6522_VERSION_MAJOR})
target_include_directories(
    SY6522 PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>")
target_compile_features(SY6522 PUBLIC cxx_std_14)
target_link_libraries(SY6522 PRIVATE ChipPins::ChipPins -static-libstdc++ -static-libgcc)
## Generate the export header for SY6522 and attach it to the target

include(GenerateExportHeader)
generate_export_header(SY6522 EXPORT_FILE_NAME include/SY6522/export.h)
target_compile_definitions(
    SY6522 PUBLIC "$<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:SY6522_STATIC_DEFINE>")
target_include_directories(
    SY6522 PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>")

## Include the install rules if the user wanted them (included by default when top-level)

string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}" is_top_level)
option(SY6522_INCLUDE_PACKAGING "Include packaging rules for SY6522" "${is_top_level}")
if (SY6522_INCLUDE_PACKAGING)
    add_subdirectory(packaging)
endif ()
