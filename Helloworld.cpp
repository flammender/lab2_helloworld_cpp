#include <iostream>
#include <string>

int main() {
    std::string name;   //Variable to store the user's name
    std::cout << "Enter your name: ";   //Prompt the user for their name
    std::cin >> name;   //Read the entered name
    std::cout << "Hello world from " << name << "!" << std::endl;   //Output the greeting
    return 0;   //End of the program
{
