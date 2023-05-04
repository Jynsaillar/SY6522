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
            if (strcmp(pinPointer->Name, "CLK2/EN") == 0)
                ptrCLK2 = pinPointer;
        }

        ptrCLK2->Signal = Signals::High;
        this->DigitalWrite(ptrCLK2->ProxyPin, ptrCLK2->Signal);
        this->Delay(100); // Wait 100ms, only if function defined externally
        ptrCLK2->Signal = Signals::Low;
        this->DigitalWrite(ptrCLK2->ProxyPin, ptrCLK2->Signal);
        this->Delay(100); // Wait 100ms, only if function defined externally
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

    void SY6522::ReadMode()
    {
        ChipPins::ChipPin *ptrRW = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "RW") == 0)
                ptrRW = pinPointer;
        }
        ptrRW->Signal = Signals::High;
        this->DigitalWrite(ptrRW->ProxyPin, ptrRW->Signal);
    }

    void SY6522::WriteMode()
    {
        ChipPins::ChipPin *ptrRW = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "RW") == 0)
                ptrRW = pinPointer;
        }
        ptrRW->Signal = Signals::Low;
        this->DigitalWrite(ptrRW->ProxyPin, ptrRW->Signal);
    }

    void SY6522::RegisterSelect(uint8_t rs3, uint8_t rs2, uint8_t rs1, uint8_t rs0)
    {
        /*
        RS3 | RS2 | RS1 | RS0 || Register || Write Mode           || Read Mode
        0   | 0   | 0   | 0   || ORB, IRB || Output Register B    || Input Register B
        0   | 0   | 0   | 1   || ORA, IRA || Output Register A    || Input Register A
        0   | 0   | 1   | 0   || DDRB     || Data Direction Register B
        0   | 0   | 1   | 1   || DDRA     || Data Direction Register A
        0   | 1   | 0   | 0   || T1C-L    || T1 Low-Order Latches || T1 Low-Order Counter // There's a datasheet from 1978 that lists this as T1L-L, which is incorrect
        0   | 1   | 0   | 1   || T1C-H    || T1 High-Order Counter
        0   | 1   | 1   | 0   || T1L-L    || T1 Low-Order Latches
        0   | 1   | 1   | 1   || T1L-H    || T1 High-Order Latches
        1   | 0   | 0   | 0   || T2C-L    || T2 Low-Order Latches || T2 Low-Order Counter
        1   | 0   | 0   | 1   || T2C-H    || T2 High-Order Counter
        1   | 0   | 1   | 0   || SR       || Shift Register
        1   | 0   | 1   | 1   || ACR      || Auxiliary Control Register
        1   | 1   | 0   | 0   || PCR      || Peripheral Control Register
        1   | 1   | 0   | 1   || IFR      || Interrupt Flag Register
        1   | 1   | 1   | 0   || IER      || Interrupt Enable Register
        1   | 1   | 1   | 1   || ORA/IRA  || See configuration for ORA, IRA (0001), but without handshake
        */

        ChipPins::ChipPin *ptrRS3 = nullptr;
        ChipPins::ChipPin *ptrRS2 = nullptr;
        ChipPins::ChipPin *ptrRS1 = nullptr;
        ChipPins::ChipPin *ptrRS0 = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "RS3") == 0)
            {
                ptrRS3 = pinPointer;
                ptrRS2 = ptrRS3 + 1;
                ptrRS1 = ptrRS3 + 2;
                ptrRS0 = ptrRS3 + 3;
                break;
            }
        }
        ptrRS3->Signal = (rs3 == 1) ? Signals::High : Signals::Low;
        ptrRS2->Signal = (rs2 == 1) ? Signals::High : Signals::Low;
        ptrRS1->Signal = (rs1 == 1) ? Signals::High : Signals::Low;
        ptrRS0->Signal = (rs0 == 1) ? Signals::High : Signals::Low;
        this->DigitalWrite(ptrRS3->ProxyPin, ptrRS3->Signal);
        this->DigitalWrite(ptrRS2->ProxyPin, ptrRS2->Signal);
        this->DigitalWrite(ptrRS1->ProxyPin, ptrRS1->Signal);
        this->DigitalWrite(ptrRS0->ProxyPin, ptrRS0->Signal);
    }

    void SY6522::SetDataBus(uint8_t dBitFlags)
    {
        // Bit shifts the bits out of the dBitFlags 'byte' we pass as parameter, and forwards them
        // to the other SetDataBus(...) call which takes 8 individual 'bytes' to set signal on the 8 data bus ports D7 to D0
        this->SetDataBus(
            ((dBitFlags >> 0) & 0x01), // D7
            ((dBitFlags >> 1) & 0x01), // D6
            ((dBitFlags >> 2) & 0x01), // D5
            ((dBitFlags >> 3) & 0x01), // D4
            ((dBitFlags >> 4) & 0x01), // D3
            ((dBitFlags >> 5) & 0x01), // D2
            ((dBitFlags >> 6) & 0x01), // D1
            ((dBitFlags >> 7) & 0x01)  // D0
        );
    }

    void SY6522::SetDataBus(uint8_t d7, uint8_t d6, uint8_t d5, uint8_t d4, uint8_t d3, uint8_t d2, uint8_t d1, uint8_t d0)
    {
        ChipPins::ChipPin *ptrD7 = nullptr;
        ChipPins::ChipPin *ptrD6 = nullptr;
        ChipPins::ChipPin *ptrD5 = nullptr;
        ChipPins::ChipPin *ptrD4 = nullptr;
        ChipPins::ChipPin *ptrD3 = nullptr;
        ChipPins::ChipPin *ptrD2 = nullptr;
        ChipPins::ChipPin *ptrD1 = nullptr;
        ChipPins::ChipPin *ptrD0 = nullptr;
        for (unsigned int i = 0; i < *PinsSize; i++)
        {
            auto pinPointer = (Pins + i);
            if (strcmp(pinPointer->Name, "D7") == 0)
            {
                ptrD7 = pinPointer;
                ptrD6 = ptrD7 + 1;
                ptrD5 = ptrD7 + 2;
                ptrD4 = ptrD7 + 3;
                ptrD3 = ptrD7 + 4;
                ptrD2 = ptrD7 + 5;
                ptrD1 = ptrD7 + 6;
                ptrD0 = ptrD7 + 7;
                break;
            }
        }

        ptrD7->Signal = (d7 == 1) ? Signals::High : Signals::Low;
        ptrD6->Signal = (d6 == 1) ? Signals::High : Signals::Low;
        ptrD5->Signal = (d5 == 1) ? Signals::High : Signals::Low;
        ptrD4->Signal = (d4 == 1) ? Signals::High : Signals::Low;
        ptrD3->Signal = (d3 == 1) ? Signals::High : Signals::Low;
        ptrD2->Signal = (d2 == 1) ? Signals::High : Signals::Low;
        ptrD1->Signal = (d1 == 1) ? Signals::High : Signals::Low;
        ptrD0->Signal = (d0 == 1) ? Signals::High : Signals::Low;
        this->DigitalWrite(ptrD7->ProxyPin, ptrD7->Signal);
        this->DigitalWrite(ptrD6->ProxyPin, ptrD6->Signal);
        this->DigitalWrite(ptrD5->ProxyPin, ptrD5->Signal);
        this->DigitalWrite(ptrD4->ProxyPin, ptrD4->Signal);
        this->DigitalWrite(ptrD3->ProxyPin, ptrD3->Signal);
        this->DigitalWrite(ptrD2->ProxyPin, ptrD2->Signal);
        this->DigitalWrite(ptrD1->ProxyPin, ptrD1->Signal);
        this->DigitalWrite(ptrD0->ProxyPin, ptrD0->Signal);
    }

} // namespace Jynsaillar::SY6522
