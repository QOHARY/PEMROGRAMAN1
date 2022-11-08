#include <stdio.h>
void biodata(int tahunlahir, char namaku[30], char asal[30]){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n",namaku);
    printf("Umur saya : %d\n",tahun_sekarang - tahunlahir);
    printf("Saya Adalah Angkatan : %d\n",tahun_sekarang);
    printf("Asal Saya dari : %s\n",asal);
}
    int main()
    {
    int tahunlahir;
    char namaku[30],asal[30];
    for (int i=1;i<=2;i++){
    scanf(" %d",&tahunlahir);
    scanf(" %[^\n]s",&namaku);
    scanf(" %[^\n]s",&asal);
    biodata(tahunlahir,namaku,asal);
    }
    return 0;
}
