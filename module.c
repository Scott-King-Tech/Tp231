
#include <stdio.h>
#include <stdlib.h>
#include "module.h"




void remplirMatriceAddition(int lignes, int colonnes, int M[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Entrez la valeur de M[%d][%d] : ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}
void sommeMatrice(int lignes, int colonnes, int A[lignes][colonnes], int B[lignes][colonnes], int C[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void afficherMatriceAddition(int lignes, int colonnes, int M[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

/*====================================================================================*/

void remplirMatriceMultiplication(int lignes, int colonnes, int M[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}


void afficherMatriceMultiplication(int lignes, int colonnes, int M[lignes][colonnes]) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

void multiplicationMatrice(int lignesA, int colonnesA, int A[lignesA][colonnesA],
                           int lignesB, int colonnesB, int B[lignesB][colonnesB],
                           int C[lignesA][colonnesB]) {
    for (int i = 0; i < lignesA; i++) {
        for (int j = 0; j < colonnesB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colonnesA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

/*====================================================================================*/


int rechercheSequentielle(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i; 
        }
    }
    return -1; 
}


/*====================================================================================*/
int estTrie(int tableau[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (tableau[i] > tableau[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}


/*====================================================================================*/

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double medianeMatrice(int lignes, int colonnes, int M[lignes][colonnes]) {
    int taille = lignes * colonnes;
    int tableau[taille];

    
    int k = 0;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            tableau[k++] = M[i][j];
        }
    }

    
    qsort(tableau, taille, sizeof(int), cmp);

    
    if (taille % 2 == 1) {
        return tableau[taille / 2];
    } else {

        return (tableau[taille / 2 - 1] + tableau[taille / 2]) / 2.0;
    }
}

/*====================================================================================*/

void inverserTableau(int tab[], int taille) {
    int temp;
    for (int i = 0; i < taille / 2; i++) {
        temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
}


/*====================================================================================*/
void produitVectoriel(int A[3], int B[3], int C[3]) {
    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];
}


/*====================================================================================*/
void produitVecteurMatrice(int n, int m, int V[n], int M[n][m], int R[m]) {
    for (int j = 0; j < m; j++) {
        R[j] = 0;
        for (int i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }
}