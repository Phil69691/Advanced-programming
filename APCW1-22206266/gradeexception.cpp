#include "GradeException.h"

GradeException::GradeException(const std::string& msg) : message(msg) {}

const char* GradeException::what() const noexcept {
    return message.c_str();
}
