#include <bits/stdc++.h>
#include <windows.h>
#include "mathCalculator.hpp"
#include "kombinatorial.hpp"
#include "temperature.hpp"
#include "distance.hpp"
#include "timeConvertion.hpp"
#include "currencyConversion.hpp"
#include "evenOddPrime.hpp"
#include "spaceBuild.hpp"
#include "flatBuild.hpp"
#include "chooseOption.hpp"
using namespace std;

//membuat superskrip(pangkat)
void superSkrip(int number){
    if (number < 0){
        SetConsoleOutputCP(65001);cout<<"⁻";
    }
    int totalDigitNumber = 0;
    int digit = number;
    if (number < 0){
        digit *= -1;
    }
    float divisor = 1;
    while (digit / divisor >= 1){
        totalDigitNumber++;
        divisor *= 10;
    }
    int splitnumber[totalDigitNumber];
        
    for (int i = 0; i < totalDigitNumber; i++){
        splitnumber[i] = digit % 10;
        digit /= 10;
    }

    while (totalDigitNumber>0){
        switch (splitnumber[totalDigitNumber-1]){
            case 0: SetConsoleOutputCP(65001);cout<<"⁰";break;
            case 1: SetConsoleOutputCP(65001);cout<<"¹";break;
            case 2: SetConsoleOutputCP(65001);cout<<"²";break;
            case 3: SetConsoleOutputCP(65001);cout<<"³";break;
            case 4: SetConsoleOutputCP(65001);cout<<"⁴";break;
            case 5: SetConsoleOutputCP(65001);cout<<"⁵";break;
            case 6: SetConsoleOutputCP(65001);cout<<"⁶";break;
            case 7: SetConsoleOutputCP(65001);cout<<"⁷";break;
            case 8: SetConsoleOutputCP(65001);cout<<"⁸";break;
            case 9: SetConsoleOutputCP(65001);cout<<"⁹";break;
        }
        totalDigitNumber--;
    }
}

