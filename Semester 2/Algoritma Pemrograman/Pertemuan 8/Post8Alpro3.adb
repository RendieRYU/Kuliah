procedure Post8Alpro3 is
   procedure inputMatriks (
         matriks : in out  ??;
         batas : in  ??_Variable)
   is
      raptor_prompt_variable_zzyz : Unbounded_String;
      j : ??_Variable;
      i : ??_Variable;
      matriks : ??_2D_Array(1..??,1..??);
   begin
      i :=1;
      while not (i>batas) loop
         j :=1;
         while not (j>batas) loop
            raptor_prompt_variable_zzyz :="Masukkan data ke ["+i+", "+j+" ]: ";
            Put_Line(raptor_prompt_variable_zzyz);
            Get(matriks(i,j));
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
   end inputMatriks;
   procedure printMatriks (
         matriks : in out  ??;
         batas : in  ??_Variable)
   is
      j : ??_Variable;
      i : ??_Variable;
      matriks : ??_2D_Array(1..??,1..??);
   begin
      i :=1;
      while not (i>batas) loop
         j :=1;
         Put("| ");
         while not (j>batas) loop
            Put(matriks(i,j)+" ");
            j :=j+1;
         end loop;
         Put_Line("|");
         i :=i+1;
      end loop;
   end printMatriks;
   procedure checkIdentity (
         matriks : in out  ??;
         batas : in out  ??_Variable)
   is
      j : ??_Variable;
      isidentity : ??_Variable;
      i : ??_Variable;
      matriks : ??_2D_Array(1..??,1..??);
   begin
      isIdentity :=true;
      i :=1;
      while not (i>batas) loop
         j :=1;
         while not (j>batas) loop
            if i=j and then matriks(i,j)/=1 then 
               isIdentity :=false;
            else
               if i/=j and then matriks(i,j)/=0 then 
                  isIdentity :=false;
               else
               end if;
            end if;
            j :=j+1;
         end loop;
         i :=i+1;
      end loop;
      if isIdentity=true then 
         Put_Line("Matriks diatas termasuk matriks identitas");
      else
         Put_Line("Matriks diatas tidak termasuk matriks identitas");
      end if;
   end checkIdentity;
   raptor_prompt_variable_zzyz : Unbounded_String;
   j : ??_Variable;
   i : ??_Variable;
   batas : ??_Variable;
   matriks : ??_2D_Array(1..??,1..??);
begin
   raptor_prompt_variable_zzyz :="Masukkan batas : ";
   Put_Line(raptor_prompt_variable_zzyz);
   Get(batas);
   i :=1;
   while not (i>batas) loop
      j :=1;
      while not (j>batas) loop
         matriks(i,j) := 0;
         j :=j+1;
      end loop;
      i :=i+1;
   end loop;
   inputMatriks(matriks,batas);
   printMatriks(matriks,batas);
   checkIdentity(matriks,batas);
end Post8Alpro3;
