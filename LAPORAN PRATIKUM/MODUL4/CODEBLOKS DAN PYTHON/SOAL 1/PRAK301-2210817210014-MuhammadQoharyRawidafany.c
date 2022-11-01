#include <stdio.h>
int main()
{
    for (int q=1;q<=3;q++){
    int a,b,H;
    printf("");
    scanf("%d",&a);
    printf("");
    scanf("%d",&b);
    if (a<b){
        printf("%d %d\n\n",a,b);
        }
    else if (a>b){
        printf("%d %d\n\n",b,a);
        }
    }
    return 0;
}
