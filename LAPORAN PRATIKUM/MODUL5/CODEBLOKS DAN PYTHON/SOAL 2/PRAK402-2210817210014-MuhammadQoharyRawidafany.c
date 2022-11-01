#include <stdio.h>
int main ()
{
    int i,c,k;
    for (int u=1;u<=3;u++){
    scanf("%d",&c);
    for(i=1;i<=c;i++){
        if(i%2){
            printf("%d ",i);
        }
        }
        printf("\n");
        for(i=c;i>=2;i--){
            if(i%2==0){
        printf("%d ",i);
        }
        }
    }
    return 0;
}
