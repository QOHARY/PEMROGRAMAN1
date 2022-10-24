#include <stdio.h>
int main ()
{
    char NA[30],A[30],H[30];
    int NM[30],KP[30],TTL[30],HP[30];
    printf("Nama                    :");
    gets(NA);
    printf("NIM                     :");
    gets(NM);
    printf("Kelas Pararel           :");
    gets(KP);
    printf("Tempat/Tanggal Lahir    :");
    gets(TTL);
    printf("Alamat                  :");
    gets(A);
    printf("Hobby                   :");
    gets(H);
    printf("No.HP                   :");
    gets(HP);
    printf("\nNama                    :%s\n",NA);
    printf("NIM                     :%s\n",NM);
    printf("Kelas Pararel           :%s\n",KP);
    printf("Tempat/Tanggal Lahir    :%s\n",TTL);
    printf("Alamat                  :%s\n",A);
    printf("Hobby                   :%s\n",H);
    printf("No.HP                   :%s\n",HP);
    return 0;
}