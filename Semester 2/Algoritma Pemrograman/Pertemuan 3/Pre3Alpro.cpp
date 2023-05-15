#include <iostream>
using namespace std;

class count{
    public:
        void inputData();
        int process();
        void outputData();
    private:
        int x;
        int y;
        float result;
};

//input number
void count::inputData(){
    cout << "Masukkan nilai x = "; 
    cin >> x;
    cout << "Masukkan nilai y = "; 
    cin >> y;
}

//process power of number
int count::process(){
    result = 1;
    //power of number 0
    if (y == 0){
        result = 1;
    }
    //positive power of number
    if (y > 0){
        for (int i = 0; i < y; i++){
            result *= x;
        }
    }
    //negative power of number
    if (y < 0){
        for (int i = y; i < 0; i++){
            result /= x;
        }
    }
    return result;
}

//output result
void count::outputData(){
    cout << "Hasil dari " << x << " pangkat " << y << " adalah " << result << endl;
}

//main program
int main(){
    count powerOfNumber;
    powerOfNumber.inputData();
    powerOfNumber.process();
    powerOfNumber.outputData();
    return 0;
}