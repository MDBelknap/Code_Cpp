#include <iostream>
#include "app_funct.h"

void times_ten(int t){
    int product = t;
    std::cout << product * 10 << "\n";
}

int doubled(int& x){
    std::cout << &x << " address of pointer in function. \n";
    return x * 2;
}

void valid_input(int &c)
{
    bool valid = false;
    
    while(!valid)
    {
        switch(c){
            case 1:
                std::cout << "you picked 1\n";
                valid = true;
                break;

            case 2: 
                std::cout << "you picked 2\n";
                valid = true;
                break;

            case 3: 
                std::cout << "you picked 3\n";
                valid = true;
                break;

            case 4 :
                std::cout << "you picked 4\n";
                valid = true;
                break;

            case 5: 
                std::cout << "you picked 5\n";
                valid = true;
                break;

            default:
                std::cout << "not a number between 1 & 5. \ntry again: \n";
                valid = false;
                std::cin >> c;
                break;
        }
    }
}

