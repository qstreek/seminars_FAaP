#include <iostream>
#include <iomanip>
int main() {
    std::cout << 32 << "   SPACE" << std::endl;
    for (int code = 33; code <= 126; code++) {
        char sim = static_cast <char> (code);
        std::cout << code << "\t" << sim << std::endl;
    }
    return 0;
}