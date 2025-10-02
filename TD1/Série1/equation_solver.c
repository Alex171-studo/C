#include <stdio.h>
#include <math.h>

int main(void){

    double a , b , c, discriminant;

    printf("L'équation est sous la forme ax² + bx + c \n");

    printf("Veuillez entrez le coefficient a: \n >> ");
    scanf("%lf",&a);

    printf("Veuillez entrez le coefficient b: \n >> ");
    scanf("%lf",&b);

    printf("Veuillez entrez le coefficient c: \n >> ");
    scanf("%lf",&c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("L'équation est indéterminée (0 = 0)\n");
            } else {
                printf("L'équation est impossible (%lf = 0)\n", c);
            }
        } else {
            double x = -c / b;
            printf("C'est une équation du premier degré, solution unique : x = %lf\n", x);
        }
    }
    else{
    discriminant = pow(b,2) - (4 * a * c) ;

    if ( discriminant < 0 )
        printf("Votre équation n'admet aucune solution réelle\n");
    
    else if (discriminant == 0 )
        printf(" Votre équation n'admet qu'un seule solution réelle x = %lf" , -b / (2 * a) );

    else {
        double x1 = ( (-b - sqrt(discriminant) ) / ( 2 *a ) );
        double x2 = ( ( -b + sqrt(discriminant) ) / (2 *a ) );
        printf("Votre équation admet deux solutions réeele x1 = %lf et x2 = %lf" , x1 , x2 );
        }
    }
    
    return 0; 
}







