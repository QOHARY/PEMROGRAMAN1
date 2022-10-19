#include <stdio.h>
int main ()
{
    for (int q=1;q<=2; q++)
    {
    float a,b,i,j,x,y,H;
    printf("");
    scanf("%f\t",&a);
    printf("");
    scanf("%f\t",&b);
    printf("");
    scanf("%f",&i);
    printf("");
    scanf("%f",&j);
    printf("");
    scanf("%f",&x);
    printf("");
    scanf("%f",&y);
    H = (a-b)*i/j-(x+y);
    printf("%.3f\n\n",H);
    }
    return 0;
}
