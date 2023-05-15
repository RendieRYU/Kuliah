#include <iostream>
using namespace std;

float seriesNumber(int number, int n, float sum, int sign) {
    if (number == n + 1){
        cout << " = " << sum << endl;
        return sum;
    }
    else{
        float term = static_cast<float>(sign) / number;
        cout << "(" << term << ")";
        
        sum += term;
        sign *= -1;
        return seriesNumber(number+1, n, sum, sign);
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in the series: ";
    cin >> n;
    seriesNumber(1, n, 0, 1);
    return 0;
}
