#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // For each number in the box of numbers...
    for (auto &element : numbers) {
        // 'element' is like looking at the current piece of paper in the box.

        // Let's print the number on this piece of paper.
        std::cout << element << " ";

        // Now, let's say we want to double the number on this piece of paper.
        element = element * 2;
    }

    // After the loop, let's see what's in the box now.
    std::cout << "\nAfter the loop: ";
    for (const auto &element : numbers) {
        std::cout << element << " ";
    }

    return 0;
}

