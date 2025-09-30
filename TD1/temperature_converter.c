#include <stdio.h>

int main(void) {
    int choix;
    double temperature;

    printf("Bienvenue dans votre convertisseur de température\n");
    printf("1) Convertir de Celsius en Fahrenheit\n");
    printf("2) Convertir de Fahrenheit en Celsius\n >> ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Entrez la valeur en degré Celsius\n >> ");
        scanf("%lf", &temperature);
        printf("%.2lf°C = %.2lf°F\n", temperature, (temperature * 9.0 / 5.0) + 32);
    }
    else if (choix == 2) {
        printf("Entrez la valeur en degré Fahrenheit\n >> ");
        scanf("%lf", &temperature);
        printf("%.2lf°F = %.2lf°C\n", temperature, (temperature - 32) * 5.0 / 9.0);
    }
    else {
        printf("Choix invalide !\n");
    }

    return 0;
}
