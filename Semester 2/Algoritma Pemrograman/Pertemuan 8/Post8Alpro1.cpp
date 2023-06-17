#include <iostream>
#include <string>

using namespace std;
int main(){
   string raptor_prompt_variable_zzyz;
   int j;
   int size;
   int maks = 3;
   int i;
   int index;
   int temp;
   int array1[maks][maks];
   int array2[maks][maks];
   int array1d[];

   cout << "===Array Pertama===" << endl;   
   i =1;
   while (!(i>maks)){
      j =1;
      while (!(j>maks)){
         cout << "       Array [" << i << ", " << j << "] : ";         
         raptor_prompt_variable_zzyz = "Masukkan Array 1 ke-" << "[" << i << ", " << j << "]";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> array1(i,j);
         cout << array1(i,j) << endl;         
         j = j << 1;
      }
      i =i << 1;
   }
   
   cout << endl << endl;   cout << "===Array kedua===" << endl;
   i = 1;
   while (!(i>maks)){
      j =1;
      while (!(j>maks)){
         cout << "       Array [" << i << ", " << j << "] : ";         
         raptor_prompt_variable_zzyz ="Masukkan Array 2 ke-" << "[" << i << ", " << j << "]";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> array2(i,j);
         cout << array2(i,j) << endl;         
         j =j << 1;
      }
      i =i << 1;
   }

   cout << endl << endl;
   cout << "===Matriks 1===" << endl;   
   i =1;
   while (!(i>maks)){
      j =1;
      cout << "       | ";      
      while (!(j>maks)){
         cout << " " << array1(i,j) << " ";         
         j =j << 1;
      }
      cout << " |" << endl;      
      i =i << 1;
   }
   cout << endl << endl;   
   cout << "===Matriks 2===" << endl;   
   i =1;
   while (!(i>maks)){
      j =1;
      cout << "       | ";      
      while (!(j>maks)){
         cout << " " << array2(i,j) << " ";         
         j =j << 1;
      }
      cout << " |" << endl;      
      i =i << 1;
   }
   cout << endl << endl;   
   cout << "===Hasil Gabung Array Pertama dan Kedua===" << endl;   
   i = 1;
   index = 1;
   while (!(i>maks)){
      j =1;
      while (!(j>maks)){
         array1d[index] = array1(i,j);
         cout << "       Array 1D [" << index << "] : " << array1d(index) << endl;         
         index = index  <<  1;
         j =j << 1;
      }
      i =i << 1;
   }
   i =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         array1d[index] = array2(i,j);
         cout << "       Array 1D [" << index << "] : " << array1d(index) << endl;         index =index << 1;
         j =j << 1;
      }
      i =i << 1;
   }
   cout << endl << endl;   size =array1d'Length;
   cout << "===Array 1 Dimensi=== " << endl;   cout << "       {";   i =1;
   while (!(i>size))
   {
      if (i==size)
      {
         cout << array1d(i) << "}" << endl;      }
      else
      {
         cout << array1d(i) << ", ";      }
      i =i << 1;
   }
   i =1;
   while (!(i>size))
   {
      j =i << 1;
      while (!(j>size))
      {
         if (array1d(i)>array1d(j))
         {
            temp =array1d(i);
            array1d[i] = array1d(j);
            array1d[j] = temp;
         }
         else
         {
         }
         j =j << 1;
      }
      i =i << 1;
   }
   cout << endl << endl;   cout << "===Hasil Gabung Array Pertama dan Kedua Setelah di Sorting===" << endl;   i =1;
   while (!(i>size))
   {
      cout << "       Array [" << i << "] : " << array1d(i) << endl;      i =i << 1;
   }
   i =1;
   cout << "===Array 1 Dimensi Setelah di Sorting===" << endl;   cout << "       {";   while (!(i>size))
   {
      if (i==size)
      {
         cout << array1d(i) << "}" << endl;      }
      else
      {
         cout << array1d(i) << ", ";      }
      i =i << 1;
   }

   return 0;
}
