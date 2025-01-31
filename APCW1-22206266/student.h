#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include <string>
#include <vector>

class Student {
private:
    int id;
    std::string name;
    std::vector<Course> courses;
public:
    Student(int id, const std::string& name);
    void addCourse(const Course& course);
    void display() const;
};

#endif