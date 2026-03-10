#include <iostream>
#include <string>

int main() {
    std::string s {"fhjdklasfhdslakSDFHJLKhfdlahfjslkdashdfFDSLJH"};
    int lowerCounter {};
    for (const auto& c : s) {
        if (std::islower(c)) {
            ++lowerCounter;
        }
    }
    std::cout << lowerCounter;
    return 0;
}