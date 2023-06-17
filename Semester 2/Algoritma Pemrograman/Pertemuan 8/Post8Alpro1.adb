procedure Post8Alpro1 is
   raptor_prompt_variable_zzyz : Unbounded_String;
   j : ??_Variable;
   size : ??_Variable;
   maks : ??_Variable;
   i : ??_Variable;
   index : ??_Variable;
   temp : ??_Variable;
   array1d : ??_1D_Array(1..??);
   array2 : ??_2D_Array(1..??,1..??);
   array1 : ??_2D_Array(1..??,1..??);
begin
   maks :=3;
   Put_Line("===Array Pertama===");
   i :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         Put("       Array ["+i+", "+j+"] : ");
         raptor_prompt_variable_zzyz :="Masukkan Array 1 ke-"+"["+i+", "+j+"]";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(array1(i,j));
         Put_Line(array1(i,j));
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   Put(Character'Val(10));
   Put_Line("===Array kedua===");
   i :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         Put("       Array ["+i+", "+j+"] : ");
         raptor_prompt_variable_zzyz :="Masukkan Array 2 ke-"+"["+i+", "+j+"]";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(array2(i,j));
         Put_Line(array2(i,j));
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   Put(Character'Val(10));
   Put_Line("===Matriks 1===");
   i :=1;
   while not (i>maks) loop
      j :=1;
      Put("       | ");
      while not (j>maks) loop
         Put(" "+array1(i,j)+" ");
         j :=j+1;
      end loop;
      Put_Line(" |");
      i :=i+1;
   end loop;
   Put(Character'Val(10));
   Put_Line("===Matriks 2===");
   i :=1;
   while not (i>maks) loop
      j :=1;
      Put("       | ");
      while not (j>maks) loop
         Put(" "+array2(i,j)+" ");
         j :=j+1;
      end loop;
      Put_Line(" |");
      i :=i+1;
   end loop;
   Put(Character'Val(10));
   Put_Line("===Hasil Gabung Array Pertama dan Kedua===");
   i :=1;
   index :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         array1D(index) := array1(i,j);
         Put_Line("       Array 1D ["+index+"] : "+array1D(index));
         index :=index+1;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   i :=1;
   while not (i>maks) loop
      j :=1;
      while not (j>maks) loop
         array1D(index) := array2(i,j);
         Put_Line("       Array 1D ["+index+"] : "+array1D(index));
         index :=index+1;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   Put(Character'Val(10));
   size :=array1D'Length;
   Put_Line("===Array 1 Dimensi=== ");
   Put("       {");
   i :=1;
   while not (i>size) loop
      if i=size then 
         Put_Line(array1D(i)+"}");
      else
         Put(array1D(i)+", ");
      end if;
      i :=i+1;
   end loop;
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
   Put(Character'Val(10));
   Put_Line("===Hasil Gabung Array Pertama dan Kedua Setelah di Sorting===");
   i :=1;
   while not (i>size) loop
      Put_Line("       Array ["+i+"] : "+array1D(i));
      i :=i+1;
   end loop;
   i :=1;
   Put_Line("===Array 1 Dimensi Setelah di Sorting===");
   Put("       {");
   while not (i>size) loop
      if i=size then 
         Put_Line(array1D(i)+"}");
      else
         Put(array1D(i)+", ");
      end if;
      i :=i+1;
   end loop;
end Post8Alpro1;
