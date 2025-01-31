#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    virtual void displayInfo() const = 0; 
    virtual ~Person() = default;
};

#endif
