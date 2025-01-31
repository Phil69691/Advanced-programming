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