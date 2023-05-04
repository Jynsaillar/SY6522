#ifndef __SY6522_H__
#define __SY6522_H__

#include <ChipPins.h>
#include <cstdint>
#include <cstring>

namespace Jynsaillar::SY6522
{
    class SY6522
    {
    public:
        SY6522();

        ChipPins::ChipPin *const Pins = _pins;           // Pointer to private IC pin array (fixed size)
        const unsigned int *const PinsSize = &_pinsSize; // Pointer to private constant which defines the number of elements in the pins array

        // Start of Functions
        void (*DigitalWrite)(uint8_t, uint8_t); // Function to write to pin
        void (*Write)(int, int);                // Function to write to pin
        int (*Read)(uint8_t);                   // Function to read pin state
        void (*Delay)(unsigned long);           // Function to sleep for <n> ms

        void PulseClock();                                                                       // Clock goes high, sleep, low, sleep
        void EnableChip();                                                                       // Pulls CS1 high, CS2 low -> chip active
        void ReadMode();                                                                         // R/W high -> chip is in read mode
        void WriteMode();                                                                        // R/W low -> chip is in write mode
        void RegisterSelect(uint8_t rs3, uint8_t rs2, uint8_t rs1, uint8_t rs0);                 // rs3 to rs0 signal which register on the chip is to be written to/read from
        void SetDataBus(uint8_t);                                                                // Sets D7 to D0 with bit flags, each bit represents D<X> -> e.g. SetDataBus(0x00001111) sets D7 to D4 = 0, D3 to D0 = 1
        void SetDataBus(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t); // Sets D7 to D0 explicitly
        // End of Functions

    private:
        inline static const unsigned int _pinsSize = 40;
        ChipPins::ChipPin _pins[_pinsSize];
    };

} // namespace Jynsaillar::SY6522

#endif // __SY6522_H__