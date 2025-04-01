#include <iostream>
using namespace std;


//CLASS ACTIVITY 

//ACTIVITY 1 
// class Employee {
    
//         string name;
//         int id;
//         string department;
//         double salary;
//         string position;

//     public:
//         // Constructor 1
//         Employee(string n, int i, string d, double s, string p) {
//             name = n; id = i; department = d; salary = s; position = p;
//         }

//         // Constructor 2
//         Employee(string n, int i) {
//             name = n; id = i; department = " "; position = " "; salary = 0.0;
//         }

//         // Default Constructor
//         Employee() {
//             name = " "; id = 0; department = " "; salary = 0.0; position = " ";
//         }

//         // Setters
//         void setName(string n) { name = n; }
//         void setId(int i) { id = i; }
//         void setDepartment(string d) { department = d; }
//         void setSalary(double s) { salary = s; }
//         void setPosition(string p) { position = p; }

//         // Getters
//         string getName() { return name; }
//         int getId() { return id; }
//         string getDepartment() { return department; }
//         double getSalary() { return salary; }
//         string getPosition() { return position; }

//         // Display function
//         void display() {
//             cout << "Name: " << name << ", ID: " << id << ", Department: " 
//                  << department << ", Salary: " << salary << ", Position: " 
//                  << position << endl;
//         }
// };



struct Employee {
    string name;
    int id;
    string department;
    double salary;
    string position;
};

int main() {
    // Employee e1("Susanwfff", 47899, "Accounting", 13500.0, "Vice President");
    // Employee e2("Matthew", 34522, "IT", 6500.0, "Programmer");
    // Employee e3("James", 65881, "Manufacturing", 7500.0, "Engineer");

    // e1.display();
    // e2.display();
    // e3.display();

   




    Employee e;
    cout << "Enter Name: "; cin >> e.name;
    cout << "Enter ID: "; cin >> e.id;
    cout << "Enter Department: "; cin >> e.department;
    cout << "Enter Salary: "; cin >> e.salary;
    cout << "Enter Position: "; cin >> e.position;

    cout << "\nEmployee Data:\n";
    cout << "Name: " << e.name << ", ID: " << e.id << ", Department: "
         << e.department << ", Salary: " << e.salary << ", Position: " 
         << e.position << endl;

    return 0;
}
