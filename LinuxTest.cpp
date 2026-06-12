#include <iostream>
#include <string>

int main() {
    int currentProgress;
    std::cout << "You are currently 60% done with N5!" << std::endl;
    std::cout << "Enter your current study percentage (0-100): ";
    std::cin >> currentProgress;

    if (currentProgress >= 100) {
        std::cout << "You are ready for the exam in December!" << std::endl;
    } else {
        std::cout << "You have " << (100 - currentProgress) << "% left to go. Gambare!" << std::endl;
    }
    return 0;
}