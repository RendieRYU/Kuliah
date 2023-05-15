#include <iostream>
#include <string>

using namespace std;
void powerOfNumber (int x, int y, float result)
{
   int i;

   result = 1;
   if (y==0)
   {
      result =1;
   }
   else
   {
      if (y>0)
      {
         i =0;
         while (!(i>=y))
         {
            result = result * x;
            i = i + 1;
         }
      }
      else
      {
         if (y<0)
         {
            i =y;
            while (!(i>=0))
            {
               result =result/x;
               i =i+1;
            }
         }
         else
         {
         }
      }
   }
   cout << "Hasil dari " << x << " pangkat " << y << " adalah " << result << endl;}
int main()
{
   string raptor_prompt_variable_zzyz;
   int x;
   int y;
   float result;

   raptor_prompt_variable_zzyz ="Masukkan nilai x: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukkan nilai y: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   powerOfNumber(x,y,result);

   return 0;
}
