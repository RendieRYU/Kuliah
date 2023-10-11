#include <iostream>

int main() {
    int arr[8] = {5, 1, 2, 3, 6, 4, 7};

    std::cout << "Array awal:\n";
    for(int i = 0; i < 7; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    int new_elements[7] = {5,1,2,3,6,4,7};
    
    for(int j=0;j<7;++j){
        // geser semua elemen satu posisi ke kanan
        for(int i = j; i >= 0 ; --i) {
            arr[i+1] = arr[i];
        }
        
        // tambahkan elemen baru di depan
        arr[0] = new_elements[j];

        std::cout << "Array setelah menambahkan " << new_elements[j] <<" :\n";
        
        for(int i = 0; i <= j+1; ++i){
            std::cout << arr[i] <<' ';
        }
        
         std::cout<<'\n';
     }

   return 0;
}
