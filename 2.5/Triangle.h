#pragma once
#include "Triad.h"

class Triangle {
private:
    Triad sides;

public:
    Triangle();
    Triangle(int, int, int);
    Triangle(const Triad&);
    Triangle(const Triangle&);

    Triad getSides() const;
    void setSides(const Triad&);

    Triangle& operator=(const Triangle&);
    friend std::istream& operator>>(std::istream&, Triangle&);
    friend std::ostream& operator<<(std::ostream&, const Triangle&);

    operator std::string() const;

    void Read();
    void Display() const;
    std::string toString() const;

    double Area() const;
    double AngleA() const;
    double AngleB() const;
    double AngleC() const;
};