int main(){
    bool repeat = 1;
    bool repeatThisCase = 0;
    int choose;
    int menu;
    int menu1;
    int menu2;
    do{
        firstMenu:
        system("cls");
        printCalculator();
        cout << "Masukkan Pilihan Program Kalkulator : ";
        cin >> choose;
        switch (choose){
            case 1:
                system("cls");
                int number1;
                int number2;
                printMathCalculator();
                do{
                    repeatThisCase = 0;
                    cout << "Masukkan Pilihan Program Kalkulator Matematika : ";
                    cin >> menu;
                    switch (menu){
                    case 1:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1 << " + " << number2 << " = " << addition(number1, number2) << endl;
                        break;
                    
                    case 2:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1 << " - " << number2 << " = " << subtraction(number1, number2) << endl;
                        break;

                    case 3:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1 << " x " << number2 << " = " << multiplication(number1, number2) << endl;
                        break;

                    case 4:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1 << " " << static_cast<char>(246) << " " << number2 << " = " << division(number1, number2) << endl;
                        break;
                    
                    case 5:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1 << " % " << number2 << " = " << mod(number1, number2) << endl;
                        break;
                    
                    case 6:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> number1;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> number2;
                        cout << number1;
                        superSkrip(number2);
                        cout << " = " << powerOfNumbers(number1, number2) << endl;
                        break;

                    case 7:
                        cout << "Masukkan Angka : ";
                        cin >> number1;
                        cout << number1 << "! = " << factorial(number1) << endl;
                        break;
                    
                    case 8:
                        cout << "Masukkan Angka : ";
                        cin >> number1;
                        if (squaredRoot(number1) == static_cast<int>(squaredRoot(number1))){
                            cout << static_cast<char>(251) << number1 << " = " << squaredRoot(number1) << endl;
                        }
                        if (squaredRoot(number1) != static_cast<int>(squaredRoot(number1))){
                            cout << static_cast<char>(251) << number1 << " " << static_cast<char>(247) << " " << squaredRoot(number1) << endl;
                        }
                        break;
                        
                    case 0:
                        goto firstMenu;
                        break;
                    
                    default:
                        cout << "Pilihan Tidak Tersedia" << endl;
                        repeatThisCase = 1;
                        break;
                    }
                }while(repeatThisCase);
                system("pause");
                break;
            
            case 2:
                system("cls");
                int numberN;
                int numberR;
                printCombinatoryCalculator();
                do{
                    repeatThisCase = 0;
                    cout << "Masukkan Pilihan Program Kombinatorial : ";
                    cin >> menu;
                    switch (menu){
                    case 1:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> numberN;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> numberR;
                        cout << "P(" << numberN << ", " << numberR << ") = " << permutation(numberN, numberR) << endl;
                        break;

                    case 2:
                        cout << "Masukkan Angka Pertama : ";
                        cin >> numberN;
                        cout << "Masukkan Angka Kedua : ";
                        cin >> numberR;
                        cout << "C(" << numberN << ", " << numberR << ") = " << combination(numberN, numberR) << endl;
                        break;
                    
                    case 0:
                        goto firstMenu;
                        break;
                    
                    default:
                        cout << "Pilihan Tidak Tersedia" << endl;
                        repeatThisCase = 1;
                        break;
                    }
                } while(repeatThisCase);
                system("pause");
                break;
            
            case 3:
                int temperature;
                system("cls");
                printTemperatureCalculator();
                cout << "Masukkan Pilihan Suhu Yang Ingin Di konversi: ";
                cin >> menu1;
                if (menu1 == 0) goto firstMenu;
                while(menu1 > 4){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Suhu Yang Ingin Di konversi: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }
                if (menu1 > 4) cout << "Menu yang anda pilih tidak tersedia" << endl;
                cout << "Masukkan Pilihan Suhu Hasil Konversi: ";
                cin >> menu2;
                if (menu2 == 0) goto firstMenu;
                while(menu2 > 4){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Suhu Hasil Konversi: ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if(menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Suhu Dalam Celcius : ";
                    cin >> temperature;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << temperature << static_cast<char>(248) << "C = " << temperature << static_cast<char>(248) << "C" << endl;
                }

                if(menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Suhu Dalam Celcius : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Celcius ke Fahrenheit" << endl;
                    cout << temperature << static_cast<char>(248) << "C = " << celciusToFahrenheit(temperature) << static_cast<char>(248) << "F" << endl;
                }
                
                if(menu1 == 1 && menu2 == 3){
                    cout << "Masukkan Suhu Dalam Celcius : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Celcius ke Reamur" << endl;
                    cout << temperature << static_cast<char>(248) << "C = " << celciusToReamur(temperature) << static_cast<char>(248) << "R" << endl;
                }
                
                if(menu1 == 1 && menu2 == 4){
                    cout << "Masukkan Suhu Dalam Celcius : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Celcius ke Kelvin" << endl;
                    cout << temperature << static_cast<char>(248) << "C = " << celciusToKelvin(temperature) << static_cast<char>(248) << "K" << endl;
                }
                
                if(menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Suhu Dalam Fahrenheit : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Fahrenheit ke Celcius" << endl;
                    cout << temperature << static_cast<char>(248) << "F = " << fahrenheitToCelcius(temperature) << static_cast<char>(248) << "C" << endl;
                }
                
                if(menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Suhu Dalam Fahrenheit : ";
                    cin >> temperature;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << temperature << static_cast<char>(248) << "F = " << temperature << static_cast<char>(248) << "F" << endl;
                }
                
                if(menu1 == 2 && menu2 == 3){
                    cout << "Masukkan Suhu Dalam Fahrenheit : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Fahrenheit ke Reamur" << endl;
                    cout << temperature << static_cast<char>(248) << "F = " << fahrenheitToReamur(temperature) << static_cast<char>(248) << "R" << endl;
                }
                
                if(menu1 == 2 && menu2 == 4){
                    cout << "Masukkan Suhu Dalam Fahrenheit : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Fahrenheit ke Kelvin" << endl;
                    cout << temperature << static_cast<char>(248) << "F = " << fahrenheitToKelvin(temperature) << static_cast<char>(248) << "K" << endl;
                }
                
                if(menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Suhu Dalam Reamur : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Reamur ke Celcius" << endl;
                    cout << temperature << static_cast<char>(248) << "R = " << reamurToCelcius(temperature) << static_cast<char>(248) << "C" << endl;
                }
                
                if(menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Suhu Dalam Reamur : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Reamur ke Fahrenheit" << endl;
                    cout << temperature << static_cast<char>(248) << "R = " << reamurToFahrenheit(temperature) << static_cast<char>(248) << "F" << endl;
                }
                
                if(menu1 == 3 && menu2 == 3){
                    cout << "Masukkan Suhu Dalam Reamur : ";
                    cin >> temperature;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << temperature << static_cast<char>(248) << "R = " << temperature << static_cast<char>(248) << "R" << endl;
                }
                
                if(menu1 == 3 && menu2 == 4){
                    cout << "Masukkan Suhu Dalam Reamur : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Reamur ke Kelvin" << endl;
                    cout << temperature << static_cast<char>(248) << "R = " << reamurToKelvin(temperature) << static_cast<char>(248) << "K" << endl;
                }
                
                if(menu1 == 4 && menu2 == 1){
                    cout << "Masukkan Suhu Dalam Kelvin : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Kelvin ke Celcius" << endl;
                    cout << temperature << static_cast<char>(248) << "K = " << kelvinToCelcius(temperature) << static_cast<char>(248) << "C" << endl;
                }
                
                if(menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Suhu Dalam Kelvin : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Kelvin ke Fahrenheit" << endl;
                    cout << temperature << static_cast<char>(248) << "K = " << kelvinToFahrenheit(temperature) << static_cast<char>(248) << "F" << endl;
                }
                
                if(menu1 == 4 && menu2 == 3){
                    cout << "Masukkan Suhu Dalam Kelvin : ";
                    cin >> temperature;
                    cout << "Mengkonversi dari Kelvin ke Reamur" << endl;
                    cout << temperature << static_cast<char>(248) << "K = " << kelvinToReamur(temperature) << static_cast<char>(248) << "R" << endl;
                }
                
                if(menu1 == 4 && menu2 == 4){
                    cout << "Masukkan Suhu Dalam Kelvin : ";
                    cin >> temperature;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << temperature << static_cast<char>(248) << "K = " << temperature << static_cast<char>(248) << "K" << endl;
                }
                system("pause");
                break;
            
            case 4:
                int distance;
                system("cls");
                printDistanceCalculator();

                cout << "Masukkan Pilihan Jarak Yang Ingin Di konversi: ";
                cin >> menu1;
                if(menu1 == 0) goto firstMenu;
                while(menu1 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Jarak Yang Ingin Di konversi: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }

                cout << "Masukkan Pilihan Jarak Hasil Konversi: ";
                cin >> menu2;
                if(menu1 == 0) goto firstMenu;
                while(menu2 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Jarak Hasil Konversi: ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if(menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " cm = " << distance << "cm" << endl;
                }
                
                if(menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Meter" << endl;
                    cout << distance << " cm = " << centimeterToMeter(distance) << " m" << endl;
                }
                
                if(menu1 == 1 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Inch" << endl;
                    cout << distance << " cm = " << centimeterToInch(distance) << " inch" << endl;
                }

                if(menu1 == 1 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Kilometer" << endl;
                    cout << distance << " cm = " << centimeterToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 1 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Mil" << endl;
                    cout << distance << " cm = " << centimeterToMil(distance) << " mil" << endl;
                }

                if(menu1 == 1 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Yard" << endl;
                    cout << distance << " cm = " << centimeterToYard(distance) << " yard" << endl;
                }
                
                if(menu1 == 1 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Centimeter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Centimeter ke Feet" << endl;
                    cout << distance << " cm = " << centimeterToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Centimeter" << endl;
                    cout << distance << " m = " << meterToCentimeter(distance) << " cm " << endl;
                }

                if(menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " m = " << distance << " m" << endl;
                }

                if(menu1 == 2 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Inch" << endl;
                    cout << distance << " m = " << meterToInch(distance) << " inch" << endl;
                }

                if(menu1 == 2 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Kilometer" << endl;
                    cout << distance << " m = " << meterToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 2 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Mil" << endl;
                    cout << distance << " m = " << meterToMil(distance) << " mil" << endl;
                }

                if(menu1 == 2 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Yard" << endl;
                    cout << distance << " m = " << meterToYard(distance) << " yard" << endl;
                }

                if(menu1 == 2 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Meter : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Meter ke Feet" << endl;
                    cout << distance << " m = " << meterToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Centimeter" << endl;
                    cout << distance << " inch = " << inchToCentimeter(distance) << " cm" << endl;
                }

                if(menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Meter" << endl;
                    cout << distance << " inch = " << inchToMeter(distance) << " m" << endl;
                }

                if(menu1 == 3 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " inch = " << distance << " inch" << endl;
                }

                if(menu1 == 3 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Kilometer" << endl;
                    cout << distance << " inch = " << inchToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 3 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Mil" << endl;
                    cout << distance << " inch = " << inchToMil(distance) << " mil" << endl;
                }

                if(menu1 == 3 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Yard" << endl;
                    cout << distance << " inch = " << inchToYard(distance) << " yard" << endl;
                }

                if(menu1 == 3 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Inch : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Inch ke Feet" << endl;
                    cout << distance << " inch = " << inchToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 4 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Centimeter" << endl;
                    cout << distance << " km = " << kilometerToCentimeter(distance) << "cm" << endl;
                }

                if(menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Meter" << endl;
                    cout << distance << " km = " << kilometerToMeter(distance) << " m" << endl;
                }

                if(menu1 == 4 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Inch" << endl;
                    cout << distance << " km = " << kilometerToInch(distance) << " inch" << endl;
                }

                if(menu1 == 4 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " km = " << distance << " km" << endl;
                }

                if(menu1 == 4 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Mil" << endl;
                    cout << distance << " km = " << kilometerToMil(distance) << " mil" << endl;
                }

                if(menu1 == 4 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Yard" << endl;
                    cout << distance << " km = " << kilometerToYard(distance) << " yard" << endl;
                }

                if(menu1 == 4 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Kilometer : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Kilometer ke Feet" << endl;
                    cout << distance << " km = " << kilometerToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 5 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Centimeter" << endl;
                    cout << distance << " mil = " << milToCentimeter(distance) << "cm" << endl;
                }

                if(menu1 == 5 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Meter" << endl;
                    cout << distance << " mil = " << milToMeter(distance) << " m" << endl;
                }

                if(menu1 == 5 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Inch" << endl;
                    cout << distance << " mil = " << milToInch(distance) << " inch" << endl;
                }

                if(menu1 == 5 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Kilometer" << endl;
                    cout << distance << " mil = " << milToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 5 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " mil = " << distance << " mil" << endl;
                }

                if(menu1 == 5 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Yard" << endl;
                    cout << distance << " mil = " << milToYard(distance) << " yard" << endl;
                }

                if(menu1 == 5 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Mil : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Mil ke Feet" << endl;
                    cout << distance << " mil = " << milToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 6 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Centimeter" << endl;
                    cout << distance << " yard = " << yardToCentimeter(distance) << "cm" << endl;
                }

                if(menu1 == 6 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Meter" << endl;
                    cout << distance << " yard = " << yardToMeter(distance) << " m" << endl;
                }

                if(menu1 == 6 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Inch" << endl;
                    cout << distance << " yard = " << yardToInch(distance) << " inch" << endl;
                }

                if(menu1 == 6 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Kilometer" << endl;
                    cout << distance << " yard = " << yardToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 6 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Mil" << endl;
                    cout << distance << " yard = " << yardToMil(distance) << " mil" << endl;
                }

                if(menu1 == 6 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " yard = " << distance << " yard" << endl;
                }

                if(menu1 == 6 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Yard : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Yard ke Feet" << endl;
                    cout << distance << " yard = " << yardToFeet(distance) << " feet" << endl;
                }

                if(menu1 == 7 && menu2 == 1){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Centimeter" << endl;
                    cout << distance << " feet = " << feetToCentimeter(distance) << "cm" << endl;
                }

                if(menu1 == 7 && menu2 == 2){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Meter" << endl;
                    cout << distance << " feet = " << feetToMeter(distance) << " m" << endl;
                }

                if(menu1 == 7 && menu2 == 3){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Inch" << endl;
                    cout << distance << " feet = " << feetToInch(distance) << " inch" << endl;
                }

                if(menu1 == 7 && menu2 == 4){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Kilometer" << endl;
                    cout << distance << " feet = " << feetToKilometer(distance) << " km" << endl;
                }

                if(menu1 == 7 && menu2 == 5){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Mil" << endl;
                    cout << distance << " feet = " << feetToMil(distance) << " mil" << endl;
                }

                if(menu1 == 7 && menu2 == 6){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Mengkonversi dari Feet ke Yard" << endl;
                    cout << distance << " feet = " << feetToYard(distance) << " yard" << endl;
                }

                if(menu1 == 7 && menu2 == 7){
                    cout << "Masukkan Jarak Dalam Feet : ";
                    cin >> distance;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << distance << " feet = " << distance << " feet" << endl;
                }
                system("pause");
                break;
            
            case 5:
                int time;
                system("cls");
                printTimeConversionCalculator();

                cout << "Masukkan Waktu Yang Ingin Di konversi: ";
                cin >> menu1;
                if(menu1 == 0) goto firstMenu;
                while(menu1 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Waktu Yang Ingin Di Konversi: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }

                cout << "Masukkan Waktu Hasil Konversi: ";
                cin >> menu2;
                if(menu2 == 0) goto firstMenu;
                while(menu2 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Waktu Hasil Konversi: ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if(menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " detik = " << time << " detik" << endl;
                }

                if(menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Menit" << endl;
                    cout << time << " detik = " << secondToMinute(time) << " menit" << endl;
                }

                if(menu1 == 1 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Jam" << endl;
                    cout << time << " detik = " << secondToHour(time) << " jam" << endl;
                }

                if(menu1 == 1 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Hari" << endl;
                    cout << time << " detik = " << secondToDay(time) << " hari" << endl;
                }

                if(menu1 == 1 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Minggu" << endl;
                    cout << time << " detik = " << secondToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 1 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Bulan" << endl;
                    cout << time << " detik = " << secondToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 1 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Detik : ";
                    cin >> time;
                    cout << "Mengkonversi dari Detik ke Tahun" << endl;
                    cout << time << " detik = " << secondToYear(time) << " tahun" << endl;
                }

                if(menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Detik" << endl;
                    cout << time << " menit = " << minuteToSecond << " detik" << endl;
                }

                if(menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " menit = " << time << " menit" << endl;
                }

                if(menu1 == 2 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Jam" << endl;
                    cout << time << " menit = " << minuteToHour(time) << " jam" << endl;
                }

                if(menu1 == 2 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Hari" << endl;
                    cout << time << " menit = " << minuteToDay(time) << " hari" << endl;
                }

                if(menu1 == 2 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Minggu" << endl;
                    cout << time << " menit = " << minuteToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 2 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Bulan" << endl;
                    cout << time << " menit = " << minuteToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 2 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Menit : ";
                    cin >> time;
                    cout << "Mengkonversi dari Menit ke Tahun" << endl;
                    cout << time << " menit = " << minuteToYear(time) << " tahun" << endl;
                }

                if(menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Detik" << endl;
                    cout << time << " jam = " << hourToSecond(time) << " detik" << endl;
                }

                if(menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Menit" << endl;
                    cout << time << " jam = " << hourToMinute(time) << " menit" << endl;
                }

                if(menu1 == 3 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " jam = " << time << " jam" << endl;
                }

                if(menu1 == 3 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Hari" << endl;
                    cout << time << " jam = " << hourToDay(time) << " hari" << endl;
                }

                if(menu1 == 3 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Minggu" << endl;
                    cout << time << " jam = " << hourToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 3 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Bulan" << endl;
                    cout << time << " jam = " << hourToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 3 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Jam : ";
                    cin >> time;
                    cout << "Mengkonversi dari Jam ke Tahun" << endl;
                    cout << time << " jam = " << hourToYear(time) << " tahun" << endl;
                }

                if(menu1 == 4 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Detik" << endl;
                    cout << time << " hari = " << dayToSecond(time) << " detik" << endl;
                }

                if(menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Menit" << endl;
                    cout << time << " hari = " << dayToMinute(time) << " menit" << endl;
                }

                if(menu1 == 4 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Jam" << endl;
                    cout << time << " hari = " << dayToHour(time) << " jam" << endl;
                }

                if(menu1 == 4 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " hari = " << time << " hari" << endl;
                }

                if(menu1 == 4 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Minggu" << endl;
                    cout << time << " hari = " << dayToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 4 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Bulan" << endl;
                    cout << time << " hari = " << dayToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 4 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Hari : ";
                    cin >> time;
                    cout << "Mengkonversi dari Hari ke Tahun" << endl;
                    cout << time << " hari = " << dayToYear(time) << " tahun" << endl;
                }

                if(menu1 == 5 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Detik" << endl;
                    cout << time << " minggu = " << weekToSecond(time) << " detik" << endl;
                }

                if(menu1 == 5 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Menit" << endl;
                    cout << time << " minggu = " << weekToMinute(time) << " menit" << endl;
                }

                if(menu1 == 5 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Jam" << endl;
                    cout << time << " minggu = " << weekToHour(time) << " jam" << endl;
                }

                if(menu1 == 5 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Hari" << endl;
                    cout << time << " minggu = " << weekToDay(time) << " hari" << endl;
                }

                if(menu1 == 5 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " minggu = " << time << " minggu" << endl;
                }

                if(menu1 == 5 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Bulan" << endl;
                    cout << time << " minggu = " << weekToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 5 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Minggu : ";
                    cin >> time;
                    cout << "Mengkonversi dari Minggu ke Tahun" << endl;
                    cout << time << " minggu = " << weekToYear(time) << " tahun" << endl;
                }

                if(menu1 == 6 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Detik" << endl;
                    cout << time << " bulan = " << monthToSecond(time) << " detik" << endl;
                }

                if(menu1 == 6 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Menit" << endl;
                    cout << time << " bulan = " << monthToMinute(time) << " menit" << endl;
                }

                if(menu1 == 6 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Jam" << endl;
                    cout << time << " bulan = " << monthToHour(time) << " jam" << endl;
                }

                if(menu1 == 6 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Hari" << endl;
                    cout << time << " bulan = " << monthToDay(time) << " hari" << endl;
                }

                if(menu1 == 6 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Minggu" << endl;
                    cout << time << " bulan = " << monthToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 6 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " bulan = " << time << " bulan" << endl;
                }

                if(menu1 == 6 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Bulan : ";
                    cin >> time;
                    cout << "Mengkonversi dari Bulan ke Tahun" << endl;
                    cout << time << " bulan = " << monthToYear(time) << " tahun" << endl;
                }

                if(menu1 == 7 && menu2 == 1){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Detik" << endl;
                    cout << time << " tahun = " << yearToSecond(time) << " detik" << endl;
                }

                if(menu1 == 7 && menu2 == 2){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Menit" << endl;
                    cout << time << " tahun = " << yearToMinute(time) << " menit" << endl;
                }

                if(menu1 == 7 && menu2 == 3){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Jam" << endl;
                    cout << time << " tahun = " << yearToHour(time) << " jam" << endl;
                }

                if(menu1 == 7 && menu2 == 4){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Hari" << endl;
                    cout << time << " tahun = " << yearToDay(time) << " hari" << endl;
                }

                if(menu1 == 7 && menu2 == 5){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Minggu" << endl;
                    cout << time << " tahun = " << yearToWeek(time) << " minggu" << endl;
                }

                if(menu1 == 7 && menu2 == 6){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Mengkonversi dari Tahun ke Bulan" << endl;
                    cout << time << " tahun = " << yearToMonth(time) << " bulan" << endl;
                }

                if(menu1 == 7 && menu2 == 7){
                    cout << "Masukkan Waktu Dalam Tahun : ";
                    cin >> time;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << time << " tahun = " << time << " tahun" << endl;
                }
                system("pause");
                break;
            
            case 6:
                int money;
                system("cls");
                printCurrencyConversionCalculator();
                
                cout << "Masukkan Mata Uang Yang Ingin Di konversi: ";
                cin >> menu1;
                if(menu1 == 0) goto firstMenu;
                while(menu1 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Mata Uang Yang Ingin Di konversi: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }

                cout << "Masukkan Mata Uang Hasil Konversi: ";
                cin >> menu2;
                if(menu2 == 0) goto firstMenu;
                while(menu2 > 7){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Mata Uang Hasil Konversi: ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if(menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "Rp." << money << ",00 = " << "Rp." << money << ",00" << endl;
                }

                if(menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Yen" << endl;
                    cout << "Rp." << money << ",00 = " << "¥" << rupiahToYen(money) << endl;
                }

                if(menu1 == 1 && menu2 == 3){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Dollar Amerika" << endl;
                    cout << "Rp." << money << ",00 = " << "$" << rupiahToUSDollar(money) << endl;
                }
                
                if(menu1 == 1 && menu2 == 4){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Ringgit" << endl;
                    cout << "Rp." << money << ",00 = " << "RM" << rupiahToRinggit(money) << endl;
                }
                
                if(menu1 == 1 && menu2 == 5){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Euro" << endl;
                    cout << "Rp." << money << ",00 = " << "€" << rupiahToEuro(money) << endl;
                }
                
                if(menu1 == 1 && menu2 == 6){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Dinar" << endl;
                    cout << "Rp." << money << ",00 = " << "د.إ" << rupiahToDinar(money) << endl;
                }
                
                if(menu1 == 1 && menu2 == 7){
                    cout << "Masukkan Mata Uang Rupiah : ";
                    cin >> money;
                    cout << "Mengkonversi dari Rupiah ke Yuan" << endl;
                    cout << "Rp." << money << ",00 = " << "¥" << rupiahToYuan(money) << endl;
                }

                if(menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Rupiah" << endl;
                    cout << "¥" << money << " = " << "Rp." << yenToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "¥" << money << " = " << "¥" << money << endl;
                }

                if(menu1 == 2 && menu2 == 3){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Dollar Amerika" << endl;
                    cout << "¥" << money << " = " << "$" << yenToUSDollar(money) << endl;
                }

                if(menu1 == 2 && menu2 == 4){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Ringgit" << endl;
                    cout << "¥" << money << " = " << "RM" << yenToRinggit(money) << endl;
                }

                if(menu1 == 2 && menu2 == 5){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Euro" << endl;
                    cout << "¥" << money << " = " << "€" << yenToEuro(money) << endl;
                }

                if(menu1 == 2 && menu2 == 6){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Dinar" << endl;
                    cout << "¥" << money << " = " << "د.إ" << yenToDinar(money) << endl;
                }

                if(menu1 == 2 && menu2 == 7){
                    cout << "Masukkan Mata Uang Yen : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yen ke Yuan" << endl;
                    cout << "¥" << money << " = " << "¥" << yenToYuan(money) << endl;
                }

                if(menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Rupiah" << endl;
                    cout << "$" << money << " = " << "Rp." << usdollarToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Yen" << endl;
                    cout << "$" << money << " = " << "¥" << usdollarToYen(money) << endl;
                }

                if(menu1 == 3 && menu2 == 3){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "$" << money << " = " << "$" << money << endl;
                }

                if(menu1 == 3 && menu2 == 4){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Ringgit" << endl;
                    cout << "$" << money << " = " << "RM" << usdollarToRinggit(money) << endl;
                }

                if(menu1 == 3 && menu2 == 5){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Euro" << endl;
                    cout << "$" << money << " = " << "€" << usdollarToEuro(money) << endl;
                }

                if(menu1 == 3 && menu2 == 6){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Dinar" << endl;
                    cout << "$" << money << " = " << "د.إ" << usdollarToDinar(money) << endl;
                }

                if(menu1 == 3 && menu2 == 7){
                    cout << "Masukkan Mata Uang Dollar Amerika : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dollar Amerika ke Yuan" << endl;
                    cout << "$" << money << " = " << "¥" << usdollarToYuan(money) << endl;
                }

                if(menu1 == 4 && menu2 == 1){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Rupiah" << endl;
                    cout << "RM" << money << " = " << "Rp." << ringgitToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Yen" << endl;
                    cout << "RM" << money << " = " << "¥" << ringgitToYen(money) << endl;
                }

                if(menu1 == 4 && menu2 == 3){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Dollar Amerika" << endl;
                    cout << "RM" << money << " = " << "$" << ringgitToUSDollar(money) << endl;
                }

                if(menu1 == 4 && menu2 == 4){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "RM" << money << " = " << "RM" << money << endl;
                }

                if(menu1 == 4 && menu2 == 5){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Euro" << endl;
                    cout << "RM" << money << " = " << "€" << ringgitToEuro(money) << endl;
                }

                if(menu1 == 4 && menu2 == 6){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Dinar" << endl;
                    cout << "RM" << money << " = " << "د.إ" << ringgitToDinar(money) << endl;
                }

                if(menu1 == 4 && menu2 == 7){
                    cout << "Masukkan Mata Uang Ringgit : ";
                    cin >> money;
                    cout << "Mengkonversi dari Ringgit ke Yuan" << endl;
                    cout << "RM" << money << " = " << "¥" << ringgitToYuan(money) << endl;
                }

                if(menu1 == 5 && menu2 == 1){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Rupiah" << endl;
                    cout << "€" << money << " = " << "Rp." << euroToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 5 && menu2 == 2){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Yen" << endl;
                    cout << "€" << money << " = " << "¥" << euroToYen(money) << endl;
                }

                if(menu1 == 5 && menu2 == 3){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Dollar Amerika" << endl;
                    cout << "€" << money << " = " << "$" << euroToUSDollar(money) << endl;
                }

                if(menu1 == 5 && menu2 == 4){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Ringgit" << endl;
                    cout << "€" << money << " = " << "RM" << euroToRinggit(money) << endl;
                }

                if(menu1 == 5 && menu2 == 5){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "€" << money << " = " << "€" << money << endl;
                }

                if(menu1 == 5 && menu2 == 6){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Dinar" << endl;
                    cout << "€" << money << " = " << "د.إ" << euroToDinar(money) << endl;
                }

                if(menu1 == 5 && menu2 == 7){
                    cout << "Masukkan Mata Uang Euro : ";
                    cin >> money;
                    cout << "Mengkonversi dari Euro ke Yuan" << endl;
                    cout << "€" << money << " = " << "¥" << euroToYuan(money) << endl;
                }

                if(menu1 == 6 && menu2 == 1){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Rupiah" << endl;
                    cout << "د.إ" << money << " = " << "Rp." << dinarToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 6 && menu2 == 2){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Yen" << endl;
                    cout << "د.إ" << money << " = " << "¥" << dinarToYen(money) << endl;
                }

                if(menu1 == 6 && menu2 == 3){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Dollar Amerika" << endl;
                    cout << "د.إ" << money << " = " << "$" << dinarToUSDollar(money) << endl;
                }

                if(menu1 == 6 && menu2 == 4){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Ringgit" << endl;
                    cout << "د.إ" << money << " = " << "RM" << dinarToRinggit(money) << endl;
                }

                if(menu1 == 6 && menu2 == 5){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Euro" << endl;
                    cout << "د.إ" << money << " = " << "€" << dinarToEuro(money) << endl;
                }

                if(menu1 == 6 && menu2 == 6){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "د.إ" << money << " = " << "د.إ" << money << endl;
                }

                if(menu1 == 6 && menu2 == 7){
                    cout << "Masukkan Mata Uang Dinar : ";
                    cin >> money;
                    cout << "Mengkonversi dari Dinar ke Yuan" << endl;
                    cout << "د.إ" << money << " = " << "¥" << dinarToYuan(money) << endl;
                }

                if(menu1 == 7 && menu2 == 1){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Rupiah" << endl;
                    cout << "¥" << money << " = " << "Rp." << yuanToRupiah(money) << ",00" << endl;
                }

                if(menu1 == 7 && menu2 == 2){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Yen" << endl;
                    cout << "¥" << money << " = " << "¥" << yuanToYen(money) << endl;
                }

                if(menu1 == 7 && menu2 == 3){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Dollar Amerika" << endl;
                    cout << "¥" << money << " = " << "$" << yuanToUSDollar(money) << endl;
                }

                if(menu1 == 7 && menu2 == 4){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Ringgit" << endl;
                    cout << "¥" << money << " = " << "RM" << yuanToRinggit(money) << endl;
                }

                if(menu1 == 7 && menu2 == 5){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Euro" << endl;
                    cout << "¥" << money << " = " << "€" << yuanToEuro(money) << endl;
                }

                if(menu1 == 7 && menu2 == 6){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Mengkonversi dari Yuan ke Dinar" << endl;
                    cout << "¥" << money << " = " << "د.إ" << yuanToDinar(money) << endl;
                }

                if(menu1 == 7 && menu2 == 7){
                    cout << "Masukkan Mata Uang Yuan : ";
                    cin >> money;
                    cout << "Tidak ada proses pengkonversian" << endl;
                    cout << "¥" << money << " = " << "¥" << money << endl;
                }
                system("pause");
                break;
            
            case 7:
                system("cls");
                int number;
                printEvenOddPrimeCalculator();
                do{
                    repeatThisCase = 0;
                    cout << "Masukkan Jenis Bilangan : ";
                    cin >> menu;
                    cout << "Masukkan Angka : ";
                    cin >> number;
                    switch (menu){
                    case 1:    
                        if(isEven(number)){
                            cout << number << " adalah bilangan genap" << endl;
                        }
                        if(!isEven(number)){
                            cout << number << " bukan bilangan genap" << endl;
                        }
                        break;
                    
                    case 2:
                        if(isOdd(number)){
                            cout << number << " adalah bilangan ganjil" << endl;
                        }
                        if(!isOdd(number)){
                            cout << number << " bukan bilangan ganjil" << endl;
                        }
                        break;
                    
                    case 3:
                        if(isPrime(number)){
                            cout << number << " adalah bilangan prima" << endl;
                        }
                        if(!isPrime(number)){
                            cout << number << " bukan bilangan prima" << endl;
                        }
                        break;
                    
                    case 4:
                        if(isComposite(number)){
                            cout << number << " adalah bilangan komposit" << endl;
                        }
                        if(!isComposite(number)){
                            cout << number << " bukan bilangan komposit" << endl;
                        }
                        break;

                    case 0:
                        goto firstMenu;
                        break;
                    
                    default:
                        cout << "Menu tidak tersedia" << endl;
                        repeatThisCase = 1;
                        break;
                    }
                    
                } while(repeatThisCase);
                system("pause");
                break;
            
            case 8:
                system("cls");
                printFlatBuildCalculator();
                cout << "Masukkan Pilihan Bangun Datar: ";
                cin >> menu1;
                if (menu1 == 0) goto firstMenu;
                while(menu1 > 11){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Bangun Datar: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }
    
                printChooseOptionFlatBuild();
                cout << "Masukkan Pilihan Operasi: ";
                cin >> menu2;
                if (menu2 == 0) goto firstMenu;
                while(menu2 > 2){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Operasi: ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if(menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Persegi (dalam cm) : ";
                    cin >> Square.side;
                    cout << "Keliling Persegi : " << squareCircumference(Square.side) << " cm" << endl;
                }

                if (menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Panjang Sisi Persegi (dalam cm) : ";
                    cin >> Square.side;
                    cout << "Luas Persegi : " << squareArea(Square.side) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }
                
                if (menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Panjang Persegi Panjang (dalam cm) : ";
                    cin >> squareLong.length;
                    cout << "Masukkan Lebar Persegi Panjang (dalam cm) : ";
                    cin >> squareLong.width;
                    cout << "Keliling Persegi Panjang : " << rectangleCircumference(squareLong.length, squareLong.width) << " cm" << endl;
                }
                
                if (menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Panjang Persegi Panjang (dalam cm) : ";
                    cin >> squareLong.length;
                    cout << "Masukkan Lebar Persegi Panjang (dalam cm) : ";
                    cin >> squareLong.width;
                    cout << "Luas Persegi Panjang : " << rectangleArea(squareLong.length, squareLong.width) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }
                
                if (menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Segitiga Sama Sisi (dalam cm) : ";
                    cin >> EquilateralTriangle.side;
                    cout << "Keliling Segitiga Sama Sisi : " << equilateralTriangleCircumference(EquilateralTriangle.side) << " cm" << endl;
                }

                if (menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Segitiga Sama Sisi (dalam cm) : ";
                    cin >> EquilateralTriangle.base;
                    cout << "Masukkan Tinggi Segitiga Sama Sisi (dalam cm) : ";
                    cin >> EquilateralTriangle.height;
                    cout << "Luas Segitiga Sama Sisi : " << equilateralTriangleArea(EquilateralTriangle.base, EquilateralTriangle.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 4 && menu2 == 1){ 
                    cout << "Masukkan Panjang Sisi Miring Segitiga Sama Kaki (dalam cm) : ";
                    cin >> EquilateralTriangle.side;
                    cout << "Masukkan Panjang Alas Segitiga Sama Sisi (dalam cm) : ";
                    cin >> EquilateralTriangle.base;
                    cout << "Keliling Segitiga Sama Sisi : " << isoscelesTriangleCircumference(EquilateralTriangle.base, EquilateralTriangle.side) << " cm" << endl;
                }

                if (menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Segitiga Sama Kaki (dalam cm) : ";
                    cin >> EquilateralTriangle.base;
                    cout << "Masukkan Tinggi Segitiga Sama Kaki (dalam cm) : ";
                    cin >> EquilateralTriangle.height;
                    cout << "Luas Segitiga Sama Kaki : " << isoscelesTriangleArea(EquilateralTriangle.base, EquilateralTriangle.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 5 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Pertama Segitiga Siku-Siku (dalam cm) : ";
                    cin >> RightTriangle.side1;
                    cout << "Masukkan Panjang Sisi Kedua Segitiga Siku-Siku (dalam cm) : ";
                    cin >> RightTriangle.side2;
                    cout << "Masukkan Panjang Sisi Ketiga Segitiga Siku-Siku (dalam cm) : ";
                    cin >> RightTriangle.side3;
                    cout << "Keliling Segitiga Siku-Siku : " << rightTriangleCircumference(RightTriangle.side1, RightTriangle.side2, RightTriangle.side3) << " cm" << endl;
                }

                if (menu1 == 5 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Segitiga Siku-Siku (dalam cm) : ";
                    cin >> RightTriangle.base;
                    cout << "Masukkan Tinggi Segitiga Siku-Siku (dalam cm) : ";
                    cin >> RightTriangle.height;
                    cout << "Luas Segitiga Siku-Siku : " << rightTriangleArea(RightTriangle.base, RightTriangle.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 6 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Pertama Segitiga Sembarang (dalam cm) : ";
                    cin >> ScaleneTriangle.side1;
                    cout << "Masukkan Panjang Sisi Kedua Segitiga Sembarang (dalam cm) : ";
                    cin >> ScaleneTriangle.side2;
                    cout << "Masukkan Panjang Sisi Ketiga Segitiga Sembarang (dalam cm) : ";
                    cin >> ScaleneTriangle.side3;
                    cout << "Keliling Segitiga Sembarang : " << scaleneTriangleCircumference(ScaleneTriangle.side1, ScaleneTriangle.side2, ScaleneTriangle.side3) << " cm" << endl;
                }

                if (menu1 == 6 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Segitiga Sembarang (dalam cm) : ";
                    cin >> ScaleneTriangle.base;
                    cout << "Masukkan Tinggi Segitiga Sembarang (dalam cm) : ";
                    cin >> ScaleneTriangle.height;
                    cout << "Luas Segitiga Sembarang : " << scaleneTriangleArea(ScaleneTriangle.base, ScaleneTriangle.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 7 && menu2 == 1){
                    cout << "Masukkan Jari-Jari Lingkaran (dalam cm) : ";
                    cin >> Circle.radius;
                    cout << "Keliling Lingkaran : " << circleCircumference(Circle.radius) << " cm" << endl;
                }

                if (menu1 == 7 && menu2 == 2){
                    cout << "Masukkan Jari-Jari Lingkaran (dalam cm) : ";
                    cin >> Circle.radius;
                    cout << "Luas Lingkaran : " << circleArea(Circle.radius) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 8 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Atas Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side1;
                    cout << "Masukkan Panjang Sisi Bawah Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side2;
                    cout << "Masukkan Panjang Sisi Kiri Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side3;
                    cout << "Masukkan Panjang Sisi Kanan Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side4;
                    cout << "Keliling Trapesium : " << trapezoidCircumference(Trapezoid.side1, Trapezoid.side2, Trapezoid.side3, Trapezoid.side4) << " cm" << endl;
                }

                if (menu1 == 8 && menu2 == 2){
                    cout << "Masukkan Panjang Sisi Atas Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side1;
                    cout << "Masukkan Panjang Sisi Bawah Trapesium (dalam cm) : ";
                    cin >> Trapezoid.side2;
                    cout << "Masukkan Tinggi Trapesium (dalam cm) : ";
                    cin >> Trapezoid.height;
                    cout << "Luas Trapesium : " << trapezoidArea(Trapezoid.side1, Trapezoid.side2, Trapezoid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 9 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Atas / Bawah Jajar Genjang (dalam cm) : ";
                    cin >> Parallelogram.side1;
                    cout << "Masukkan Panjang Sisi Kanan / Kiri Jajar Genjang (dalam cm) : ";
                    cin >> Parallelogram.side2;
                    cout << "Keliling Jajar Genjang : " << parallelogramCircumference(Parallelogram.side1, Parallelogram.side2) << " cm" << endl;
                }

                if (menu1 == 9 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Jajar Genjang (dalam cm) : ";
                    cin >> Parallelogram.base;
                    cout << "Masukkan Tinggi Jajar Genjang (dalam cm) : ";
                    cin >> Parallelogram.height;
                    cout << "Luas Jajar Genjang : " << parallelogramArea(Parallelogram.base, Parallelogram.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 10 && menu2 == 1){
                    cout << "Masukkan Sisi Panjang Layang-layang (dalam cm) : ";
                    cin >> Kite.side1;
                    cout << "Masukkan Sisi Pendek Layang-layang (dalam cm) : ";
                    cin >> Kite.side2;
                    cout << "Keliling Persegi Panjang : " << rectangleCircumference(Kite.side1, Kite.side2) << " cm" << endl;
                }

                if (menu1 == 10 && menu2 == 2){
                    cout << "Masukkan Panjang Diagonal 1 Layang-layang (dalam cm) : ";
                    cin >> Kite.diagonal1;
                    cout << "Masukkan Panjang Diagonal 2 Layang-layang (dalam cm) : ";
                    cin >> Kite.diagonal2;
                    cout << "Luas Layang-layang : " << kiteArea(Kite.diagonal1, Kite.diagonal2) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 11 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Belah Ketupat (dalam cm) : ";
                    cin >> Rhombus.side;
                    cout << "Keliling Belah Ketupat : " << rhombusCircumference(Rhombus.side) << " cm" << endl;
                }

                if (menu1 == 11 && menu2 == 2){
                    cout << "Masukkan Panjang Diagonal 1 Belah Ketupat (dalam cm) : ";
                    cin >> Rhombus.diagonal1;
                    cout << "Masukkan Panjang Diagonal 2 Belah Ketupat (dalam cm) : ";
                    cin >> Rhombus.diagonal2;
                    cout << "Luas Belah Ketupat : " << rhombusArea(Rhombus.diagonal1, Rhombus.diagonal2) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }
                system("pause");
                break;
            
            case 9:
                system("cls");
                printSpaceBuildCalculator();
                
                cout << "Masukkan Pilihan Bangun Ruang : ";
                cin >> menu1;
                if (menu1 == 0) goto firstMenu;
                while(menu1 > 13){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Bangun Ruang: ";
                    cin >> menu1;
                    if (menu1 == 0) goto firstMenu;
                }

                printChooseOptionSpaceBuild();
                cout << "Masukkan Pilihan Operasi : ";
                cin >> menu2;
                if (menu2 == 0) goto firstMenu;
                while(menu2 > 3){
                    cout << "Menu yang anda pilih tidak tersedia" << endl;
                    cout << "Masukkan Pilihan Operasi : ";
                    cin >> menu2;
                    if (menu2 == 0) goto firstMenu;
                }

                if (menu1 == 1 && menu2 == 1){
                    cout << "Masukkan Panjang Sisi Kubus (dalam cm) : ";
                    cin >> Cube.side;
                    cout << "Keliling Kubus : " << cubeCircumference(Cube.side) << " cm" << endl;
                }

                if (menu1 == 1 && menu2 == 2){
                    cout << "Masukkan Panjang Sisi Kubus (dalam cm) : ";
                    cin >> Cube.side;
                    cout << "Luas Permukaan Kubus : " << cubeSurfaceArea(Cube.side) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 1 && menu2 == 3){
                    cout << "Masukkan Panjang Sisi Kubus (dalam cm) : ";
                    cin >> Cube.side;
                    cout << "Volume Kubus : " << cubeVolume(Cube.side) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 2 && menu2 == 1){
                    cout << "Masukkan Panjang Balok (dalam cm) : ";
                    cin >> RectangularSolid.length;
                    cout << "Masukkan Lebar Balok (dalam cm) : ";
                    cin >> RectangularSolid.width;
                    cout << "Masukkan Tinggi Balok (dalam cm) : ";
                    cin >> RectangularSolid.height;
                    cout << "Keliling Balok : " << rectangularSolidCircumference(RectangularSolid.length, RectangularSolid.width, RectangularSolid.height) << " cm" << endl;
                }

                if (menu1 == 2 && menu2 == 2){
                    cout << "Masukkan Panjang Balok (dalam cm) : ";
                    cin >> RectangularSolid.length;
                    cout << "Masukkan Lebar Balok (dalam cm) : ";
                    cin >> RectangularSolid.width;
                    cout << "Masukkan Tinggi Balok (dalam cm) : ";
                    cin >> RectangularSolid.height;
                    cout << "Luas Permukaan Balok : " << rectangularSolidSurfaceArea(RectangularSolid.length, RectangularSolid.width, RectangularSolid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 2 && menu2 == 3){
                    cout << "Masukkan Panjang Balok (dalam cm) : ";
                    cin >> RectangularSolid.length;
                    cout << "Masukkan Lebar Balok (dalam cm) : ";
                    cin >> RectangularSolid.width;
                    cout << "Masukkan Tinggi Balok (dalam cm) : ";
                    cin >> RectangularSolid.height;
                    cout << "Volume Balok : " << rectangularSolidVolume(RectangularSolid.length, RectangularSolid.width, RectangularSolid.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 3 && menu2 == 1){
                    cout << "Masukkan Panjang Jari-jari Bola (dalam cm) : ";
                    cin >> Sphere.radius;
                    cout << "Keliling Bola : " << sphereCircumference(Sphere.radius) << " cm" << endl;
                }

                if (menu1 == 3 && menu2 == 2){
                    cout << "Masukkan Panjang Jari-jari Bola (dalam cm) : ";
                    cin >> Sphere.radius;
                    cout << "Luas Permukaan Bola : " << sphereSurfaceArea(Sphere.radius) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 3 && menu2 == 3){
                    cout << "Masukkan Panjang Jari-jari Bola (dalam cm) : ";
                    cin >> Sphere.radius;
                    cout << "Volume Bola : " << sphereVolume(Sphere.radius) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 4 && menu2 == 1){
                    cout << "Masukkan Jari-jari Tabung (dalam cm) : ";
                    cin >> Cylinder.radius;
                    cout << "Masukkan Tinggi Tabung (dalam cm) : ";
                    cin >> Cylinder.height;
                    cout << "Keliling Tabung : " << cylinderCircumference(Cylinder.radius) << " cm" << endl;
                }

                if (menu1 == 4 && menu2 == 2){
                    cout << "Masukkan Jari-jari Tabung (dalam cm) : ";
                    cin >> Cylinder.radius;
                    cout << "Masukkan Tinggi Tabung (dalam cm) : ";
                    cin >> Cylinder.height;
                    cout << "Luas Permukaan Tabung : " << cylinderSurfaceArea(Cylinder.radius, Cylinder.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 4 && menu2 == 3){
                    cout << "Masukkan Jari-jari Tabung (dalam cm) : ";
                    cin >> Cylinder.radius;
                    cout << "Masukkan Tinggi Tabung (dalam cm) : ";
                    cin >> Cylinder.height;
                    cout << "Volume Tabung : " << cylinderVolume(Cylinder.radius, Cylinder.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 5 && menu2 == 1){
                    cout << "Masukkan Jari-jari Kerucut (dalam cm) : ";
                    cin >> Cone.radius;
                    cout << "Masukkan Tinggi Kerucut (dalam cm) : ";
                    cin >> Cone.height;
                    cout << "Keliling Kerucut : " << coneCircumference(Cone.radius) << " cm" << endl;
                }

                if (menu1 == 5 && menu2 == 2){
                    cout << "Masukkan Jari-jari Kerucut (dalam cm) : ";
                    cin >> Cone.radius;
                    cout << "Masukkan Tinggi Kerucut (dalam cm) : ";
                    cin >> Cone.height;
                    cout << "Luas Permukaan Kerucut : " << coneSurfaceArea(Cone.radius, Cone.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 5 && menu2 == 3){
                    cout << "Masukkan Jari-jari Kerucut (dalam cm) : ";
                    cin >> Cone.radius;
                    cout << "Masukkan Tinggi Kerucut (dalam cm) : ";
                    cin >> Cone.height;
                    cout << "Volume Kerucut : " << coneVolume(Cone.radius, Cone.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 6 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.height;
                    cout << "Keliling Limas Segiempat : " << squarePyramidCircumference(SquarePyramid.baseLength, SquarePyramid.baseWidth, SquarePyramid.height) << " cm" << endl;
                }

                if (menu1 == 6 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.height;
                    cout << "Luas Permukaan Limas Segiempat : " << squarePyramidSurfaceArea(SquarePyramid.baseLength, SquarePyramid.baseWidth, SquarePyramid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 6 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segiempat (dalam cm) : ";
                    cin >> SquarePyramid.height;
                    cout << "Volume Limas Segiempat : " << squarePyramidVolume(SquarePyramid.baseLength, SquarePyramid.baseWidth, SquarePyramid.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 7 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.height;
                    cout << "Keliling Limas Segitiga : " << triangularPyramidCircumference(TriangularPyramid.baseLength, TriangularPyramid.baseWidth, TriangularPyramid.height) << " cm" << endl;
                }

                if (menu1 == 7 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.height;
                    cout << "Luas Permukaan Limas Segitiga : " << triangularPyramidSurfaceArea(TriangularPyramid.baseLength, TriangularPyramid.baseWidth, TriangularPyramid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 7 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseLength;
                    cout << "Masukkan Lebar Alas Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.baseWidth;
                    cout << "Masukkan Tinggi Limas Segitiga (dalam cm) : ";
                    cin >> TriangularPyramid.height;
                    cout << "Volume Limas Segitiga : " << triangularPyramidVolume(TriangularPyramid.baseLength, TriangularPyramid.baseWidth, TriangularPyramid.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 8 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.height;
                    cout << "Keliling Prisma Segiempat : " << squarePrismCircumference(SquarePrism.baseLength, SquarePrism.baseWidth, SquarePrism.height) << " cm" << endl;
                }

                if (menu1 == 8 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.height;
                    cout << "Luas Permukaan Prisma Segiempat : " << squarePrismSurfaceArea(SquarePrism.baseLength, SquarePrism.baseWidth, SquarePrism.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 8 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segiempat (dalam cm) : ";
                    cin >> SquarePrism.height;
                    cout << "Volume Prisma Segiempat : " << squarePrismVolume(SquarePrism.baseLength, SquarePrism.baseWidth, SquarePrism.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 9 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.height;
                    cout << "Keliling Prisma Segitiga : " << triangularPrismCircumference(TriangularPrism.baseLength, TriangularPrism.baseWidth, TriangularPrism.height) << " cm" << endl;
                }

                if (menu1 == 9 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.height;
                    cout << "Luas Permukaan Prisma Segitiga : " << triangularPrismSurfaceArea(TriangularPrism.baseLength, TriangularPrism.baseWidth, TriangularPrism.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 9 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseLength;
                    cout << "Masukkan Lebar Alas Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.baseWidth;
                    cout << "Masukkan Tinggi Prisma Segitiga (dalam cm) : ";
                    cin >> TriangularPrism.height;
                    cout << "Volume Prisma Segitiga : " << triangularPrismVolume(TriangularPrism.baseLength, TriangularPrism.baseWidth, TriangularPrism.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }
                
                if (menu1 == 10 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Limas Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePyramid.baseLength;
                    cout << "Keliling Limas Segiempat Teratur : " << regularSquarePyramidCircumference(RegularSquarePyramid.baseLength) << " cm" << endl;
                }

                if (menu1 == 10 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Limas Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePyramid.baseLength;
                    cout << "Masukkan Tinggi Limas Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePyramid.height;
                    cout << "Luas Permukaan Limas Segiempat Teratur : " << regularSquarePyramidSurfaceArea(RegularSquarePyramid.baseLength, RegularSquarePyramid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 10 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Limas Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePyramid.baseLength;
                    cout << "Masukkan Tinggi Limas Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePyramid.height;
                    cout << "Volume Limas Segiempat Teratur : " << regularSquarePyramidVolume(RegularSquarePyramid.baseLength, RegularSquarePyramid.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 11 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Limas Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPyramid.baseLength;
                    cout << "Keliling Limas Segitiga Teratur : " << regularTriangularPyramidCircumference(RegularTriangularPyramid.baseLength) << " cm" << endl;
                }

                if (menu1 == 11 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Limas Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPyramid.baseLength;
                    cout << "Masukkan Tinggi Limas Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPyramid.height;
                    cout << "Luas Permukaan Limas Segitiga Teratur : " << regularTriangularPyramidSurfaceArea(RegularTriangularPyramid.baseLength, RegularTriangularPyramid.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 11 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Limas Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPyramid.baseLength;
                    cout << "Masukkan Tinggi Limas Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPyramid.height;
                    cout << "Volume Limas Segitiga Teratur : " << regularTriangularPyramidVolume(RegularTriangularPyramid.baseLength, RegularTriangularPyramid.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 12 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Prisma Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePrism.baseLength;
                    cout << "Keliling Prisma Segiempat Teratur : " << regularRectangularPrismCircumference(RegularSquarePrism.baseLength) << " cm" << endl;
                }

                if (menu1 == 12 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Prisma Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePrism.baseLength;
                    cout << "Masukkan Tinggi Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularSquarePrism.height;
                    cout << "Luas Permukaan Prisma Segitiga Teratur : " << regularRectangularPrismSurfaceArea(RegularTriangularPrism.baseLength, RegularTriangularPrism.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                }

                if (menu1 == 12 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Prisma Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePrism.baseLength;
                    cout << "Masukkan Tinggi Prisma Segiempat Teratur (dalam cm) : ";
                    cin >> RegularSquarePrism.height;
                    cout << "Volume Limas Segiempat Teratur : " << regularRectangularPrismVolume(RegularSquarePrism.baseLength, RegularSquarePrism.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }

                if (menu1 == 13 && menu2 == 1){
                    cout << "Masukkan Panjang Alas Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPrism.baseLength;
                    cout << "Keliling Prisma Segitiga Teratur : " << regularTriangularPrismCircumference(RegularTriangularPrism.baseLength) << " cm" << endl;
                }

                if (menu1 == 13 && menu2 == 2){
                    cout << "Masukkan Panjang Alas Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPrism.baseLength;
                    cout << "Masukkan Tinggi Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPrism.height;
                    cout << "Luas Permukaan Prisma Segitiga Teratur : " << regularTriangularPrismSurfaceArea(RegularTriangularPrism.baseLength, RegularTriangularPrism.height) << " cm";
                    SetConsoleOutputCP(65001);cout<<"²" << endl;
                    
                }

                if (menu1 == 13 && menu2 == 3){
                    cout << "Masukkan Panjang Alas Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPrism.baseLength;
                    cout << "Masukkan Tinggi Prisma Segitiga Teratur (dalam cm) : ";
                    cin >> RegularTriangularPrism.height;
                    cout << "Volume Prisma Segitiga Teratur : " << regularTriangularPrismVolume(RegularTriangularPrism.baseLength, RegularTriangularPrism.height) << " cm";
                    SetConsoleOutputCP(65001); cout<<"³" << endl;
                }
                system("pause");
                break;

            case 10:
                cout << "Terimakasih telah menggunakan program kalkulator multifungsi ini" << endl;
                repeat = 0;
                break;

            default:
                cout << "Menu tidak tersedia" << endl;
                system("pause");
                break;
        }

    } while(repeat);
    return 0;
}