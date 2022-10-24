#include <stdio.h>
int main()
{
    for (int q=1;q<=3;q++){
    int I;
    printf("");
    scanf("%d",&I);
    if (I>0){
        printf("positif\n",I);
    }
    else if(I<0){
        printf("negatif\n",I);
    }
    else if(I==0){
        printf("nol\n",I);
    }
    }
}
