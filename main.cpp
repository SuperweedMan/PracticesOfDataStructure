#include <iostream>

int main() {
    int test[5] = {0, 1, 2, 3, 4};
    int *p = test;
    std::cout << *(p + 4) << std::endl;
    return 0;
}
