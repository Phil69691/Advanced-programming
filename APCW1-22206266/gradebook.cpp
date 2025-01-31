#include "Gradebook.h"
#include <iostream>

void Gradebook::addStudent(Student* student) {
    students.push_back(student);
}

void Gradebook::display() const {
    for (const auto& student : students) {
        student->display();
    }
}