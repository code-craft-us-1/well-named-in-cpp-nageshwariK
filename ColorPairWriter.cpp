#include "ColorPairReaderWriter.h"
#include <stdio.h>
#include <iostream>
#include <fstream>

namespace TelCoColorCoder
{
    void PrintColorsAndPairNumberToConsole()
    {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++)
        {
            TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
            std::cout << "Pair number: " << i << "-------" << "Color pair: " << colorPair.ToString() << std::endl;
        }
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
        // Create an ofstream object to open the file for writing
        std::ofstream outfile(filename);
        // Check if the file stream was successfully opened
        if (!outfile) {
            std::cerr << "Error opening file for writing: " << filename << std::endl;
            return 1; // Return a non-zero value to indicate failure
        }
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++)
        {
            TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
            // Write some text into the file
            outfile << "Pair number: " << i << "-------" << "Color pair: " << colorPair.ToString() << std::endl;
            //outfile << "Writing to a file using C++ is straightforward." << std::endl;
        }        
        // Close the file stream
        outfile.close();
        std::cout << "Data successfully written to " << filename << std::endl;
        return 0;
    }
}