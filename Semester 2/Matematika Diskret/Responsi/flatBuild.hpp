/*
Bangun datar:
1. Persegi
2. Persegi panjang
3. Segitiga sama sisi
4. Segitiga sama kaki
5, Segitiga siku-siku
6. Segitiga sembarang
7. Lingkaran
8. Trapesium
9. Jajar genjang
10. Layang-layang
11. Belah ketupat
*/

//Persegi
struct square{
    int side;
}; square Square;

//Persegi panjang
struct rectangle{
    int length;
    int width;
}; rectangle squareLong;

//Segitiga sama sisi
struct equilateralTriangle{
    int side;
    int base;
    int height;
}; equilateralTriangle EquilateralTriangle;

//Segitiga sama kaki
struct isoscelesTriangle{
    int base;
    int side;
}; isoscelesTriangle IsoscelesTriangle;

//Segitiga siku-siku
struct rightTriangle{
    int side1;
    int side2;
    int side3;
    int base;
    int height;
}; rightTriangle RightTriangle;

//Segitiga sembarang
struct scaleneTriangle{
    int side1;
    int side2;
    int side3;
    int base;
    int height;
}; scaleneTriangle ScaleneTriangle;

//Lingkaran
struct circle{
    int radius;
    float phi = 3.14;
}; circle Circle;

//Trapesium
struct trapezoid{
    int side1;
    int side2;
    int side3;
    int side4;
    int height;
}; trapezoid Trapezoid;

//Jajar genjang
struct parallelogram{
    int side1;
    int side2;
    int base;
    int height;
}; parallelogram Parallelogram;

//Layang-layang
struct kite{
    int side1;
    int side2;
    int diagonal1;
    int diagonal2;
}; kite Kite;

//Belah ketupat
struct rhombus{
    int side;
    int diagonal1;
    int diagonal2;
}; rhombus Rhombus;

//keliling persegi
int squareCircumference(int side){
    return side * 4;
}

//luas persegi
int squareArea(int side){
    return side * side;
}

//keliling persegi panjang
int rectangleCircumference(int length, int width){
    return (length + width) * 2;
}

//luas persegi panjang
int rectangleArea(int length, int width){
    return length * width;
}

//keliling segitiga sama sisi
int equilateralTriangleCircumference(int side){
    return side * 3;
}

//luas segitiga sama sisi
int equilateralTriangleArea(int base, int height){
    return base * height / 2;
}

//keliling segitiga sama kaki
int isoscelesTriangleCircumference(int base, int side){
    return 2 * side + base;
}

//luas segitiga sama kaki
int isoscelesTriangleArea(int base, int height){
    return base * height / 2;
}

//keliling segitiga siku-siku
int rightTriangleCircumference(int side1, int side2, int side3){
    return side1 + side2 + side3;
}

//luas segitiga siku-siku
int rightTriangleArea(int base, int height){
    return base * height / 2;
}

//keliling segitiga sembarang
int scaleneTriangleCircumference(int side1, int side2, int side3){
    return side1 + side2 + side3;
}

//luas segitiga sembarang
int scaleneTriangleArea(int base, int height){
    return base * height / 2;
}

//keliling lingkaran
int circleCircumference(int radius){
    return 2 * Circle.phi * radius;
}

//luas lingkaran
int circleArea(int radius){
    return Circle.phi * radius * radius;
}

//keliling trapesium
int trapezoidCircumference(int side1, int side2, int side3, int side4){
    return side1 + side2 + side3 + side4;
}

//luas trapesium
int trapezoidArea(int side1, int side2, int height){
    return (side1 + side2) * height / 2;
}

//keliling jajar genjang
int parallelogramCircumference(int side1, int side2){
    return 2 * (side1 + side2);
}

//luas jajar genjang
int parallelogramArea(int base, int height){
    return base * height;
}

//keliling layang-layang
int kiteCircumference(int side1, int side2){
    return 2 * (side1 + side2);
}

//luas layang-layang
int kiteArea(int diagonal1, int diagonal2){
    return diagonal1 * diagonal2 / 2;
}

//keliling belah ketupat
int rhombusCircumference(int side){
    return 4 * side;
}

//luas belah ketupat
int rhombusArea(int diagonal1, int diagonal2){
    return diagonal1 * diagonal2 / 2;
}
