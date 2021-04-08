#include <iostream>
#ifndef NORMAL_H_
#define NORMAL_H_

class Normal
{
private:
    int a;
    char m;
public:
    Normal(int a, int m);
    Normal();
    ~Normal();
    friend std::ostream & operator<<(
        std::ostream & os, const Normal & nr
    );
};

Normal::Normal(int a, int m){
    this->a = a;
    this->m = m;
}

Normal::~Normal(){
    
}

std::ostream & operator<<(std::ostream & os, const Normal & nr)
{
    os << "a: " << nr.a << "\tm: \"" << nr.m << "\"";
    return os;
}
#endif