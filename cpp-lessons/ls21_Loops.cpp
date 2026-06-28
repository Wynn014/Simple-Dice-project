#include <iostream>

int main() {
    std::string name;

    // The loop keeps running and re-prompting if the user presses enter without typing anything
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}