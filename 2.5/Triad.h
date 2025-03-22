#pragma once
#include <string>

using namespace std;

class Triad {
private:
    int a, b, c;

public:
    Triad();
    Triad(int, int, int);
    Triad(const Triad&);

    int getA() const;
    int getB() const;
    int getC() const;

    void setA(int);
    void setB(int);
    void setC(int);

    Triad& operator++();   
    Triad operator++(int); 
    Triad& operator--();
    Triad operator--(int);

    Triad& operator=(const Triad&);
    friend istream& operator>>(istream&, Triad&);
    friend ostream& operator<<(ostream&, const Triad&);

    operator string() const;

    void Read();
    void Display() const;
    string toString() const;

    int Sum() const;
};