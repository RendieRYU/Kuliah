#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int year;

   raptor_prompt_variable_zzyz ="Masukkan tahun dalam masehi: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> year;
   if (year % 4==0)
   {
      if (year % 100==0)
      {
         if (year % 400==0)
         {
            cout << year << " adalah tahun kabisat" << endl;         }
         else
         {
            cout << year << " bukan tahun kabisat" << endl;         }
      }
      else
      {
         cout << year << " adalah tahun kabisat" << endl;      }
   }
   else
   {
      cout << year << " bukan tahun kabisat";   }

   return 0;
}
