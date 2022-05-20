#include <iostream>
#include "app_funct.h"



int main(){
    int choice;
    int power_of_choice;

    std::cout << "enter a number between 1 & 5: \n";
    std::cin >> choice;
    valid_input(choice);
    times_ten(choice);
    int x = doubled(choice);
    std::cout << &choice << " address of choice. \n";
    std::cout << &x << " address of x in main. \n";
    
 
}