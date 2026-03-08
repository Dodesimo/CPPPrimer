#include <iostream>


int main() {
    const int x = 42;
    int y = 42;
    const int* ptr = &x; // this is a pointer to a const int
    int* const ptrConst = &y; // this is a const pointer to an int
    const int* const constPtrConst = &x; //this is a const pointer to a const int
}   