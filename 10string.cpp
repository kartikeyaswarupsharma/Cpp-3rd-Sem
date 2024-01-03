#include <iostream>
#include <string>

void bubbleSort(std::string arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Compare adjacent strings and swap if needed
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int numStrings = 10;
    std::string strings[numStrings];

    // Input 10 strings
    std::cout << "Enter 10 strings:\n";
    for (int i = 0; i < numStrings; ++i) {
        std::cout << "String " << i + 1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    // Sort the array of strings using bubble sort
    bubbleSort(strings, numStrings);

    // Display the sorted strings
    std::cout << "\nSorted Strings:\n";
    for (int i = 0; i < numStrings; ++i) {
        std::cout << strings[i] << std::endl;
    }

    return 0;
}
