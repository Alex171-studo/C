#include <stdio.h>

int factorielle(int n){
    
}

int main ( void){

    int N;
    double x , somme = 0.0;
    double terme = 1.0;

    printf("Calcul de e^x avec la série de Taylor\n");
    printf("Entrez la valeur de x : ");
    scanf("%lf",&x);

    printf("Entrez le nombre de termes à sommer : ");
    scanf("%d",&N);

    for ( int n = 0 ; n <= N ; n++){
        if( n == 0){
            terme = 1.0;
        }else{
            terme = terme * x / n;
        }
        somme+=terme;
    }
    printf("Approximation de e^%.2lf avec %d termes = %.10lf\n", x, N, somme);


    return 0;
}

