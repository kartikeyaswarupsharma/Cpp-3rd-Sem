#include <iostream>
#include <vector>

void displayEvenOddRollNumbers(const std::vector<int>& rollNumbers) {
    for (int rollNumber : rollNumbers) {
        if (rollNumber % 2 == 0) {
            std::cout << rollNumber << " ";
        }
    }

    for (int rollNumber : rollNumbers) {
        if (rollNumber % 2 != 0) {
            std::cout << rollNumber << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    // Input roll numbers
    std::vector<int> rollNumbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Display even and odd roll numbers
    displayEvenOddRollNumbers(rollNumbers);

    return 0;
}
