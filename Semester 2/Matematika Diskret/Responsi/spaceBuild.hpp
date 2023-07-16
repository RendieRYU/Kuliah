/*
Bangun Ruang:
1. Kubus
2. Balok
3. Bola
4. Tabung
5. Kerucut
6. Limas segiempat
7. Limas segitiga
8. Prisma segiempat
9. Prisma segitiga
10. Limas segiempat teratur
11. Limas segitiga teratur
12. Prisma segiempat teratur
13. Prisma segitiga teratur
*/

struct cube{
    float side;
}; cube Cube;

struct rectangularSolid{
    float length;
    float width;
    float height;
}; rectangularSolid RectangularSolid;

struct sphere{
    float radius;
    float phi = 3.14;
}; sphere Sphere;

struct cylinder{
    float radius;
    float height;
    float phi = 3.14;
}; cylinder Cylinder;

struct cone{
    float radius;
    float height;
    float phi = 3.14;
}; cone Cone;

struct squarePyramid{
    float baseLength;
    float baseWidth;
    float height;
}; squarePyramid SquarePyramid;

struct triangularPyramid{
    float baseLength;
    float baseWidth;
    float height;
}; triangularPyramid TriangularPyramid;

struct squarePrism{
    float baseWidth;
    float baseLength;
    float height;
}; squarePrism SquarePrism;

struct triangularPrism{
    float baseWidth;
    float baseLength;
    float height;
}; triangularPrism TriangularPrism;

struct regularSquarePyramid{
    float baseLength;
    float height;
}; regularSquarePyramid RegularSquarePyramid;

struct regularTriangularPyramid{
    float baseLength;
    float height;
}; regularTriangularPyramid RegularTriangularPyramid;

struct regularSquarePrism{
    float baseLength;
    float height;
}; regularSquarePrism RegularSquarePrism;

struct regularTriangularPrism{
    float baseLength;
    float height;
}; regularTriangularPrism RegularTriangularPrism;

//keliling kubus
float cubeCircumference(float side){
    return 12 * side;
}

//luas permukaan permukaan kubus
float cubeSurfaceArea(float side){
    return 6 * side * side;
}

//volume kubus
float cubeVolume(float side){
    return side * side * side;
}

//keliling balok
float rectangularSolidCircumference(float length, float width, float height){
    return 4 * (length + width + height);
}

//luas permukaan balok
float rectangularSolidSurfaceArea(float length, float width, float height){
    return 2 * (length * width + length * height + width * height);
}

//volume balok
float rectangularSolidVolume(float length, float width, float height){
    return length * width * height;
}

//keliling bola
float sphereCircumference(float radius){
    return 2 * Sphere.phi * radius;
}

//luas permukaan bola
float sphereSurfaceArea(float radius){
    return 4 * Sphere.phi * radius * radius;
}

//volume bola
float sphereVolume(float radius){
    return 4/3 * Sphere.phi * radius * radius * radius;
}

//keliling tabung
float cylinderCircumference(float radius){
    return 2 * Cylinder.phi * radius;
}

//luas permukaan tabung
float cylinderSurfaceArea(float radius, float height){
    return 2 * Cylinder.phi * radius * (radius + height);
}

//volume tabung
float cylinderVolume(float radius, float height){
    return Cylinder.phi * radius * radius * height;
}

//keliling kerucut
float coneCircumference(float radius){
    return 2 * Cone.phi * radius;
}

//luas permukaan kerucut
float coneSurfaceArea(float radius, float height){
    return Cone.phi * radius * (radius + sqrt(radius * radius + height * height));
}

//volume kerucut
float coneVolume(float radius, float height){
    return Cone.phi * radius * radius * height / 3;
}

//keliling limas segiempat
float squarePyramidCircumference(float baseLength, float baseWidth, float height){
    return baseLength + baseWidth + sqrt((baseLength / 2) * (baseLength / 2) + height * height) + sqrt((baseWidth / 2) * (baseWidth / 2) + height * height);
}

