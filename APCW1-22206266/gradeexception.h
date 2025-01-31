#ifndef GRADEEXCEPTION_H
#define GRADEEXCEPTION_H

#include <exception>
#include <string>

class GradeException : public std::exception {
private:
    std::string message;
public:
    GradeException(const std::string& msg);
    virtual const char* what() const noexcept override;
};

#endif
