#include <iostream>
#include <fstream>
#include <string>

int main()
{
int choice;
std::string testNames[] = {"zero", "one", "two"};


do
{
   std::cout << "0. " << testNames[0] << "\n" << "1. " << testNames[1] << "\n" << "2. " << testNames[2] << "\n";
   std::cin >> choice;

   switch(choice){
        case 0:
            std::cout << "You picked: " << testNames[choice] << " game over\n";
            return 0;

        case 1:
            std::cout << "You picked: " << testNames[choice] << "\n";
            break;

        case 2:
           std::cout << "You picked: " << testNames[choice] << "\n";
            break;    

        default:
            std::cout << "invalid choice, try again\n";
            std::cin >> choice;
   }
} while (choice != 0);

}