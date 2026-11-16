
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Student
{
    string name;

public:

    // Parameterized constructor
    Student(string n)
    {
        name = n;
    }

    // Move constructor
    Student(Student&& other) noexcept
    {
        name = std::move(other.name);
        other.name.clear();

        cout << "Move Constructor Called" << endl;
    }

    // Move assignment operator
    Student& operator=(Student&& other) noexcept
    {
        if (this != &other)
        {
            name = std::move(other.name);
            other.name.clear();
        }

        cout << "Move Assignment Operator Called" << endl;

        return *this;
    }

    // Display function
    void display()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // Creating first object
    Student s1("Shujaat");

    cout << "Before Move Construction:" << endl;
    s1.display();

    // Move construction
    Student s2 = std::move(s1);

    cout << "\nAfter Move Construction:" << endl;

    cout << "Source Object: ";
    s1.display();

    cout << "Destination Object: ";
    s2.display();

    // Creating another object
    Student s3("Temporary");

    // Move assignment
    s3 = std::move(s2);

    cout << "\nAfter Move Assignment:" << endl;

    cout << "Source Object: ";
    s2.display();

    cout << "Destination Object: ";
    s3.display();

    return 0;
}

