#include <string>
#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

int main()
{
    std::vector<std::string> enteries;
    std::string path = "/Users/matthewbelknap/Documents/Code_Cpp/caleb/";
    for (const auto & entry : fs::directory_iterator(path)){
        enteries.push_back(entry.path());
        std::cout << entry.path() << std::endl;
    }
    int i = 0;
    int choice;
    for (const auto & ent : enteries){
        std::cout << "File " << i <<  " is: " << ent << "\n";
        i++;
        }
    std::cout << "what file would you like to open? 0 - "<< i-1 << "\n";
    std::cin >> choice;
    std::cout << "openning " << enteries[choice] << " .\n";
   
}