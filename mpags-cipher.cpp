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

for (std::size_t i{1}; i < cmdLineArgs.size(); i++){

    const auto& arg = cmdLineArgs[i];
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
        if ((i >= cmdLineArgs.size()) || (cmdLineArgs[i][0] == '-')) {
            // raise error if no argument is given
            std::cout << "Missing argument: -i \n";
            return 0;
        }
        std::string input_file = cmdLineArgs[i];
        std::cout << "Input File: " << input_file << " \n";
    }
    else if (arg == "-o") {
        // store and print output file name
        i++;
        if ((i >= cmdLineArgs.size()) || (cmdLineArgs[i][0] == '-')) {
            // raise error if no argument is given
            std::cout << "Missing argument: -o \n";
            return 0;
        }
        std::string output_file = cmdLineArgs[i];
        std::cout << "Output File: " << output_file << " \n";
    }
    else {
        // print any additional arguments
        if (i%2 == 1) {
            std::cout << "Unexpected argument: ";
        }
        std::cout << arg << " ";
        if (i%2 == 0){
            std::cout << "\n";
        }
    }
}

char in_char{'x'};
std::string in_string = "";
std::cout << "Input a character, and press enter to confirm. Use Ctrl+D to end input: \n";
while(std::cin >> in_char)
{
    if (islower(in_char)){
        in_char -= 32;
    }
    switch (in_char) {
        case '0':
            in_string += "ZERO";
            break;
        case '1':
            in_string += "ONE";
            break;
        case '2':
            in_string += "TWO";
            break;
        case '3':
            in_string += "THREE";
            break;
        case '4':
            in_string += "FOUR";
            break;
        case '5':
            in_string += "FIVE";
            break;
        case '6':
            in_string += "SIX";
            break;
        case '7':
            in_string += "SEVEN";
            break;
        case '8':
            in_string += "EIGHT";
            break;
        case '9':
            in_string += "NINE";
            break;
    }
    if (isdigit(in_char) || not isalpha(in_char)) {
        continue;
    }
    else {
        in_string += in_char;
    }
}
std::cout << "Input string: " << in_string << "\n";
return 0;
}

