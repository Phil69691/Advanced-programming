#include "Department.h"
#include <iostream>

Department::Department(const std::string& name) : name(name) {}

void Department::addStudent(Student* student) {
    students.push_back(student);
}

void Department::addCourse(const Course& course) {
    courses.push_back(course);
}

void Department::display() const {
    std::cout << "Department: " << name << std::endl;
    for (const auto& student : students) {
        student->display();
    }
    for (const auto& course : courses) {
        course.display();
    }
}

std::string Department::getName() const {
    return name;
}