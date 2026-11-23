#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    Employee() : empId(0), name("Unknown"), basicSalary(0), bonus(0), totalSalary(0) {
        cout << "Default constructor called" << endl;
    }

    Employee(int id, string n, float salary, float b) {
        empId = id;
        name = n;
        basicSalary = salary;
        bonus = b;
        calculateTotalSalary();
        cout << "Parameterized constructor called" << endl;
    }

    void calculateTotalSalary() {
        totalSalary = basicSalary + bonus;
    }

    void display() const {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Employee e1;
    Employee e2(101, "Rahul", 25000, 5000);

    cout << "\nEmployee 1 Details:" << endl;
    e1.display();

    cout << "\nEmployee 2 Details:" << endl;
    e2.display();

    return 0;
}