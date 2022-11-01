#include <stdio.h>
int main()
{
    int n1,n2,i,j,u;
    for (u=1;u<=4;u++){
    scanf("%d %d",&n1,&n2);
    if (n1>n2){
        for (i=n1, j=n2; i>=n2, j<=n1;i--,j++){
                printf("%d %d",i,j);
        if(i==n2){
                break;}
            else {
            printf(" - ");
        }
    }
}
    else {
        for (i=n1, j=n2; i<=n2, j>=n1;i++,j--){
                printf("%d %d",i,j);
        if(i==n2){
                break;}
        else {
            printf(" - ");
            }
        }
    }
}
return 0;
}
