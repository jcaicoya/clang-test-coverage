#include <iostream>
#include "primality.h"

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (is_prime(num)) {
        std::cout << num << " is prime.\n";
    } else {
        std::cout << num << " is not prime.\n";
    }

    return 0;
}
