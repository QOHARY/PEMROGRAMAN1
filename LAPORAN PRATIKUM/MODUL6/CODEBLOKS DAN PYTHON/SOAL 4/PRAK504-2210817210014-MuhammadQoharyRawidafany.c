#include<stdio.h>
#include<math.h>
int hapus0_balikn(int n)
{
 int rem,rev=0,rnum;
    while(n>0){
    rem=n%10;
    if(rem!=0)
    rev=rev*10+rem;
    n=n/10;
}
return rev;
}
    int main() {
    int A, B;
    for (int i=1;i<=3;i++){
    scanf("%d %d",&A,&B);
    A=hapus0_balikn(A);
    B=hapus0_balikn(B);
    int C = A+B;
    printf("%d",hapus0_balikn(C));
    }
}
