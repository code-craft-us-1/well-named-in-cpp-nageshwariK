#pragma once
#include "ColorPairReaderWriter.h"
namespace test
{
    class testColorPair
    {
    public:
        void testNumberToPair(int pairNumber,
            TelCoColorCoder::MajorColor expectedMajor,
            TelCoColorCoder::MinorColor expectedMinor);
        void testPairToNumber(
            TelCoColorCoder::MajorColor major,
            TelCoColorCoder::MinorColor minor,
            int expectedPairNumber);
        void testPrintColorAndPairToFile();   
        void testPrintToConsole();
    };
}
