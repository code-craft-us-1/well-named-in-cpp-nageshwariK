#include "ColorPairReaderWriter.h"
#include <iostream>

namespace TelCoColorCoder
{
   
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    /*void PrintColorsAndPairNumber()
    {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++)
        {
            TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
            std::cout << "Pair number: " << i << "-------" << "Color pair: " << colorPair.ToString() << std::endl;
        }
    }*/

}