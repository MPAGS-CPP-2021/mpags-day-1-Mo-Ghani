#include <vector>
#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
const std::vector<std::string> cmdLineArgs { argv, argv+argc };

for (int i; i < argc; i++){
    std::cout << argv[i] << "\n";
}
return 0;
}