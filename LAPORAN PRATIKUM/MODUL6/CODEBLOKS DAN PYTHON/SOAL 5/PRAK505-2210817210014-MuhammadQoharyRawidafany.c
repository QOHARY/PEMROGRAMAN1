#include <stdio.h>
void biodata(int tahunlahir, char namaku[20], char asal[15]){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n",namaku);
    printf("Umur saya : %d\n",tahun_sekarang - tahunlahir);
    printf("Saya Adalah Angkatan : %d\n",tahun_sekarang);
    printf("Asal Saya dari : %s\n",asal);
}
    int main()
    {
    int tahunlahir;
    char namaku[20],asal[15];
    scanf(" %d",&tahunlahir);
    scanf(" %[^\n]s",&namaku);
    scanf(" %[^\n]s",&asal);
    biodata(tahunlahir,namaku,asal);
    return 0;
}
