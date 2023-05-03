#ifndef __SY6522_H__
#define __SY6522_H__

#include <ChipPins.h>
#include <cstdint>

namespace Jynsaillar::SY6522
{
    class SY6522
    {
    public:
        SY6522();

        ChipPins::ChipPin *const Pins = pins;           // Pointer to private IC pin array (fixed size)
        const unsigned int *const PinsSize = &pinsSize; // Pointer to private constant which defines the number of elements in the pins array

        void (*DigitalWrite)(uint8_t, uint8_t); // Function to write to pin
        void (*Write)(int, int);                // Function to write to pin
        int (*Read)(uint8_t);                   // Function to read pin state

    private:
        inline static const unsigned int _pinsSize = 40;
        ChipPins::ChipPin _pins[_pinsSize];
    };

} // namespace Jynsaillar::SY6522

#endif // __SY6522_H__