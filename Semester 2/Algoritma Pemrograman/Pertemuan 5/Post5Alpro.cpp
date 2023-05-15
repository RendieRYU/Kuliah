#include <iostream>
#include <string>
using namespace std;

void filterNumber (int batas, float value, int i){
   if (i<=batas){
      if (i%2 == 0){
         if (i <= batas-1){
            value = value - 1.0/i;
            cout << "1/" << i << " + ";         
         }
         else{
            value = value - 1.0/i;
            cout << "1/" << i << " = " << value;
         }
      }
      else{
         if (i == 1){
            value = value + 1.0/i;
            cout << i << " - ";         
         }
         else{
            if (i <= batas-1){
               value = value + 1.0/i;
               cout << "1/" << i <<" - ";            
            }
            else{
               value = value + 1.0/i;
               cout << "1/" << i << " = " << value;         
            }
         }
      }
      filterNumber(batas,value,i+1);
   }
   else{
   }
}
int main(){
   string raptor_prompt_variable_zzyz;
   float nilai;
   int batasNilai;
   int awal;

   raptor_prompt_variable_zzyz ="Masukkan Nilai Batas : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> batasNilai;
   awal = 1;
   nilai = 0;
   filterNumber(batasNilai,nilai,awal);
   return 0;
}