/*
1. Pejumlahan
2. Pengurangan
3. Perkalian
4. Pembagian
5. Modulus
6. Pangkat
7. Faktorial
8. Akar
*/

//penjumlahan
float addition(float number1, float number2){
    return number1 + number2;
}

//pengurangan
float subtraction(float number1, float number2){
    return number1 - number2;
}

//perkalian
float multiplication(float number1, float number2){
    return number1 * number2;
}

//pembagian
float division(float number1, float number2){
    return number1 / number2;
}

//modulus
float mod(int number1, int number2){
    return number1 % number2;
}

//pangkat
float powerOfNumbers(float number1, float number2){
    float result = 1;
    if (number2 == 1 || number2 == 0){
        return number1;
    }
    if (number2 > 1){
        for(int i = 1; i <= number2; i++){
            result *= number1;
        }
        return result;
    }
    if (number2 < 0){
        for(int i = -1; i >= number2; i--){
            result *= number1;
        }
        return 1 / result;
    }
    return 0;
}

//faktorial
float factorial(float number){
    float result = 1;
    for(int i = 1; i <= number; i++){
        result *= i;
    }
    return result;
}

//akar
float squaredRoot(float number){
    float result = 0;
    if (number >= 0){
        double result = number;
        double accuration = 0.00001;

        while ((result - number/result) > accuration) {
            result = (result + number/result) / 2;
        }
        return result;
    }
    return 0;
}