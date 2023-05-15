#include <iostream>
using namespace std;

int seriesNumber(int number, int limits, float sum){
    if (number <= limits){
        if (number == 1){
            sum = 1.0;
            cout << number << " - ";
            
        }
        else{
            if (number % 2 == 0){
                if (number < limits){
                    sum -= 1.0 / number;
                    cout << "1/" << number << " + ";
                } else {
                    sum -= 1.0 / number;
                    cout << "1/" << number << " = " << sum << endl;
                }
            }
            if (number % 2 != 0){
                if (number < limits){
                    sum += 1.0 / number;
                    cout << "1/" << number << " - ";
                } else {
                    sum += 1.0 / number;
                    cout << "1/" << number << " = " << sum << endl;
                }
            }
        
        }
        return seriesNumber(number + 1, limits, sum);
    }
    return sum;
}

int main(){
    int start = 1;
    int limit;
    float total;
    cout << "Masukkan batas: ";
    cin >> limit;
    seriesNumber(start, limit, total);
    return 0;
}