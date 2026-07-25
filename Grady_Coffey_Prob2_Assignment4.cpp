#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    // Default constructor
    Person() {
        name = nullptr;
        age = 0;
    }

    // Parameteryzed constructor
    Person(const char* n, int a) {
        age = a;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Copy constructor (Deep Copy)
    Person(const Person& other) {
        age = other.age;
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    // Destructor
    ~Person() {
        delete[] name;
    }

    // Function to modify name from Grady to Layla
    void setName(const char* newName) {
        delete[] name;
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    // Display info
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Original object
    Person p1("Grady", 19);

    // Shallow copy 
    Person p2;
    p2 = p1;

    // Deep copy 
    Person p3(p1);

    cout << "Before modification:\n";
    cout << "P1: ";
    p1.display();

    cout << "P2 (Shallow Copy): ";
    p2.display();

    cout << "P3 (Deep Copy): ";
    p3.display();

    // Sets original object's name to Layla
    p1.setName("Layla");

    cout << "\nAfter modifying P1's name:\n";
    cout << "P1: ";
    p1.display();

    cout << "P2 (Shallow Copy): ";
    p2.display();

    cout << "P3 (Deep Copy): ";
    p3.display();

    return 0;
}
