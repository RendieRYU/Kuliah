/*
Suhu:
1. Celcius
2. Fahrenheit
3. Reamur
4. Kelvin
*/

//konversi celcius ke fahrenheit
float celciusToFahrenheit(float celcius){
    return (celcius * 9/5) + 32;
}

//konversi celcius ke reamur
float celciusToReamur(float celcius){
    return celcius * 4/5;
}

//konversi celcius ke kelvin
float celciusToKelvin(float celcius){
    return celcius + 273;
}

//konversi fahrenheit ke celcius
float fahrenheitToCelcius(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}

//konversi fahrenheit ke reamur
float fahrenheitToReamur(float fahrenheit){
    return (fahrenheit - 32) * 4/9;
}

//konversi fahrenheit ke kelvin
float fahrenheitToKelvin(float fahrenheit){
    return (fahrenheit - 32) * 5/9 + 273;
}

//konversi reamur ke celcius
float reamurToCelcius(float reamur){
    return reamur * 5/4;
}

//konversi reamur keb fahrenheit
float reamurToFahrenheit(float reamur){
    return reamur * 9/4 + 32;
}

//konversi reamur ke kelvin
float reamurToKelvin(float reamur){
    return reamur * 5/4 + 273;
}

//konversi kelvin ke celcius
float kelvinToCelcius(float kelvin){
    return kelvin - 273;
}

//konversi kelvin ke fahrenheit
float kelvinToFahrenheit(float kelvin){
    return (kelvin - 273) * 9/5 + 32;
}

//konversi kelvin ke reamur
float kelvinToReamur(float kelvin){
    return (kelvin - 273) * 4/5;
}