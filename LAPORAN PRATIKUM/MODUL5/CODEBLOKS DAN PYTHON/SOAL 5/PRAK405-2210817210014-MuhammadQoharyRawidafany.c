#include <stdio.h>
int main()
{
    int i,nilai1,nilai2,j,t0,t1,t2,u;
    t2=0;
    scanf("%d %d",&nilai1,&nilai2);
        for(i=0;i<nilai1;i++){
        for(j=i;j>=0;j--){
            printf("(%d * %d)",j+1,nilai2);
            if (j>0){
                printf("+");
                }
            }
            t0 = (i+1)*nilai2;
            t1 = t1 + t0;
            printf(" = %d\n",t1);
            t2 = t2 + t1;
        }
        printf("%d",t2);
        return 0;
}

