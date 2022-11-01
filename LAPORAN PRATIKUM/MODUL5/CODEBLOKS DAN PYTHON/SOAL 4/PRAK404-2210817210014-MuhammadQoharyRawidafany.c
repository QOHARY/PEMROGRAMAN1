#include <stdio.h>
int main ()
{
    int a,i;
    float nilai1,nilai2;
    for(i=0;i>=0;i++){
    printf ("\nMasukkan Pilihan Anda\n");
    printf ("1. Penjumlahan\n");
    printf ("2. Pengurangan\n");
    printf ("3. Perkalian\n");
    printf ("4. Pembagian\n");
    printf ("5. Exit\n");
    printf("Masukan pilihan :");
    scanf ("%d", &a);
    if (a==5){
    printf("Terima kasih, telah menggunakan kalkulator Qohary");
    break;}
    else if (a>5 || a<=0){
    printf("Input anda salah,silahkan coba lagi");}
    else {
    printf ("Masukkan Angka Pertama :");
    scanf ("%f", &nilai1);
    printf ("Masukkan Angka Kedua :");
    scanf ("%f", &nilai2);
    if (a==1){printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f",nilai1,nilai2,nilai1+nilai2);}
    else if (a==2){printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f",nilai1,nilai2,nilai1-nilai2);}
    else if (a==3){printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f",nilai1,nilai2,nilai1*nilai2);}
    else if (a==4){printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f",nilai1,nilai2,nilai1/nilai2);}
        }
    }
}
