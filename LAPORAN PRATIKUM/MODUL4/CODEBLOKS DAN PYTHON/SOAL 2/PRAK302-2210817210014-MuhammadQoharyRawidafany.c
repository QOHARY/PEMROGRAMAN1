#include <stdio.h>
int main ()
{
    for (int q=1;q<=5;q++){
    int H;
    printf("");
    scanf("%d",&H);
    if (H >= 80){
        printf("A\n",H);
    }
    else if ( H>=70 && H<=79){
        printf("B\n",H);
    }
    else if (H>=60 && H<=69){
        printf("C\n",H);
    }
    else if (H>=50 && H<= 59){
        printf("D\n",H);
    }
    else if (H < 50){
        printf("E\n",H);
    }
    }
    return 0;
}
