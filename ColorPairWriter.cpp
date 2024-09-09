#include "ColorPairReaderWriter.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

namespace TelCoColorCoder
{
    int PrintColorsAndPairNumberToConsole()
    {
        return Print("");
    }

    int PrintColorAndPairToFile()
    {
        std::string filename = "ColorPairManual.txt";
        std::ifstream file(filename.c_str());
        if (file)
        {
            if (remove(filename.c_str()))
            {
                std::cout << "File removal failed" << std::endl;
            }
        }          
       
        return Print(filename);
    }

    int Print(std::string fileName)
    {
        std::ofstream outfile(fileName);
        
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++)
        {
            TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
            std::string str = "Pair number: " + std::to_string(i) + std::string("--------------Color pair: ") + colorPair.ToString();
            if (fileName.empty())
            {
                std::cout << str << std::endl;
            }
            else
            {
                outfile << str << std::endl;
            }            
        }
        outfile.close();
        return 0;
    }
}