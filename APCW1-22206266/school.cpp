#include "School.h"
#include <iostream>

School::School(const std::string& name) : name(name) {}

void School::addDepartment(const Department& department) {
    departments.push_back(department);
}

Department* School::findDepartment(const std::string& name) {
    for (auto& department : departments) {
        if (department.getName() == name) {
            return &department;
        }
    }
                  return nullptr;
}

void School::displayDepartments() const {
    for (const auto& department : departments) {
        department.display();
    }
}

        std::string School::getName() const {
    return name;
}
