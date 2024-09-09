#include <assert.h>
#include <iostream>
#include "TestColorPair.h"

namespace test
{
    void testColorPair::testNumberToPair(int pairNumber,
        TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testColorPair::testPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    void testColorPair::testPrintColorAndPairToFile()
    {
        assert(!TelCoColorCoder::PrintColorAndPairToFile());
    } 
    void testColorPair::testPrintToConsole()
    {
        assert(!TelCoColorCoder::PrintColorsAndPairNumberToConsole());
    }
}
