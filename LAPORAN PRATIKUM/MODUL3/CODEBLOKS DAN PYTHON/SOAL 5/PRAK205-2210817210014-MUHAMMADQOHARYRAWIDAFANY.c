#include <stdio.h>
#include <math.h>
int main()
{
    for(int q=1; q<=2;q++)
    {
    int A,B,LS,AL,K,T;
    printf("");
    scanf("%d",&A);
    printf("");
    scanf("%d",&B);
    AL = sqrt(B*B-A*A);
    T = A;
    K = A + B + AL;
    LS = 1*A*AL/2;
    printf("Alas = %d cm\n",AL);
    printf("Tinggi = %d cm\n",T);
    printf("Keliling = %d cm\n",K);
    printf("Luas = %d cm^2\n\n",LS);
    }
    return 0;
}
