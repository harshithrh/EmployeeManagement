#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure to represent an employee
struct Employee {
    string name;
    int age;
    string department;
    double salary;
};

// Function to add a new employee to the system
void addEmployee(vector<Employee>& employees) {
    Employee newEmployee;
    cout << "Enter employee name: ";
    cin.ignore(); // Ignore the newline character left by cin
    getline(cin, newEmployee.name);
    cout << "Enter employee age: ";
    cin >> newEmployee.age;
    cout << "Enter employee department: ";
    cin.ignore(); // Ignore the newline character left by cin
    getline(cin, newEmployee.department);
    cout << "Enter employee salary: ";
    cin >> newEmployee.salary;

    employees.push_back(newEmployee);
    cout << "Employee added successfully!" << endl;
}

// Function to display all employees in the system
void displayEmployees(const vector<Employee>& employees) {
    cout << "\nEmployees:" << endl;
    cout << "-----------------------------------" << endl;
    for (const auto& employee : employees) {
        cout << "Name: " << employee.name << ", Age: " << employee.age << ", Department: " << employee.department << ", Salary: $" << employee.salary << endl;
    }
    cout << "-----------------------------------" << endl;
}

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(employees);
                break;
            case 2:
                displayEmployees(employees);
                break;
            case 3:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 3." << endl;
        }
    } while (choice != 3);

    return 0;
}
