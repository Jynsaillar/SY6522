#include "SY6522.h"

namespace Jynsaillar::SY6522
{

    SY6522::SY6522()
    {
        ChipPins::ChipPin pins[40]{
            // Pin Number, Proxy Pin, Pin Name, Enabled, PinType, ActivationType, Signal
            ChipPins::ChipPin{2, -1, "PA0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{1, -1, "VSS", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::Low},
            ChipPins::ChipPin{3, -1, "PA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{4, -1, "PA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{5, -1, "PA3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{6, -1, "PA4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{7, -1, "PA5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{8, -1, "PA6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{9, -1, "PA7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{10, -1, "PB0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{11, -1, "PB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{12, -1, "PB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{13, -1, "PB3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{14, -1, "PB4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{15, -1, "PB5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{16, -1, "PB6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{17, -1, "PB7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{18, -1, "CB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{19, -1, "CB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{20, -1, "VCC", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::High},
            ChipPins::ChipPin{21, -1, "IRQ", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{22, -1, "RW", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::High},
            ChipPins::ChipPin{23, -1, "CS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{24, -1, "CS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{25, -1, "CLK2/EN", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{26, -1, "D7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{27, -1, "D6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{28, -1, "D5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{29, -1, "D4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{30, -1, "D3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{31, -1, "D2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{32, -1, "D1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{33, -1, "D0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{34, -1, "RES", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{35, -1, "RS3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{36, -1, "RS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{37, -1, "RS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{38, -1, "RS0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{39, -1, "CA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{40, -1, "CA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
        };

        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            *(Pins + i) = pins[i];
        }
    }

} // namespace Jynsaillar::SY6522
