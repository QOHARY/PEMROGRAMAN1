#include <stdio.h>
#include <math.h>
int main()
{
    for (int q=1;q<=2;q++)
    {
    float r,t,L,V,K;
    printf("");
    scanf("%f",&r);
    printf("");
    scanf("%f",&t);
    V = 22*r*r*t/7;
    L = 2*22*r*(r+t)/7;
    K = 2*22*r/7;
    printf("Volume = %.2f\n",V);
    printf("Luas = %.2f\n",L);
    printf("Keliling = %.2f\n\n",K);
    }
    return 0;
}
