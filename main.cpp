#include <iostream>


int main() {
    int x = 42;
    int* xPointer = &x;
    int* &referenceToPointer = xPointer;
    *xPointer = 41;
    std::cout << *referenceToPointer;
}