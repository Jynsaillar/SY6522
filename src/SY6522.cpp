#include "SY6522.h"

namespace Jynsaillar::SY6522
{

    SY6522::SY6522()
    {
        ChipPins::ChipPin pins[40]{
            // Pin Number, Pin Name, Enabled, PinType, ActivationType, Signal
            ChipPins::ChipPin{2, "PA0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{1, "VSS", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::Low},
            ChipPins::ChipPin{3, "PA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{4, "PA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{5, "PA3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{6, "PA4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{7, "PA5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{8, "PA6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{9, "PA7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{10, "PB0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{11, "PB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{12, "PB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{13, "PB3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{14, "PB4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{15, "PB5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{16, "PB6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{17, "PB7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{18, "CB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{19, "CB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{20, "VCC", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::High},
            ChipPins::ChipPin{21, "IRQ", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{22, "RW", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::High},
            ChipPins::ChipPin{23, "CS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{24, "CS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{25, "CLK2/EN", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{26, "D7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{27, "D6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{28, "D5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{29, "D4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{30, "D3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{31, "D2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{32, "D1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{33, "D0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{34, "RES", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{35, "RS3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{36, "RS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{37, "RS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{38, "RS0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{39, "CA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{40, "CA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
        };

        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            *(Pins + i) = pins[i];
        }
    }

} // namespace Jynsaillar::SY6522
