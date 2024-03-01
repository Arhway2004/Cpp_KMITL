#include <iostream>

int main() {
    int height = 5; // Adjust the height of the tree as needed
    int i = 1;
    while (i <= height) {
        int j = 0;
        while (j < height - i) {
            std::cout << " ";
            j++;
        }
        int k = 0;
        while (k < 2 * i - 1) {
            std::cout << "*";
            k++;
        }
        std::cout << std::endl;
        i++;
    }
    // Print the trunk
    int t = 0;
    while (t < height - 1) {
        std::cout << " ";
        t++;
    }
    std::cout << "*" << std::endl;
    
    return 0;
}
