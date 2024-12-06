//Matthew Martin
//cctype lab
//12/6/2024
#include <iostream>
#include <cctype>

std::string name;

int main() {
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;
    for(int i = 0; i < name.length(); i++) {
        char c = name.at(i);
        bool letter = std::isalpha(c);
        if(!letter) {
            std::cout << std::endl;
            std::cout << "You cannot use numbers or special characters" << std::endl;
            break;
        }
        else {
            std::cout << static_cast<char>(std::toupper(c));
        }
    }
    return 0;
}
