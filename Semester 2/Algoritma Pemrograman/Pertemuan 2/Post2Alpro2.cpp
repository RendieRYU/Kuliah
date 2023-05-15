#include <iostream>
#include <string>
using namespace std;
void kabisat (int years)
{

   if (years % 4==0)
   {
      if (years % 100==0)
      {
         if (years % 400==0)
         {
            cout << years << " adalah tahun kabisat" << endl;         }
         else
         {
            cout << years << " bukan tahun kabisat" << endl;         }
      }
      else
      {
         cout << years << " adalah tahun kabisat" << endl;      }
   }
   else
   {
      cout << years << " bukan tahun kabisat" << endl;   }
}
int main()
{
   string raptor_prompt_variable_zzyz;
   int year;

   raptor_prompt_variable_zzyz ="Masukkan tahun dalam masehi: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> year;
   kabisat(year);
   return 0;
}