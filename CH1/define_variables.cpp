#include <iostream>

int main() {
    char c;
    double d;
    float f;

    int arr[10];
    int *parr = arr;
    int sum = 0;

    for (int i = 0; i <= 10; i++) {
        std::cout << i << std::endl;
        sum += i;
    }
    std::cout << sum << std::endl;

    int j = 0;
    while (j <= 10) {
        j++;
        
        if (j > 5) {
            std::cout << '1' << std::endl;
        }
        else {
            std::cout << '0' << std::endl;
        }
    }

    return 0;
}