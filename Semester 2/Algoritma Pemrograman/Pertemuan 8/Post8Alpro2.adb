procedure Post8Alpro2 is
   procedure inputArray (
         array : in out  ??;
         maks : in  ??_Variable)
   is
      raptor_prompt_variable_zzyz : Unbounded_String;
      j : ??_Variable;
      i : ??_Variable;
      array : ??_2D_Array(1..??,1..??);
   begin
      i :=1;
      while not (i>maks) loop
         j :=1;
         while not (j>maks) loop
            raptor_prompt_variable_zzyz :="Masukkan array["+i+", "+j+"] : ";
            Put_Line(raptor_prompt_variable_zzyz);
            Get(array(i,j));
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
   end inputArray;
   procedure printArray2D (
         array : in out  ??;
         maks : in  ??_Variable)
   is
      j : ??_Variable;
      i : ??_Variable;
      array : ??_2D_Array(1..??,1..??);
   begin
      i :=1;
      while not (i>maks) loop
         j :=1;
         while not (j>maks) loop
            Put_Line("     Array["+i+", "+j+"] : "+array(i,j));
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
   end printArray2D;
   procedure sortArray (
         array1D : in out  ??)
   is
      j : ??_Variable;
      temp : ??_Variable;
      size : ??_Variable;
      i : ??_Variable;
      array1d : ??_1D_Array(1..??);
   begin
      size :=array1D'Length;
      i :=1;
      while not (i>size) loop
         j :=i+1;
         while not (j>size) loop
            if array1D(i)>array1D(j) then 
               temp :=array1D(i);
               array1D(i) := array1D(j);
               array1D(j) := temp;
            else
            end if;
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
   end sortArray;
   procedure arrayJoin (
         array1 : in out  ??;
         array2 : in out  ??;
         array1D : in out  ??;
         maks : in  ??_Variable)
   is
      j : ??_Variable;
      index : ??_Variable;
      i : ??_Variable;
      array1d : ??_1D_Array(1..??);
   begin
      index :=1;
      i :=1;
      while not (i>maks) loop
         j :=1;
         while not (j>maks) loop
            array1D(index) := array1(i,j);
            index :=index+1;
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
      i :=1;
      while not (i>3) loop
         j :=1;
         while not (j>3) loop
            array1D(index) := array2(i,j);
            index :=index+1;
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
   end arrayJoin;
   procedure printArray1D (
         array1D : in out  ??)
   is
      size : ??_Variable;
      i : ??_Variable;
      array1d : ??_1D_Array(1..??);
   begin
      size :=array1D'Length;
      i :=1;
      Put("     {");
      while not (i>size) loop
         if i=size then 
            Put_Line(array1D(i)+"}");
         else
            Put(array1D(i)+", ");
         end if;
         i :=i+1;
      end loop;
   end printArray1D;
   procedure printIsiArray1D (
         array1D : in out  ??)
   is
      size : ??_Variable;
      i : ??_Variable;
      array1d : ??_1D_Array(1..??);
   begin
      size :=array1D'Length;
      i :=1;
      while not (i>size) loop
         Put_Line("     Array 1D ["+i+"] : "+array1D(i));
         i :=i+1;
      end loop;
   end printIsiArray1D;
   procedure printMatriks (
         array : in out  ??;
         maks : in  ??_Variable)
   is
      j : ??_Variable;
      i : ??_Variable;
      array : ??_2D_Array(1..??,1..??);
   begin
      i :=1;
      while not (i>maks) loop
         j :=1;
         Put("     | ");
         while not (j>maks) loop
            Put(" "+array(i,j)+" ");
            j :=j+1;
         end loop;
         Put_Line(" |");
         i :=i+1;
      end loop;
   end printMatriks;
   j : ??_Variable;
   index : ??_Variable;
   i : ??_Variable;
   maks : ??_Variable;
   array1d : ??_1D_Array(1..??);
   array2 : ??_2D_Array(1..??,1..??);
   array1 : ??_2D_Array(1..??,1..??);
begin
   i :=1;
   maks :=3;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         array1(i,j) := 0;
         array2(i,j) := 0;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   i :=1;
   index :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         array1D(index) := 0;
         index :=index+1;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   i :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         array1D(index) := 0;
         index :=index+1;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   Put_Line("===Array Pertama===");
   inputArray(array1,maks);
   printArray2D(array1,maks);
   Put_Line(Character'Val(10));
   Put_Line("===Array Kedua===");
   inputArray(array2,maks);
   printArray2D(array2,maks);
   Put_Line(Character'Val(10));
   Put_Line("===Matriks 1===");
   printMatriks(array1,maks);
   Put_Line(Character'Val(10));
   Put_Line("===Matriks 2===");
   printMatriks(array2,maks);
   Put_Line(Character'Val(10));
   Put_Line("===Hasil Gabung Array Pertama dan Kedua===");
   arrayJoin(array1,array2,array1D,maks);
   printIsiArray1D(array1D);
   Put_Line(Character'Val(10));
   Put_Line("===Array 1 Dimensi===");
   printArray1D(array1D);
   Put_Line(Character'Val(10));
   Put_Line("===Hasil Gabung Array Pertama dan Kedua Setelah di Sorting===");
   sortArray(array1D);
   printIsiArray1D(array1D);
   Put_Line(Character'Val(10));
   Put_Line("===Array 1 Dimensi Setelah di Sorting===");
   printArray1D(array1D);
end Post8Alpro2;
