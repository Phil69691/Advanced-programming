#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Student.h"
#include "course.h"
#include <vector>

class Department {
private:
    std::string name;
    std::vector<Student*> students;
    std::vector<Course> courses;
public:
    Department(const std::string& name);
    void addStudent(Student* student);
    void addCourse(const Course& course);
    void display() const;
    std::string getName() const;
};

#endif
#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    int courseID;
    std::string courseName;
    double grade;
public:
    Course(int courseID, const std::string& courseName, double grade);
    void display() const;
};

#endif