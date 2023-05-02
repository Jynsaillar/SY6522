#include "SY6522.h"

namespace Jynsaillar::SY6522
{

    SY6522::SY6522()
    {
        auto PinVSS = Jynsaillar::ChipPins::ChipPin();
        PinVSS.Name = "VSS";
        PinVSS.Enabled = true;
        PinVSS.ActivationType = ActivationTypes::ActiveHigh;
        PinVSS.PinType = Jynsaillar::PinTypes::Analog;
        PinVSS.Signal = Jynsaillar::Signals::HighImpedance;

        auto PinPA0 = Jynsaillar::ChipPins::ChipPin();
        PinPA0.Name = "PA0";
        PinPA0.Enabled = true;
        PinPA0.ActivationType = ActivationTypes::ActiveHigh;
        PinPA0.PinType = Jynsaillar::PinTypes::Digital;
        PinPA0.Signal = Jynsaillar::Signals::Low;

        auto PinPA1 = Jynsaillar::ChipPins::ChipPin();
        PinPA1.Name = "PA1";
        PinPA1.Enabled = true;
        PinPA1.ActivationType = ActivationTypes::ActiveHigh;
        PinPA1.PinType = Jynsaillar::PinTypes::Digital;
        PinPA1.Signal = Jynsaillar::Signals::Low;

        auto PinPA2 = Jynsaillar::ChipPins::ChipPin();
        PinPA2.Name = "PA2";
        PinPA2.Enabled = true;
        PinPA2.ActivationType = ActivationTypes::ActiveHigh;
        PinPA2.PinType = Jynsaillar::PinTypes::Digital;
        PinPA2.Signal = Jynsaillar::Signals::Low;

        auto PinPA3 = Jynsaillar::ChipPins::ChipPin();
        PinPA3.Name = "PA3";
        PinPA3.Enabled = true;
        PinPA3.ActivationType = ActivationTypes::ActiveHigh;
        PinPA3.PinType = Jynsaillar::PinTypes::Digital;
        PinPA3.Signal = Jynsaillar::Signals::Low;

        auto PinPA4 = Jynsaillar::ChipPins::ChipPin();
        PinPA4.Name = "PA4";
        PinPA4.Enabled = true;
        PinPA4.ActivationType = ActivationTypes::ActiveHigh;
        PinPA4.PinType = Jynsaillar::PinTypes::Digital;
        PinPA4.Signal = Jynsaillar::Signals::Low;

        auto PinPA5 = Jynsaillar::ChipPins::ChipPin();
        PinPA5.Name = "PA5";
        PinPA5.Enabled = true;
        PinPA5.ActivationType = ActivationTypes::ActiveHigh;
        PinPA5.PinType = Jynsaillar::PinTypes::Digital;
        PinPA5.Signal = Jynsaillar::Signals::Low;

        auto PinPA6 = Jynsaillar::ChipPins::ChipPin();
        PinPA6.Name = "PA6";
        PinPA6.Enabled = true;
        PinPA6.ActivationType = ActivationTypes::ActiveHigh;
        PinPA6.PinType = Jynsaillar::PinTypes::Digital;
        PinPA6.Signal = Jynsaillar::Signals::Low;

        auto PinPA7 = Jynsaillar::ChipPins::ChipPin();
        PinPA7.Name = "PA7";
        PinPA7.Enabled = true;
        PinPA7.ActivationType = ActivationTypes::ActiveHigh;
        PinPA7.PinType = Jynsaillar::PinTypes::Digital;
        PinPA7.Signal = Jynsaillar::Signals::Low;

        auto PinPB0 = Jynsaillar::ChipPins::ChipPin();
        PinPB0.Name = "PB0";
        PinPB0.Enabled = true;
        PinPB0.ActivationType = ActivationTypes::ActiveHigh;
        PinPB0.PinType = Jynsaillar::PinTypes::Digital;
        PinPB0.Signal = Jynsaillar::Signals::Low;

        auto PinPB1 = Jynsaillar::ChipPins::ChipPin();
        PinPB1.Name = "PB1";
        PinPB1.Enabled = true;
        PinPB1.ActivationType = ActivationTypes::ActiveHigh;
        PinPB1.PinType = Jynsaillar::PinTypes::Digital;
        PinPB1.Signal = Jynsaillar::Signals::Low;

        auto PinPB2 = Jynsaillar::ChipPins::ChipPin();
        PinPB2.Name = "PB2";
        PinPB2.Enabled = true;
        PinPB2.ActivationType = ActivationTypes::ActiveHigh;
        PinPB2.PinType = Jynsaillar::PinTypes::Digital;
        PinPB2.Signal = Jynsaillar::Signals::Low;

        auto PinPB3 = Jynsaillar::ChipPins::ChipPin();
        PinPB3.Name = "PB3";
        PinPB3.Enabled = true;
        PinPB3.ActivationType = ActivationTypes::ActiveHigh;
        PinPB3.PinType = Jynsaillar::PinTypes::Digital;
        PinPB3.Signal = Jynsaillar::Signals::Low;

        auto PinPB4 = Jynsaillar::ChipPins::ChipPin();
        PinPB4.Name = "PB4";
        PinPB4.Enabled = true;
        PinPB4.ActivationType = ActivationTypes::ActiveHigh;
        PinPB4.PinType = Jynsaillar::PinTypes::Digital;
        PinPB4.Signal = Jynsaillar::Signals::Low;

        auto PinPB5 = Jynsaillar::ChipPins::ChipPin();
        PinPB5.Name = "PB5";
        PinPB5.Enabled = true;
        PinPB5.ActivationType = ActivationTypes::ActiveHigh;
        PinPB5.PinType = Jynsaillar::PinTypes::Digital;
        PinPB5.Signal = Jynsaillar::Signals::Low;

        auto PinPB6 = Jynsaillar::ChipPins::ChipPin();
        PinPB6.Name = "PB6";
        PinPB6.Enabled = true;
        PinPB6.ActivationType = ActivationTypes::ActiveHigh;
        PinPB6.PinType = Jynsaillar::PinTypes::Digital;
        PinPB6.Signal = Jynsaillar::Signals::Low;

        auto PinPB7 = Jynsaillar::ChipPins::ChipPin();
        PinPB7.Name = "PB7";
        PinPB7.Enabled = true;
        PinPB7.ActivationType = ActivationTypes::ActiveHigh;
        PinPB7.PinType = Jynsaillar::PinTypes::Digital;
        PinPB7.Signal = Jynsaillar::Signals::Low;

        auto PinCB1 = Jynsaillar::ChipPins::ChipPin();
        PinCB1.Name = "CB1";
        PinCB1.Enabled = true;
        PinCB1.ActivationType = ActivationTypes::ActiveHigh;
        PinCB1.PinType = Jynsaillar::PinTypes::Digital;
        PinCB1.Signal = Jynsaillar::Signals::Low;

        auto PinCB2 = Jynsaillar::ChipPins::ChipPin();
        PinCB2.Name = "CB2";
        PinCB2.Enabled = true;
        PinCB2.ActivationType = ActivationTypes::ActiveHigh;
        PinCB2.PinType = Jynsaillar::PinTypes::Digital;
        PinCB2.Signal = Jynsaillar::Signals::Low;

        auto PinVCC = Jynsaillar::ChipPins::ChipPin();
        PinVCC.Name = "VCC";
        PinVCC.Enabled = true;
        PinVCC.ActivationType = ActivationTypes::ActiveHigh;
        PinVCC.PinType = Jynsaillar::PinTypes::Analog;
        PinVCC.Signal = Jynsaillar::Signals::HighImpedance;

        auto PinIRQ = Jynsaillar::ChipPins::ChipPin();
        PinIRQ.Name = "IRQ";
        PinIRQ.Enabled = true;
        PinIRQ.ActivationType = ActivationTypes::ActiveLow;
        PinIRQ.PinType = Jynsaillar::PinTypes::Digital;
        PinIRQ.Signal = Jynsaillar::Signals::High;

        auto PinRW = Jynsaillar::ChipPins::ChipPin();
        PinRW.Name = "RW";
        PinRW.Enabled = true;
        PinRW.ActivationType = ActivationTypes::ActiveHigh;
        PinRW.PinType = Jynsaillar::PinTypes::Digital;
        PinRW.Signal = Jynsaillar::Signals::Low;

        auto PinCS2 = Jynsaillar::ChipPins::ChipPin();
        PinCS2.Name = "CS2";
        PinCS2.Enabled = true;
        PinCS2.ActivationType = ActivationTypes::ActiveHigh;
        PinCS2.PinType = Jynsaillar::PinTypes::Digital;
        PinCS2.Signal = Jynsaillar::Signals::Low;

        auto PinCS1 = Jynsaillar::ChipPins::ChipPin();
        PinCS1.Name = "CS1";
        PinCS1.Enabled = true;
        PinCS1.ActivationType = ActivationTypes::ActiveHigh;
        PinCS1.PinType = Jynsaillar::PinTypes::Digital;
        PinCS1.Signal = Jynsaillar::Signals::Low;

        auto PinCLK2 = Jynsaillar::ChipPins::ChipPin();
        PinCLK2.Name = "CLK2";
        PinCLK2.Enabled = true;
        PinCLK2.ActivationType = ActivationTypes::ActiveHigh;
        PinCLK2.PinType = Jynsaillar::PinTypes::Digital;
        PinCLK2.Signal = Jynsaillar::Signals::Low;

        auto PinD7 = Jynsaillar::ChipPins::ChipPin();
        PinD7.Name = "D7";
        PinD7.Enabled = true;
        PinD7.ActivationType = ActivationTypes::ActiveHigh;
        PinD7.PinType = Jynsaillar::PinTypes::Digital;
        PinD7.Signal = Jynsaillar::Signals::Low;

        auto PinD6 = Jynsaillar::ChipPins::ChipPin();
        PinD6.Name = "D6";
        PinD6.Enabled = true;
        PinD6.ActivationType = ActivationTypes::ActiveHigh;
        PinD6.PinType = Jynsaillar::PinTypes::Digital;
        PinD6.Signal = Jynsaillar::Signals::Low;

        auto PinD5 = Jynsaillar::ChipPins::ChipPin();
        PinD5.Name = "D5";
        PinD5.Enabled = true;
        PinD5.ActivationType = ActivationTypes::ActiveHigh;
        PinD5.PinType = Jynsaillar::PinTypes::Digital;
        PinD5.Signal = Jynsaillar::Signals::Low;

        auto PinD4 = Jynsaillar::ChipPins::ChipPin();
        PinD4.Name = "D4";
        PinD4.Enabled = true;
        PinD4.ActivationType = ActivationTypes::ActiveHigh;
        PinD4.PinType = Jynsaillar::PinTypes::Digital;
        PinD4.Signal = Jynsaillar::Signals::Low;

        auto PinD3 = Jynsaillar::ChipPins::ChipPin();
        PinD3.Name = "D3";
        PinD3.Enabled = true;
        PinD3.ActivationType = ActivationTypes::ActiveHigh;
        PinD3.PinType = Jynsaillar::PinTypes::Digital;
        PinD3.Signal = Jynsaillar::Signals::Low;

        auto PinD2 = Jynsaillar::ChipPins::ChipPin();
        PinD2.Name = "D2";
        PinD2.Enabled = true;
        PinD2.ActivationType = ActivationTypes::ActiveHigh;
        PinD2.PinType = Jynsaillar::PinTypes::Digital;
        PinD2.Signal = Jynsaillar::Signals::Low;

        auto PinD1 = Jynsaillar::ChipPins::ChipPin();
        PinD1.Name = "D1";
        PinD1.Enabled = true;
        PinD1.ActivationType = ActivationTypes::ActiveHigh;
        PinD1.PinType = Jynsaillar::PinTypes::Digital;
        PinD1.Signal = Jynsaillar::Signals::Low;

        auto PinD0 = Jynsaillar::ChipPins::ChipPin();
        PinD0.Name = "D0";
        PinD0.Enabled = true;
        PinD0.ActivationType = ActivationTypes::ActiveHigh;
        PinD0.PinType = Jynsaillar::PinTypes::Digital;
        PinD0.Signal = Jynsaillar::Signals::Low;

        auto PinRES = Jynsaillar::ChipPins::ChipPin();
        PinRES.Name = "RES";
        PinRES.Enabled = true;
        PinRES.ActivationType = ActivationTypes::ActiveLow;
        PinRES.PinType = Jynsaillar::PinTypes::Digital;
        PinRES.Signal = Jynsaillar::Signals::High;

        auto PinRS3 = Jynsaillar::ChipPins::ChipPin();
        PinRS3.Name = "RS3";
        PinRS3.Enabled = true;
        PinRS3.ActivationType = ActivationTypes::ActiveHigh;
        PinRS3.PinType = Jynsaillar::PinTypes::Digital;
        PinRS3.Signal = Jynsaillar::Signals::Low;

        auto PinRS2 = Jynsaillar::ChipPins::ChipPin();
        PinRS2.Name = "RS2";
        PinRS2.Enabled = true;
        PinRS2.ActivationType = ActivationTypes::ActiveHigh;
        PinRS2.PinType = Jynsaillar::PinTypes::Digital;
        PinRS2.Signal = Jynsaillar::Signals::Low;

        auto PinRS1 = Jynsaillar::ChipPins::ChipPin();
        PinRS1.Name = "RS1";
        PinRS1.Enabled = true;
        PinRS1.ActivationType = ActivationTypes::ActiveHigh;
        PinRS1.PinType = Jynsaillar::PinTypes::Digital;
        PinRS1.Signal = Jynsaillar::Signals::Low;

        auto PinRS0 = Jynsaillar::ChipPins::ChipPin();
        PinRS0.Name = "RS0";
        PinRS0.Enabled = true;
        PinRS0.ActivationType = ActivationTypes::ActiveHigh;
        PinRS0.PinType = Jynsaillar::PinTypes::Digital;
        PinRS0.Signal = Jynsaillar::Signals::Low;

        auto PinCA2 = Jynsaillar::ChipPins::ChipPin();
        PinCA2.Name = "CA2";
        PinCA2.Enabled = true;
        PinCA2.ActivationType = ActivationTypes::ActiveHigh;
        PinCA2.PinType = Jynsaillar::PinTypes::Digital;
        PinCA2.Signal = Jynsaillar::Signals::Low;

        auto PinCA1 = Jynsaillar::ChipPins::ChipPin();
        PinCA1.Name = "CA1";
        PinCA1.Enabled = true;
        PinCA1.ActivationType = ActivationTypes::ActiveHigh;
        PinCA1.PinType = Jynsaillar::PinTypes::Digital;
        PinCA1.Signal = Jynsaillar::Signals::Low;

        _pins = {
            {1, PinVSS},
            {2, PinPA0},
            {3, PinPA1},
            {4, PinPA2},
            {5, PinPA3},
            {6, PinPA4},
            {7, PinPA5},
            {8, PinPA6},
            {9, PinPA7},
            {10, PinPB0},
            {11, PinPB1},
            {12, PinPB2},
            {13, PinPB3},
            {14, PinPB4},
            {15, PinPB5},
            {16, PinPB6},
            {17, PinPB7},
            {18, PinCB1},
            {19, PinCB2},
            {20, PinVCC},
            {21, PinIRQ},
            {22, PinRW},
            {23, PinCS2},
            {24, PinCS1},
            {25, PinCLK2},
            {26, PinD7},
            {27, PinD6},
            {28, PinD5},
            {29, PinD4},
            {30, PinD3},
            {31, PinD2},
            {32, PinD1},
            {33, PinD0},
            {34, PinRES},
            {35, PinRS3},
            {36, PinRS2},
            {37, PinRS1},
            {38, PinRS0},
            {39, PinCA2},
            {40, PinCA1}};
    }

} // namespace Jynsaillar::SY6522
