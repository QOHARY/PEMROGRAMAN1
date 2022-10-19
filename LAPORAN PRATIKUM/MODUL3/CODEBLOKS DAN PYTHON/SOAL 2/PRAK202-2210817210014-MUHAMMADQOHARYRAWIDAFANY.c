#include <stdio.h>
int main()
{
    for (int q=1; q<=2; q++)
    {
    float NP,NK,H;
    printf("Masukan Nilai pertama : ");
    scanf("%f",&NP);
    printf("Masukan Nilai kedua : ");
    scanf("%f",&NK);
    H = NP + NK;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n\n",NP,NK,H);
    }
    return 0;
}
