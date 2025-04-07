#include <iostream>
#include <string>
int main() {
    std::string your_name;
    std::cout << "What is your name? ";
    std::getline(std::cin, your_name);

    std::cout << "Hello, " << your_name << "!" << std::endl;

    return 0;
}
