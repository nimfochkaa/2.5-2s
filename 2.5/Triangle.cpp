#define _USE_MATH_DEFINES
#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

Triangle::Triangle() : sides(1, 1, 1) {}
Triangle::Triangle(int a, int b, int c) : sides(a, b, c) {}
Triangle::Triangle(const Triad& t) : sides(t) {}
Triangle::Triangle(const Triangle& t) : sides(t.sides) {}

Triad Triangle::getSides() const { return sides; }
void Triangle::setSides(const Triad& t) { sides = t; }

Triangle& Triangle::operator=(const Triangle& other) {
    if (this != &other) {
        sides = other.sides;
    }
    return *this;
}

istream& operator>>(istream& in, Triangle& t) {
    in >> t.sides;
    return in;
}

ostream& operator<<(ostream& out, const Triangle& t) {
    out << "Triangle with sides: " << t.sides;
    return out;
}

Triangle::operator string() const {
    return toString();
}

void Triangle::Read() {
    cout << "Enter sides of triangle:" << endl;
    sides.Read();
}

void Triangle::Display() const {
    cout << toString() << endl;
}

string Triangle::toString() const {
    stringstream sout;
    sout << "Triangle[" << string(sides) << "]";
    return sout.str();
}

double Triangle::Area() const {
    double a = sides.getA(), b = sides.getB(), c = sides.getC();
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::AngleA() const {
    double a = sides.getA(), b = sides.getB(), c = sides.getC();
    return acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / M_PI);
}

double Triangle::AngleB() const {
    double a = sides.getA(), b = sides.getB(), c = sides.getC();
    return acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / M_PI);
}

double Triangle::AngleC() const {
    double a = sides.getA(), b = sides.getB(), c = sides.getC();
    return acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / M_PI);
}