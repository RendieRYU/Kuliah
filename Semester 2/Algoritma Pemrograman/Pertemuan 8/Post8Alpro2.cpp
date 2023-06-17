#include <iostream>
#include <string>

using namespace std;
 void inputArray (int array[], int maks){
   string raptor_prompt_variable_zzyz;
   int j;
   int i;
   int[][] =[??+1,??+1];

   i =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         raptor_prompt_variable_zzyz ="Masukkan array["+i+", "+j+"] : ";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> array(i,j);
         j =j+1;
      }
      i =i+1;
   }
}
 void printArray2D (
       ?? *array;
       ??_Variable maks)
{
   ?? j;
   ?? i;
   ??[,] array = new ??[??+1,??+1];

   i =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         cout << "     Array["+i+", "+j+"] : "+array(i,j) << endl;         j =j+1;
      }
      i =i+1;
   }
}
 void sortArray (
       ?? *array1D)
{
   ?? j;
   ?? temp;
   ?? size;
   ?? i;
   ??[] array1d = new ??[??+1];

   size =array1d'Length;
   i =1;
   while (!(i>size))
   {
      j =i+1;
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
         j =j+1;
      }
      i =i+1;
   }
}
 void arrayJoin (
       ?? *array1;
       ?? *array2;
       ?? *array1D;
       ??_Variable maks)
{
   ?? j;
   ?? index;
   ?? i;
   ??[] array1d = new ??[??+1];

   index =1;
   i =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         array1d[index] = array1(i,j);
         index =index+1;
         j =j+1;
      }
      i =i+1;
   }
   i =1;
   while (!(i>3))
   {
      j =1;
      while (!(j>3))
      {
         array1d[index] = array2(i,j);
         index =index+1;
         j =j+1;
      }
      i =i+1;
   }
}
 void printArray1D (
       ?? *array1D)
{
   ?? size;
   ?? i;
   ??[] array1d = new ??[??+1];

   size =array1d'Length;
   i =1;
   cout << "     {";   while (!(i>size))
   {
      if (i==size)
      {
         cout << array1d(i)+"}" << endl;      }
      else
      {
         cout << array1d(i)+", ";      }
      i =i+1;
   }
}
 void printIsiArray1D (
       ?? *array1D)
{
   ?? size;
   ?? i;
   ??[] array1d = new ??[??+1];

   size =array1d'Length;
   i =1;
   while (!(i>size))
   {
      cout << "     Array 1D ["+i+"] : "+array1d(i) << endl;      i =i+1;
   }
}
 void printMatriks (
       ?? *array;
       ??_Variable maks)
{
   ?? j;
   ?? i;
   ??[,] array = new ??[??+1,??+1];

   i =1;
   while (!(i>maks))
   {
      j =1;
      cout << "     | ";      while (!(j>maks))
      {
         cout << " "+array(i,j)+" ";         j =j+1;
      }
      cout << " |" << endl;      i =i+1;
   }
}
int main()
{
   ?? j;
   ?? index;
   ?? i;
   ?? maks;
   ??[] array1d = new ??[??+1];
   ??[,] array2 = new ??[??+1,??+1];
   ??[,] array1 = new ??[??+1,??+1];

   i =1;
   maks =3;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         array1[i,j] = 0;
         array2[i,j] = 0;
         j =j+1;
      }
      i =i+1;
   }
   i =1;
   index =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         array1d[index] = 0;
         index =index+1;
         j =j+1;
      }
      i =i+1;
   }
   i =1;
   while (!(i>maks))
   {
      j =1;
      while (!(j>maks))
      {
         array1d[index] = 0;
         index =index+1;
         j =j+1;
      }
      i =i+1;
   }
   cout << "===Array Pertama===" << endl;   inputArray(array1,maks);
   printArray2D(array1,maks);
   cout << ((char) 10) << endl;   cout << "===Array Kedua===" << endl;   inputArray(array2,maks);
   printArray2D(array2,maks);
   cout << ((char) 10) << endl;   cout << "===Matriks 1===" << endl;   printMatriks(array1,maks);
   cout << ((char) 10) << endl;   cout << "===Matriks 2===" << endl;   printMatriks(array2,maks);
   cout << ((char) 10) << endl;   cout << "===Hasil Gabung Array Pertama dan Kedua===" << endl;   arrayJoin(array1,array2,array1d,maks);
   printIsiArray1D(array1d);
   cout << ((char) 10) << endl;   cout << "===Array 1 Dimensi===" << endl;   printArray1D(array1d);
   cout << ((char) 10) << endl;   cout << "===Hasil Gabung Array Pertama dan Kedua Setelah di Sorting===" << endl;   sortArray(array1d);
   printIsiArray1D(array1d);
   cout << ((char) 10) << endl;   cout << "===Array 1 Dimensi Setelah di Sorting===" << endl;   printArray1D(array1d);

   return 0;
}
