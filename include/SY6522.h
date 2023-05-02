#ifndef __SY6522_H__
#define __SY6522_H__

#include <ChipPins.h>
#include <map>

namespace Jynsaillar::SY6522
{
    class SY6522
    {
        public:
            SY6522();
            const std::map<int, Jynsaillar::ChipPins::ChipPin>& Pins = _pins;
            int MyVal;

        private:
            std::map<int, Jynsaillar::ChipPins::ChipPin> _pins;
    };
} // namespace Jynsaillar::SY6522

#endif // __SY6522_H__