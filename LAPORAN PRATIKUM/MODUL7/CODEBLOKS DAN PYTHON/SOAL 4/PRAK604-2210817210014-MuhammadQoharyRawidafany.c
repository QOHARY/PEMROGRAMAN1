#include <stdio.h>
#include <string.h>
int main()
{
    char kata1[123];
    char kata2[123];
    scanf("%[^\n]%*c", &kata1);
    scanf("%[^\n]%*c",&kata2);
    int kode,pesan,a,b=0,c=0;
    kode=strlen(kata1);
    pesan=strlen(kata2);
    if(kode ==pesan){
            for(a=0; a<kode; a++){
                if(kata1[a]==kata2[a]){
                    if(kata1[a]== ' '){
                        printf(" ");}
                    else{
                    printf("*");
                    b++;}
                }
                else{
                    printf("#");
                    c++;}
            }
            printf("\n*= %d",b);
            printf("\n#= %d",c);
             if(b>=c){
                printf("\nPesan Asli");}
                else{
                    printf("\nPesan Palsu");}
                    }
    else {
        printf("Panjang kalimat berbeda, pesan palsu");}
    return 0;
}
