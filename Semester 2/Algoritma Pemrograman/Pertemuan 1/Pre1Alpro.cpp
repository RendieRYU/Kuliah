#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int dx;
    int dy;
    int d;

    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    d = sqrt((dx * dx) + (dy * dy));
    cout << "d = " << d;
}