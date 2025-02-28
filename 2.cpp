// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <math.h>
#include<iomanip>

using namespace std;

class td {
public:
    double x, y;
};

class line {
public:
    double a, b, c;
};

void line1(td d1, td d2, line& tmp) {
    tmp.a = d2.y - d1.y;
    tmp.b = d1.x - d2.x;
    tmp.c = -(tmp.a * d1.x + tmp.b * d1.y);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    td a, b, c, d;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cin >> d.x >> d.y;

    line l1, l2;
    line1(a, b, l1);
    line1(c, d, l2);

    if ((l1.a * l2.b - l2.a * l1.b) == 0) {
        if ((l1.a * l2.c - l2.a * l1.c) == 0) {
            cout << "MANY";
        }
        else {
            cout << "NO";
        }
    }
    else {
        double det = l1.a * l2.b - l2.a * l1.b;
        double x = (l1.b * l2.c - l2.b * l1.c) / det;
        double y = (l2.a * l1.c - l1.a * l2.c) / det;

        cout << fixed << setprecision(2) << x << " " << y << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
