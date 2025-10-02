#include <stdio.h>
int main(void){

    double note; 
    printf("Veuillez entrer votre note: ");
    scanf("%lf",&note);
    if( note < 10 )
        printf("Insuffisant");
    else if ( note < 12 )
        printf("Moyen");
    else if ( note < 14 )
        printf("Assez-bien");
    else if ( note < 16)
        printf("Bien");
    else
        printf("Très bien\n");
    
    return 0 ; 
}