#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string>
#include <iostream>

class Persona {
public:
    std::string type;
    int FILE;


    Persona(int init) {
        getstart(init);
    }

    void getstart(int init);
    void echo();

private:
};

void Persona::getstart(int init) {
    if(init == 1) {
        this->FILE = 12;
        this->type = "arquivo.txt";
    } else if(init == 2) {
        this->FILE = 24;
        this->type = "arquivo.py";
    } else {
        this->FILE = 0;
        this->type = "empty file";
    }
}

void Persona::echo() {
    std::cout << "Type: " << this->type << std::endl;
    std::cout << "FILE: " << this->FILE << std::endl;
}

#endif // PERSONA_H_INCLUDED

