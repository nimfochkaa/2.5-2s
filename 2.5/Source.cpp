#include <iostream>
#include "Triad.h"
#include "Triangle.h"

using namespace std;

int main() {
    Triangle t1(3, 4, 5);
    Triangle t2;
    t2.Read();

    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;

    t1.Display();
    t2.Display();

    cout << "Area of t1: " << t1.Area() << endl;
    cout << "Angles of t1: " << t1.AngleA() << ", " << t1.AngleB() << ", " << t1.AngleC() << endl;

    Triangle t3 = t1; 
    cout << "Copied t3 = " << t3 << endl;

    cout << "Size without #pragma pack(1): " << sizeof(Triangle) << endl;
#pragma pack(push, 1)
    cout << "Size with #pragma pack(1): " << sizeof(Triangle) << endl;
#pragma pack(pop)

    return 0;
}