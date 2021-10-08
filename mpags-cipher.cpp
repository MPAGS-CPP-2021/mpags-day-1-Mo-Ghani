#include <vector>
#include <string.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char* argv[]) {

/*
A simple C++ tool to encrypt/decrypt text
*/

std::string version = "0.1.0";

const std::vector<std::string> cmdLineArgs { argv, argv+argc };

for (int i = 0; i < cmdLineArgs.size(); i++){
    auto arg = cmdLineArgs[i];
    if (arg == "--help" || arg == "-h") {
        // print help text for mpags-cipher.cpp
        std::cout << "Some Helpful Text: \nThere will likely be more helpful text when this program is completed \n";
        return 0;
    }
    else if (arg == "--version") {
        // print version number
        std::cout << "Version: " << version << " \n";
        return 0;
    }
    else if (arg == "-i") {
        // store and print input file name
        i++;
        std::string input_file = cmdLineArgs[i];
        std::cout << "Input File: " << input_file << " \n";
    }
    else if (arg == "-o") {
        // store and print output file name
        i++;
        std::string output_file = cmdLineArgs[i];
        std::cout << "Output File: " << output_file << " \n";
    }
    else {
        // print any additional arguments
        std::cout << arg << " ";
        if (i%2 == 0){
            std::cout << "\n";
        }
    }
}
return 0;
}

