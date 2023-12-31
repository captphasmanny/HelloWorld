#include <iostream>
#include <limits>

int main() //ALL PROGRAMS MUST INCLUDE A MAIN FUNCTION
{
    std::cout << "Hello, World!" << std::endl;
    std::cin.clear(); //resets any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any characters in the input buffer until we find a new line
    std::cin.get(); //get one more character from the user (waits for user to press enter)
    return 0;
}
