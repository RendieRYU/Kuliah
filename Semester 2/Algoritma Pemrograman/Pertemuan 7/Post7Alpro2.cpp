#include <iostream> //Rendie Abdi Saputra
#include <string>//2200018094
using namespace std;

void printValues(int values[], int size){
   for(int i = 0; i < size; i++){
      if (i==size - 1){
         cout << "\033[1;33m" << values[i] << "\033[0m" << "} " << endl;
      } else{
         cout << "\033[1;33m" << values[i] << "\033[0m" << ", ";
      }
   }
}

void bubbleSort(int values[], int size){
    int z = 0;
    for (int i = 0; i < size; i++){
      for(int j = i+1; j < size; j++){
         cout << "Langkah ke-" << z+1 << ": " << endl;
         if (values[i] > values[j]){
            cout << "   " << values[i] << " > " << values[j]  << "\033[1;32m" << " true" << "\033[0m" << endl;
            cout << "   {";
            for(int k = 0; k < size; k++){
               if (k == size-1){
                  if (k == i || k == j){
                     cout << "\033[1;35m" << values[k] << "\033[0m" << "} -> Before" << endl;
                  } else{
                     cout << "\033[1;33m" << values[k] << "\033[0m" << "} -> Before" << endl;
                  }
                  cout << "   swap (" << "\033[1;35m" << values[i] << ", " << values[j] << "\033[0m" << ") to ";
                  swap(values[i], values[j]);
                  cout << "(" << "\033[1;34m" << values[i] << ", " << values[j] << "\033[0m" << ") " << endl;
                  cout << "   {";            
                  for(k = 0; k < size; k++){
                     if (k == size-1){
                        if (k == i || k == j){
                           cout << "\033[1;34m" << values[k] << "\033[0m" << "} -> After" << endl;
                        } else{
                           cout << "\033[1;33m" << values[k] << "\033[0m" << "} -> After" << endl;
                        }
                     } else{
                        if (k == i || k == j){
                           cout << "\033[1;34m" << values[k] << "\033[0m" << ", ";
                        } else{
                           cout << "\033[1;33m" << values[k] << "\033[0m" << ", ";
                        }              
                     }
                  }
               } else{
                  if (k == i || k == j){
                     cout << "\033[1;35m" << values[k] << "\033[0m" << ", ";
                  } else{
                     cout << "\033[1;33m" << values[k] << "\033[0m" << ", ";
                  }              
               }
            } 
         } 
         else{
            cout << "   " << values[i] << " > " << values[j]  << "\033[1;31m" << " false" << "\033[0m" << endl;
            cout << "   no swapped" << endl;
         }
         z++;
      }
   }
}

int main(){
   int values[] = {9, 2, 1, 4, 11, 10, 18, 6};
   int size = sizeof(values)/sizeof(values[0]);
   
    cout << "Sebelum di sorting : {";
    printValues(values, size);
   //proses
    bubbleSort(values, size);

    cout << "Setelah di sorting : {";
    printValues(values, size);
   return 0;
}