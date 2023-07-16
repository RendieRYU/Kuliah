/*
1. Bilangan Genap
2. Bilangan Ganjil
3. Bilangan Prima
4. Bilangan Komposit
*/

//bilangan genap
int isOdd(int number){
    return number % 2 != 0;
}

//bilangan ganjil
int isEven(int number){
    return number % 2 == 0;
}

//bilangan prima
int isPrime(int number){
    if(number <= 1){
        return 0;
    }
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

//bilangan komposit
int isComposite(int number){
    if(number <= 1){
        return 0;
    }
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return 1;
        }
    }
    return 0;
}