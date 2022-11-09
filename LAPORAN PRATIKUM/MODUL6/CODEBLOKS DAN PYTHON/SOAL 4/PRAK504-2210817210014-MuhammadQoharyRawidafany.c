#include<stdio.h>
int reverse(int n)
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
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}
