#include <iostream> // Rendie Abdi Saputra
#include <conio.h> // 2200018094
#include <stdlib.h>
#include <stdio.h>

int hasil;

int faktorial(int nilai){
    hasil = nilai;
    while (nilai > 1){
        hasil = hasil * (nilai-1);
        nilai = nilai - 1;
    }
    return hasil;
}
int main(){
    int p, nq, max, x, i, j, n, k, r, s, tr, no;
    int a[100];
    div_t xx;
    for (i = 0; i < 100; i++){
        a[i]=0;
    }
    printf("------------------------------\nPROGRAM GENERATE PERMUTASI\n\n");
    printf("Oleh Rendie Abdi Saputra\n");
    printf("------------------------------\n");

    //input nilai n(jumlah data maksimal 100)
    printf("Masukkan nilai n (maksimal 100) : ");
    scanf("%d", &n);

    //intput data ke dalam array
    for (i = 1; i <= n; i++){
        printf("Masukkan nilai himpuanan a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    //input nilai r
    printf("nilai r : ");
    scanf("%d", &tr);

    //hitung nilai permutasi
    p = faktorial(n);
    nq = faktorial(n-tr);
    if (nq == 0)
        nq = 1;
    max = p / nq;
    printf("Nilai permutasi : %d\n Tekan enter untuk melihan hasil generate permutasi...\n", max);
    getch();
    no = 1;
    //menggenerate permutasi dengan algortima generate next pemutation
    //generate sebanyak nilai permutasi
    for(x = 1; x <= max; x++){
        printf("%3d.", no);
        for (i = 1; i <= tr; i++){
            printf("%d ", a[i]);
        }
        printf("\n", a[i]);
        no++;
        j = n - 1;
        while (a[j] > a[j+1]){
            j = j -1;
        }
        j + 1;
        k = n;
        while (a[j] > a[k]){
            k = k - 1;
        }
        i = a[k];
        a[k] = a[j];
        a[j] = i;

        r = n;
        s = j + 1;
        while (r > s){
            i = a[r];
            a[r] = a[s];
            a[s] = i;
            r = r - 1;
            s = s + 1;
        }
    }
    getch();
}