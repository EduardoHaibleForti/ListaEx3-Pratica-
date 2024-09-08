#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, i=1;

    printf("Digite um numero inteiro positivo :");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0 && i%3==0){
            printf("Pim Pam\n");
        }else if(i%2==0){
        printf("Pim\n");
        }else if(i%3==0){
        printf("Pam\n");
        }else{
        printf("%d\n",i);
        }
     i++;
    }
    return 0;

    }





