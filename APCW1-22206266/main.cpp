#include <iostream>
#include "Gradebook.h"
#include "Student.h"
#include "Course.h"
#include "Department.h"
#include "School.h"

void displaySchoolInfo(School* school) {
    std::cout << "School Name: " << school->getName() << std::endl;
}

void addStudentFromInput(Gradebook& gradebook, School& school) {
    int id;
    std::string name;
    std::cout << "Enter Student ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Student Name: ";
    std::getline(std::cin, name);

                std::cout << "Choose Department:\n1. Computer Science\n2. Math\n3. Law\nEnter your choice: ";
    int departmentChoice;
    std::cin >> departmentChoice;
    std::cin.ignore();

    Department* department = nullptr;
    switch (departmentChoice) {
        case 1: department = school.findDepartment("Computer Science"); break;
        case 2: department = school.findDepartment("Math"); break;
        case 3: department = school.findDepartment("Law"); break;
        default:
                        std::cout << "Invalid choice! Defaulting to Computer Science.\n";
            department = school.findDepartment("Computer Science");
            break;
    }

                 if (!department) throw std::runtime_error("Department not found!");

    Student* student = new Student(id, name);
    gradebook.addStudent(student);

    int courseID;
    std::string courseName;
    double grade;

    std::cout << "Enter Course ID: ";
    std::cin >> courseID;
    std::cin.ignore();
    
    
    
    std::cout << "Enter Course Name: ";
    std::getline(std::cin, courseName);
    std::cout << "Enter Course Grade: ";
    std::cin >> grade;

    Course course(courseID, courseName, grade);
    student->addCourse(course);
    department->addStudent(student);
    department->addCourse(course);

    std::cout << "Student and course added successfully!\n";
}

int main() {
    try {
        Gradebook gradebook;
        School school("Bucks University");
        
             Department csDepartment("Computer Science"), mathDepartment("Math"), lawDepartment("Law");
        school.addDepartment(csDepartment);
        school.addDepartment(mathDepartment);
        school.addDepartment(lawDepartment);
        
        char choice;
        do {
            std::cout << "\n=== Menu ===\n1. Add Student and Course\n2. Display Grades\n3. Display Department Information\n4. Display School Information\n5. Exit\nEnter your choice: ";
            std::cin >> choice;
            std::cin.ignore();

            switch (choice) {
                     case '1': addStudentFromInput(gradebook, school); break;
                     case '2': gradebook.display(); break;
                        case '3': school.displayDepartments(); break;
                        case '4': displaySchoolInfo(&school); break;
                    case '5': std::cout << "Exiting...\n"; break;
                 default: std::cout << "Invalid choice! Try again.\n"; break;
            }
        } while (choice != '5');
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