//luas permukaan limas segiempat
float squarePyramidSurfaceArea(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth + baseLength * sqrt((baseWidth / 2) * (baseWidth / 2) + height * height) + baseWidth * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
}

//volume limas segiempat
float squarePyramidVolume(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth * height / 3;
}

//keliling limas segitiga
float triangularPyramidCircumference(float baseLength, float baseWidth, float height){
    return baseLength + baseWidth + sqrt((baseLength / 2) * (baseLength / 2) + height * height) + sqrt((baseWidth / 2) * (baseWidth / 2) + height * height);
}

//luas permukaan limas segitiga
float triangularPyramidSurfaceArea(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth + baseLength * sqrt((baseWidth / 2) * (baseWidth / 2) + height * height) + baseWidth * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
}

//volume limas segitiga
float triangularPyramidVolume(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth * height / 3;
}

//keliling prisma segitiga
float triangularPrismCircumference(float baseLength, float baseWidth, float height){
    return baseLength + baseWidth + sqrt((baseLength / 2) * (baseLength / 2) + height * height) + sqrt((baseWidth / 2) * (baseWidth / 2) + height * height);
}

//luas permukaan prisma segitiga
float triangularPrismSurfaceArea(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth + baseLength * sqrt((baseWidth / 2) * (baseWidth / 2) + height * height) + baseWidth * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
}

//volume prisma segitiga
float triangularPrismVolume(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth * height / 3;
}

//keliling prisma segiempat
float squarePrismCircumference(float baseLength, float baseWidth, float height){
    return baseLength + baseWidth + sqrt((baseLength / 2) * (baseLength / 2) + height * height) + sqrt((baseWidth / 2) * (baseWidth / 2) + height * height);
}

//luas permukaan prisma segiempat
float squarePrismSurfaceArea(float baseLength, float baseWidth, float height){
    return 2 * (baseLength * baseWidth + baseLength * height + baseWidth * height);
}

//volume prisma segiempat
float squarePrismVolume(float baseLength, float baseWidth, float height){
    return baseLength * baseWidth * height;
}

//keliling limas segiempat teratur
float regularSquarePyramidCircumference(float baseLength){
    return 4 * baseLength;
}

//luas permukaan limas segiempat teratur
float regularSquarePyramidSurfaceArea(float baseLength, float height){
    return baseLength * baseLength + 2 * baseLength * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
}

//volume limas segiempat teratur
float regularSquarePyramidVolume(float baseLength, float height){
    return baseLength * baseLength * height / 3;
}

//keliling limas segitiga teratur
float regularTriangularPyramidCircumference(float baseLength){
    return 3 * baseLength;
}

//luas permukaan limas segitiga teratur
float regularTriangularPyramidSurfaceArea(float baseLength, float height){
    return baseLength * baseLength + 2 * baseLength * sqrt((baseLength / 2) * (baseLength / 2) + height * height);
}

//volume limas segitiga teratur
float regularTriangularPyramidVolume(float baseLength, float height){
    return baseLength * baseLength * height / 3;
}

//keliling prisma segitiga teratur
float regularTriangularPrismCircumference(float baseLength){
    return 4 * baseLength;
}

//luas permukaan prisma segitiga teratur
float regularTriangularPrismSurfaceArea(float baseLength, float height){
    return 2 * (baseLength * baseLength + baseLength * height + baseLength * sqrt((baseLength / 2) * (baseLength / 2) + height * height));
}

//volume prisma segitiga teratur
float regularTriangularPrismVolume(float baseLength, float height){
    return baseLength * baseLength * height;
}

//keliling prisma segiempat teratur
float regularRectangularPrismCircumference(float baseLength){
    return 3 * baseLength;
}

//luas permukaan prisma segiempat teratur
float regularRectangularPrismSurfaceArea(float baseLength, float height){
    return 2 * (baseLength * baseLength + baseLength * height + baseLength * sqrt((baseLength / 2) * (baseLength / 2) + height * height));
}

//volume prisma segiempat teratur
float regularRectangularPrismVolume(float baseLength, float height){
    return baseLength * baseLength * height;
}