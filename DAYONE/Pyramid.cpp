#include <iostream>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Increasing numbers
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}