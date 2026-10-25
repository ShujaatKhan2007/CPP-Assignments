
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    Person(string n) : name(n) {}

    void showPerson()
    {
        cout << "Name: " << name << endl;
    }

    virtual ~Person() {}
};

// 1. Single inheritance
// Student inherits from Person
class Student : virtual public Person
{
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n), rollNo(r) {}

    void showStudent()
    {
        showPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};

// 2. Multilevel inheritance
// Person -> Student -> GraduateStudent
class GraduateStudent : public Student
{
    string researchTopic;

public:
    GraduateStudent(string n, int r, string topic)
        : Person(n), Student(n, r), researchTopic(topic) {}

    void showGraduateStudent()
    {
        showStudent();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

// 3. Multiple inheritance
class Camera
{
public:
    void takePhoto()
    {
        cout << "Camera: Photo captured" << endl;
    }
};

class GPS
{
public:
    void showLocation()
    {
        cout << "GPS: Campus location detected" << endl;
    }
};

class SmartDevice : public Camera, public GPS
{
public:
    void showDevice()
    {
        takePhoto();
        showLocation();
    }
};

// 4. Hierarchical inheritance
// Person -> Student and Employee
class Employee : virtual public Person
{
protected:
    string department;

public:
    Employee(string n, string d)
        : Person(n), department(d) {}

    void showEmployee()
    {
        showPerson();
        cout << "Department: " << department << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(string n, string d)
        : Person(n), Employee(n, d) {}

    void showManager()
    {
        showEmployee();
        cout << "Role: Manager" << endl;
    }
};

class Developer : public Employee
{
public:
    Developer(string n, string d)
        : Person(n), Employee(n, d) {}

    void showDeveloper()
    {
        showEmployee();
        cout << "Role: Developer" << endl;
    }
};

// 5. Hybrid inheritance
// TeachingAssistant inherits from Student and Employee
class TeachingAssistant : public Student, public Employee
{
public:
    TeachingAssistant(string n, int r, string d)
        : Person(n), Student(n, r), Employee(n, d) {}

    void showTeachingAssistant()
    {
        showPerson();
        cout << "Roll No: " << rollNo << endl;
        cout << "Department: " << department << endl;
        cout << "Role: Teaching Assistant" << endl;
    }
};

int main()
{
    cout << "===== SINGLE INHERITANCE =====" << endl;
    Student s("Aarav", 101);
    s.showStudent();

    cout << "\n===== MULTILEVEL INHERITANCE =====" << endl;
    GraduateStudent gs("Meera", 201, "Artificial Intelligence");
    gs.showGraduateStudent();

    cout << "\n===== MULTIPLE INHERITANCE =====" << endl;
    SmartDevice device;
    device.showDevice();

    cout << "\n===== HIERARCHICAL INHERITANCE =====" << endl;
    Manager m("Rahul", "Administration");
    m.showManager();

    Developer d("Neha", "Software Development");
    d.showDeveloper();

    cout << "\n===== HYBRID INHERITANCE =====" << endl;
    TeachingAssistant ta("Kabir", 301, "AI and ML");
    ta.showTeachingAssistant();

    return 0;
}

