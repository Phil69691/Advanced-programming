#ifndef SCHOOL_H
#define SCHOOL_H

#include "Department.h"
#include <vector>

class School {
private:
    std::string name;
    std::vector<Department> departments;
                        public:
    School(const std::string& name);
    void addDepartment(const Department& department);
    Department* findDepartment(const std::string& name);
    void displayDepartments() const;
    std::string getName() const;
};

#endif