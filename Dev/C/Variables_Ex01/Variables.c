#include <stdio.h>
#include <string.h>

int main() {
    int year, horsePower, doors, seats, mileage, transChoice;
    float engineSize, fuelEconomy;
    char make[50], model[50], color[50], transmission[50], fuelType[50], condition[50];

    printf("//------------------------------------------------------------//\n");

    printf("     Veuillez entrer les caracteristiques de la voiture :\n");

    printf("//------------------------------------------------------------//\n\n\n");
   

    printf("Entrez l'annee de fabrication : ");
    scanf("%d", &year);

    printf("Entrez la puissance en chevaux : ");
    scanf("%d", &horsePower);

    do {
        printf("Entrez le nombre de portes : ");
        scanf("%d", &doors);
        if (doors != 2 && doors != 3 && doors != 4 && doors != 5) {
            printf("Erreur ! Le nombre de portes est incorrect. Veuillez reessayer.\n");
        }
    } while (doors != 2 && doors != 3 && doors != 4 && doors != 5);

    printf("Entrez le nombre de sieges : ");
    scanf("%d", &seats);

    printf("Entrez le kilometrage : ");
    scanf("%d", &mileage);

    printf("Entrez la taille du moteur (litres) : ");
    scanf("%f", &engineSize);

    printf("Entrez la consommation de carburant (litres/100km) : ");
    scanf("%f", &fuelEconomy);

    printf("Entrez la marque de la voiture : ");
    scanf("%s", make, sizeof(make));

    printf("Entrez le modele de la voiture : ");
    scanf("%s", model, sizeof(model));

    printf("Entrez la couleur de la voiture : ");
    scanf("%s", color, sizeof(color));

    do {
        printf("Entrez le type de transmission :\n1 pour manuel\n2 pour automatique\n Choix : ");
        scanf("%d", &transChoice);

        switch (transChoice) {
        case 1:
            strcpy(transmission, "manuel");
            break;
        case 2:
            strcpy(transmission, "automatique");
            break;
        default:
            printf("Erreur ! Veuillez entrer 1 pour manuel ou 2 pour automatique.\n");
        }
    } while (transChoice != 1 && transChoice != 2);

    printf("Entrez le type de carburant (essence, diesel, electrique) : ");
    scanf("%s", fuelType, sizeof(fuelType));

    if (mileage > 100) {
        strcpy(condition, "occasion");
    }
    else {
        strcpy(condition, "neuve");
    }
    printf("\n\n");

    printf("//------------------------------------------------------------//\n     La voiture a les caracteristiques suivantes :\n//------------------------------------------------------------//\n\n\nAnnee: %d\nPuissance: %d ch\nPortes: %d\nSieges: %d\nKilometrage: %d km\nTaille du moteur: %.1f L\nConsommation de carburant: %.2f L/100km\nMarque: %s\nModele: %s\nCouleur: %s\nTransmission: %s\nType de carburant: %s\nCondition: %s\n\n\n",
        year, horsePower, doors, seats, mileage, engineSize, fuelEconomy, make, model, color, transmission, fuelType, condition);

    printf("//------------------------------------------------------------//\n\n\n");


    return 0;
}
