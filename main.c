#include <stdio.h>

int main() {
    int tab[13]; // on decalre un tableau de 13 entiers
    int BON;

    // on remplit le tableau tableau
    printf("Veuillez saisir 13 entiers :\n");
    for (BON = 0; BON < 13; BON ++) {
        printf("Élément %d : ", BON + 1);
        scanf("%d", &tab[BON]);
    }

    // on affiche les éléments du tableau avec des nouvelles lignes
    printf("Éléments du tableau :\n");
    for (BON = 0; BON < 13; BON++) {
        printf("%d\n", tab[BON ]);
    }

    return 0;
}

// Sous-programme pour saisir les valeurs d'un tableau de 20 réels
/*
void saisirTableau(float tab[], int nbr) {
    printf("Veuillez saisir les %d réels :\n", nbr);
    for (int BON

BON

l = 0; BON

BON

l < nbr; BON

BON

l++) {
        printf("Valeur %d : ", BON

BON

l + 1);
        scanf("%f", &tab[til]);
    }
}

// Sous-programme pour trier un tableau de réels par insertion
void trierTableau(float tableau[], int taille) {
    int i, b;
    float cle;
    for (i = 1; i < taille; i++) {
        cle = tableau[i];
        b = i - 1;
        while (b >= 0 && tableau[b] > cle) {
            tableau[b + 1] = tableau[b];
            b = b - 1;
        }
        tableau[b + 1] = cle;
    }
}

// Programme principal
int main() {
    float tableau[20];
    int taille = 20;
    // Appel du sous-programme de saisie
    saisirTableau(tableau, taille);
    // Appel du sous-programme de tri
    trierTableau(tableau, taille);
    // Saisie d'un réel à rechercher
    float valeurRecherchee;
    printf("Saisissez un réel à rechercher : ");
    scanf("%f", &valeurRecherchee);
    // Recherche de la valeur dans le tableau trié
    int trouve = 0;
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeurRecherchee) {
            trouve = 1;
            break;
        }
    }
    if (trouve) {
        printf("La valeur %.2f a été trouvée dans le tableau trié.\n", valeurRecherchee);
    } else {
        printf("La valeur %.2f n'a pas été trouvée dans le tableau trié.\n", valeurRecherchee);
    }
    return 0;
}
/*

