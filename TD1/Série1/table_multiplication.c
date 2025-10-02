#include <stdio.h>


int main(void){
    int n;
    printf("Veuillez choisir l'entier de la table: ");
    scanf("%d",&n);
    for (int i = 0 ; i <= n ; i++){
        printf("%d x %d = %d\n",n , i , n*i);
    }

    return 0 ; 
}