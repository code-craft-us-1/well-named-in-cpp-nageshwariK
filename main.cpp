#include <iostream>
#include <assert.h>
#include "TestColorPair.h"

int main()
{
    test::testColorPair testColor;
    testColor.testNumberToPair(4, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::BROWN);
    testColor.testNumberToPair(5, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::SLATE);

    testColor.testPairToNumber(TelCoColorCoder::MajorColor::BLACK, TelCoColorCoder::MinorColor::ORANGE, 12);
    testColor.testPairToNumber(TelCoColorCoder::MajorColor::VIOLET, TelCoColorCoder::MinorColor::SLATE, 25);

    testColor.testPrintColorAndPairToFile();
    return 0;
}

