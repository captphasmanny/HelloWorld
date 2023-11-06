#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, Earth!";
    std::cin.clear(); //resets any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore any characters in the input buffer until we find a new line
    std::cin.get(); //get one more character from the user (waits for user to press enter)
    return 0;
}
