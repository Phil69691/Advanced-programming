#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Student.h"
#include <vector>

class Gradebook {
private:
    std::vector<Student*> students;
public:
    void addStudent(Student* student);
    void display() const;
};

#endif