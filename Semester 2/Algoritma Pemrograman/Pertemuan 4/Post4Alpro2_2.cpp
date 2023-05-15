#include <iostream>
#include <string>
using namespace std;

void filterNumber(int values){
   int result;
   int limit;

   limit = 100;
   if (values<=limit){
      if (values % 5==0 && values % 7==0){
         result = values;
         cout << result << endl;      
      }
      else{
      }
      filterNumber(values+1);
   }
   else{
   }
}
int main(){
   int value;

   value = 1;
   cout << "Hasil dari bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100 adalah " << endl;   filterNumber(value);

   return 0;
}