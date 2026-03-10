#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string s {"abcdefghijklmnopqrstuvwxyz"};
    for (std::size_t i {}; i < s.size(); ++i) {
        s[i] = std::toupper(s[i]);
    }
    std::cout << s;
}