#include "SY6522.h"

namespace Jynsaillar::SY6522
{

    SY6522::SY6522()
    {
        ChipPins::ChipPin pins[40]{
            // Pin Number, Proxy Pin, Pin Name, Enabled, PinType, ActivationType, Signal
            ChipPins::ChipPin{1, 255, "VSS", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::Low},
            ChipPins::ChipPin{2, 255, "PA0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{3, 255, "PA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{4, 255, "PA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{5, 255, "PA3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{6, 255, "PA4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{7, 255, "PA5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{8, 255, "PA6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{9, 255, "PA7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{10, 255, "PB0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{11, 255, "PB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{12, 255, "PB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{13, 255, "PB3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{14, 255, "PB4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{15, 255, "PB5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{16, 255, "PB6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{17, 255, "PB7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{18, 255, "CB1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{19, 255, "CB2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{20, 255, "VCC", true, PinTypes::PinType::Net, ActivationTypes::ActivationType::None, Signals::Signal::High},
            ChipPins::ChipPin{21, 255, "IRQ", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{22, 255, "RW", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::High},
            ChipPins::ChipPin{23, 255, "CS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{24, 255, "CS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{25, 255, "CLK2/EN", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{26, 255, "D7", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{27, 255, "D6", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{28, 255, "D5", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{29, 255, "D4", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{30, 255, "D3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{31, 255, "D2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{32, 255, "D1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{33, 255, "D0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{34, 255, "RES", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveLow, Signals::Signal::High},
            ChipPins::ChipPin{35, 255, "RS3", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{36, 255, "RS2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{37, 255, "RS1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{38, 255, "RS0", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{39, 255, "CA2", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
            ChipPins::ChipPin{40, 255, "CA1", true, PinTypes::PinType::Digital, ActivationTypes::ActivationType::ActiveHigh, Signals::Signal::Low},
        };

        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            *(Pins + i) = pins[i];
        }
    }

    void SY6522::PulseClock()
    {
        ChipPins::ChipPin *ptrCLK2 = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "CLK2") == 0)
                ptrCS1 = pinPointer;
        }

        ptrCLK2->Signal = Signals::High;
        this->DigitalWrite(ptrCLK2->ProxyPin, ptrCLK2->Signal);
        ptrCLK2->Signal = Signals::Low;
        this->DigitalWrite(ptrCLK2->ProxyPin, ptrCLK2->Signal);
    }

    void SY6522::EnableChip()
    {
        ChipPins::ChipPin *ptrCS2 = nullptr;
        ChipPins::ChipPin *ptrCS1 = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "CS1") == 0)
                ptrCS1 = pinPointer;
            if (strcmp(pinPointer->Name, "CS2") == 0)
                ptrCS2 = pinPointer;
        }
        ptrCS1->Signal = Signals::High;
        ptrCS2->Signal = Signals::Low;
        this->DigitalWrite(ptrCS1->ProxyPin, ptrCS1->Signal);
        this->DigitalWrite(ptrCS2->ProxyPin, ptrCS2->Signal);
    }

} // namespace Jynsaillar::SY6522
