/*
Konversi Waktu:
1. Detik
2. Menit
3. Jam
4. Hari
5. Minggu
6. Bulan
7. Tahun
*/

//Konversi Detik ke Menit
float secondToMinute(int second){
    return second / 60;
}

//Konversi Detik ke Jam
float secondToHour(int second){
    return second / 3600;
}

//Konversi Detik ke Hari
float secondToDay(int second){
    return second / 86400;
}

//Konversi Detik ke Minggu
float secondToWeek(int second){
    return second / 604800;
}

//Konversi Detik ke Bulan
float secondToMonth(int second){
    return second / 2628000;
}

//Konversi Detik ke Tahun
float secondToYear(int second){
    return second / 31536000;
}

//Konversi Menit ke Detik
float minuteToSecond(int minute){
    return minute * 60;
}

//Konversi Menit ke Jam
float minuteToHour(int minute){
    return minute / 60;
}

//Konversi Menit ke Hari
float minuteToDay(int minute){
    return minute / 1440;
}

//Konversi Menit ke Minggu
float minuteToWeek(int minute){
    return minute / 10080;
}

//Konversi Menit ke Bulan
float minuteToMonth(int minute){
    return minute / 43800;
}

//Konversi Menit ke Tahun
float minuteToYear(int minute){
    return minute / 525600;
}

//Konversi Jam ke Detik
float hourToSecond(int hour){
    return hour * 3600;
}

//Konversi Jam ke Menit
float hourToMinute(int hour){
    return hour * 60;
}

//Konversi Jam ke Hari
float hourToDay(int hour){
    return hour / 24;
}

//Konversi Jam ke Minggu
float hourToWeek(int hour){
    return hour / 168;
}

//Konversi Jam ke Bulan
float hourToMonth(int hour){
    return hour / 730;
}

//Konversi Jam ke Tahun
float hourToYear(int hour){
    return hour / 8760;
}

//Konversi Hari ke Detik
float dayToSecond(int day){
    return day * 86400;
}

//Konversi Hari ke Menit
float dayToMinute(int day){
    return day * 1440;
}

//Konversi Hari ke Jam
float dayToHour(int day){
    return day * 24;
}

//Konversi Hari ke Minggu
float dayToWeek(int day){
    return day / 7;
}

//Konversi Hari ke Bulan
float dayToMonth(int day){
    return day / 30;
}

//Konversi Hari ke Tahun
float dayToYear(int day){
    return day / 365;
}

//Konversi Minggu ke Detik
float weekToSecond(int week){
    return week * 604800;
}

//Konversi Minggu ke Menit
float weekToMinute(int week){
    return week * 10080;
}

//Konversi Minggu ke Jam
float weekToHour(int week){
    return week * 168;
}

//Konversi Minggu ke Hari
float weekToDay(int week){
    return week * 7;
}

//Konversi Minggu ke Bulan
float weekToMonth(int week){
    return week / 4;
}

//Konversi Minggu ke Tahun
float weekToYear(int week){
    return week / 52;
}

//Konversi Bulan ke Detik
float monthToSecond(int month){
    return month * 2628000;
}

//Konversi Bulan ke Menit
float monthToMinute(int month){
    return month * 43800;
}

//Konversi Bulan ke Jam
float monthToHour(int month){
    return month * 730;
}

//Konversi Bulan ke Hari
float monthToDay(int month){
    return month * 30;
}

//Konversi Bulan ke Minggu
float monthToWeek(int month){
    return month * 4;
}

//Konversi Bulan ke Tahun
float monthToYear(int month){
    return month / 12;
}

//Konversi Tahun ke Detik
float yearToSecond(int year){
    return year * 31536000;
}

//Konversi Tahun ke Menit
float yearToMinute(int year){
    return year * 525600;
}

//Konversi Tahun ke Jam
float yearToHour(int year){
    return year * 8760;
}

//Konversi Tahun ke Hari
float yearToDay(int year){
    return year * 365;
}

//Konversi Tahun ke Minggu
float yearToWeek(int year){
    return year * 52;
}

//Konversi Tahun ke Bulan
float yearToMonth(int year){
    return year * 12;
}