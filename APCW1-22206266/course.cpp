#include "Course.h"
#include <iostream>

Course::Course(int courseID, const std::string& courseName, double grade)
    : courseID(courseID), courseName(courseName), grade(grade) {
}

void Course::display() const {
    std::cout << "Course ID: " << courseID << ", Name: " << courseName << ", Grade: " << grade << std::endl;
}