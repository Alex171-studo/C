#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double generer_nombre(void) {
    return (double) rand() / RAND_MAX;  
}

int main(void) {
    srand(time(NULL)); 
    int point_dans_cercle = 0;
    int points_total;

    printf("Veuillez entrer le nombre total de points à générer: ");
    scanf("%d", &points_total);

    if (points_total <= 0) {
        printf("Le nombre de points doit être strictement positif.\n");
        return 1;
    }

    for (int i = 0; i < points_total; i++) {
        double x = generer_nombre();
        double y = generer_nombre();
        if (x*x + y*y <= 1.0)  
            point_dans_cercle++;
    }

    double pi = 4.0 * point_dans_cercle / points_total;
    printf("Valeur approximative de pi: %.6lf\n", pi);

    return 0;
}
