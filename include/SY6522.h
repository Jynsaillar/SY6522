#ifndef __SY6522_H__
#define __SY6522_H__

#include <ChipPins.h>
#include <cstdint>
#include <map>

namespace Jynsaillar::SY6522
{
    class SY6522
    {
    public:
        SY6522();
        const std::map<int, Jynsaillar::ChipPins::ChipPin> &Pins = _pins;

        void (*Write)(uint8_t, uint8_t); // Function to write to pin
        void (*Write)(int, int); // Function to write to pin
        int (*Read)(void);       // Function to read pin state

    private:
        std::map<int, Jynsaillar::ChipPins::ChipPin> _pins;
    };
} // namespace Jynsaillar::SY6522

#endif // __SY6522_H__