/*
1. Permutasi
2. Kombinasi
*/

//permutasi
int permutation(int number, int r){
    return factorial(number) / factorial(number - r);
}

//kombinasi
int combination(int number, int r){
    int result = 0;
    return factorial(number) / (factorial(number - r) * factorial(r));
}