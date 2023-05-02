#include "SY6522.h"

namespace Jynsaillar::SY6522
{

    SY6522::SY6522()
    {

        _pins = {
            // PinNumber, Pin{Name, Enabled, PinType, ActivationType, Signal}
            {1, ChipPins::ChipPin{"VSS", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::Low}},
            {2, ChipPins::ChipPin{"PA0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {3, ChipPins::ChipPin{"PA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {4, ChipPins::ChipPin{"PA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {5, ChipPins::ChipPin{"PA3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {6, ChipPins::ChipPin{"PA4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {7, ChipPins::ChipPin{"PA5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {8, ChipPins::ChipPin{"PA6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {9, ChipPins::ChipPin{"PA7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {10, ChipPins::ChipPin{"PB0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {11, ChipPins::ChipPin{"PB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {12, ChipPins::ChipPin{"PB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {13, ChipPins::ChipPin{"PB3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {14, ChipPins::ChipPin{"PB4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {15, ChipPins::ChipPin{"PB5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {16, ChipPins::ChipPin{"PB6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {17, ChipPins::ChipPin{"PB7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {18, ChipPins::ChipPin{"CB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {19, ChipPins::ChipPin{"CB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {20, ChipPins::ChipPin{"VCC", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::High}},
            {21, ChipPins::ChipPin{"IRQ", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High}},
            {22, ChipPins::ChipPin{"RW", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::High}},
            {23, ChipPins::ChipPin{"CS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High}},
            {24, ChipPins::ChipPin{"CS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {25, ChipPins::ChipPin{"CLK2/EN", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {26, ChipPins::ChipPin{"D7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {27, ChipPins::ChipPin{"D6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {28, ChipPins::ChipPin{"D5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {29, ChipPins::ChipPin{"D4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {30, ChipPins::ChipPin{"D3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {31, ChipPins::ChipPin{"D2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {32, ChipPins::ChipPin{"D1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {33, ChipPins::ChipPin{"D0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {34, ChipPins::ChipPin{"RES", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High}},
            {35, ChipPins::ChipPin{"RS3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {36, ChipPins::ChipPin{"RS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {37, ChipPins::ChipPin{"RS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {38, ChipPins::ChipPin{"RS0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {39, ChipPins::ChipPin{"CA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}},
            {40, ChipPins::ChipPin{"CA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low}}};
    }

} // namespace Jynsaillar::SY6522
