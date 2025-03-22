#include "Triad.h"
#include <iostream>
#include <sstream>

using namespace std;

Triad::Triad() : a(0), b(0), c(0) {}
Triad::Triad(int a, int b, int c) : a(a), b(b), c(c) {}
Triad::Triad(const Triad& other) : a(other.a), b(other.b), c(other.c) {}

int Triad::getA() const { return a; }
int Triad::getB() const { return b; }
int Triad::getC() const { return c; }

void Triad::setA(int val) { a = val; }
void Triad::setB(int val) { b = val; }
void Triad::setC(int val) { c = val; }

Triad& Triad::operator++() { ++a; ++b; ++c; return *this; }
Triad Triad::operator++(int) { Triad temp = *this; ++(*this); return temp; }
Triad& Triad::operator--() { --a; --b; --c; return *this; }
Triad Triad::operator--(int) { Triad temp = *this; --(*this); return temp; }

Triad& Triad::operator=(const Triad& other) {
    if (this != &other) {
        a = other.a;
        b = other.b;
        c = other.c;
    }
    return *this;
}

istream& operator>>(istream& in, Triad& t) {
    cout << "Enter three numbers: ";
    in >> t.a >> t.b >> t.c;
    return in;
}

ostream& operator<<(ostream& out, const Triad& t) {
    out << "(" << t.a << ", " << t.b << ", " << t.c << ")";
    return out;
}

Triad::operator string() const {
    return toString();
}

void Triad::Read() {
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
}

void Triad::Display() const {
    cout << toString() << endl;
}

string Triad::toString() const {
    stringstream sout;
    sout << "Triad(" << a << ", " << b << ", " << c << ")";
    return sout.str();
}

int Triad::Sum() const {
    return a + b + c;
}