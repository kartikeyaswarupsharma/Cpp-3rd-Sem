#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Constructor with default values
    Student() : name("unknown"), age(0), address("not available") {}

    void setInfo(const std::string& newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // Method to set name, age, and address
    void setInfo(const std::string& newName, int newAge, const std::string& newAddress) {
        name = newName;
        age = newAge;
        address = newAddress;
    }

    // Method to display student information
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    }
};

int main() {
    // Creating an array of 10 students
    Student students[10];

    // Setting information for each student
    students[0].setInfo("John", 20, "123 Main St");
    students[1].setInfo("Alice", 22, "456 Oak Ave");
    students[2].setInfo("Alice", 22, "456 Oak Ave");
    students[3].setInfo("Alice", 22, "456 Oak Ave");
    students[4].setInfo("Alice", 22, "456 Oak Ave");
    students[5].setInfo("Alice", 22, "456 Oak Ave");
    students[6].setInfo("Alice", 22, "456 Oak Ave");
    students[7].setInfo("Alice", 22, "456 Oak Ave");
    students[8].setInfo("Alice", 22, "456 Oak Ave");
    students[9].setInfo("Alice", 22, "456 Oak Ave");
    

    // ... set information for other students

    // Displaying information for each student
    for (int i = 0; i < 10; ++i) {
        std::cout << "Student " << i + 1 << ": ";
        students[i].displayInfo();
    }

    return 0;
}
