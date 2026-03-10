#include <iostream>
#include <string>

int main() {
    std::string s {"test"};
    std::string s2 {"a" + s}; //we can add one string to another literal
    std::string s3 {"a" + "b"}; //this is illegal we can't add two literals
}   