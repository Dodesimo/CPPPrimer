#include <cctype>
#include <iostream>
#include <string>

template <typename T>
class Test {
public:
    T f1;
    T f2;
    Test() = default;
    Test (T temp1, T temp2): f1 {temp1}, f2 {temp2} {}
    T addition() {
        return f1 + f2;
    }
};

int main() {
    Test<int> t {2, 3};
    Test<std::string> t2 {"baba", "test"};
    std::cout << t2.addition();
    return 0;
}