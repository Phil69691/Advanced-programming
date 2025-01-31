#include "Student.h"
#include <iostream>

Student::Student(int id, const std::string& name) : id(id), name(name) {}

void Student::addCourse(const Course& course) {
    courses.push_back(course);
}

void Student::display() const {
                 std::cout << "Student ID: " << id << ", Name: " << name << std::endl;
    for (const auto& course : courses) {
        course.display();
    }
}