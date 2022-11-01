#include <stdio.h>
int main ()
{
    int i,c,k;
    for (int u=1;u<=3;u++){
    scanf("%d %c",&c,&k);
    for(i=1;i<=50;i++){
        if(i%c==0){
            printf("%c ",k);
        }
        else{
            printf("%d ",i);
        }
    }
    }
    return 0;
}
