#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   float y1;
   float dy;
   float d;
   float x2;
   float y2;
   float dx;
   float x1;

   raptor_prompt_variable_zzyz ="Masukkan Nilai x1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan Nilai y1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan Nilai x2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Masukkan Nilai y2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   dx = x2-x1;
   dy = y2-y1;
   d = sqrt( dx*dx + dy*dy );
   cout << "Hasil dari jarak A(x1,y1) dan B(x2,y2) = " << d << endl;
   return 0;
}