#include <stdio.h>
#include <math.h>
int main()
{
    int a,t,k;
    a = 5;
    t = 12;
    float l = 0.5 * a * t;
    int sisiB = sqrt(a*a+t*t);
    int sisiA = sqrt(sisiB*sisiB - a*a);
    int sisiC = sqrt(sisiB*sisiB - t*t);
    k = a + t + sisiB;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n",a);
    printf("Tinggi = %d cm\n\n",t);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisiA);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", sisiC);
    printf("Keliling = %d cm\n", sisiA + sisiB + sisiC);
    printf("Luas = %.0f cm",l);
    return 0;
}