#include <stdio.h>
#include "module.h"



int main(){
    int choix;
    do{
        printf("\n=== MENU ===\n");
        printf("1. Somme de matrices\n");
        printf("2. Multiplication de matrices\n");
        printf("3. Recherche sequentielle dans un tableau\n");
        printf("4. Tester si un tableau est trie\n");
        printf("5. Inverser un tableau\n");
        printf("6. Mediane d'une matrice\n");
        printf("7. Produit vectoriel (vecteurs 3D)\n");
        printf("8. Produit vecteur * matrice\n");
        printf("0. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch(choix){
            case 1:{
                int lignes, colonnes;
                printf("Entrez le nombre de lignes et colonnes : ");
                scanf("%d %d", &lignes, &colonnes);
                int A[lignes][colonnes], B[lignes][colonnes], C[lignes][colonnes];
                printf("Remplissage de la matrice A\n");
                remplirMatriceAddition(lignes, colonnes, A);
                printf("Remplissage de la matrice B\n");
                remplirMatriceAddition(lignes, colonnes, B);
                sommeMatrice(lignes, colonnes, A, B, C);
                printf("Resultat de A+B :\n");
                afficherMatriceAddition(lignes, colonnes, C);
                break;
            }
            case 2:{
                int lignesA, colonnesA, lignesB, colonnesB;
                printf("Entrez lignesA colonnesA : ");
                scanf("%d %d", &lignesA, &colonnesA);
                printf("Entrez lignesB colonnesB : ");
                scanf("%d %d", &lignesB, &colonnesB);
                if(colonnesA!=lignesB){printf("Multiplication impossible!\n"); break;}
                int A[lignesA][colonnesA], B[lignesB][colonnesB], C[lignesA][colonnesB];
                printf("Remplissage de A\n"); remplirMatriceMultiplication(lignesA, colonnesA, A);
                printf("Remplissage de B\n"); remplirMatriceMultiplication(lignesB, colonnesB, B);
                multiplicationMatrice(lignesA, colonnesA, A, lignesB, colonnesB, B, C);
                printf("Resultat A*B :\n"); afficherMatriceMultiplication(lignesA, colonnesB, C);
                break;
            }
            case 3:{
                int n, tab[100], val;
                printf("Taille du tableau : "); scanf("%d", &n);
                for(int i=0;i<n;i++){ printf("tab[%d] = ", i); scanf("%d",&tab[i]);}
                printf("Valeur a rechercher : "); scanf("%d",&val);
                int pos = rechercheSequentielle(tab, n, val);
                if(pos!=-1) printf("Trouvee a l'indice %d\n", pos);
                else printf("Non trouvee\n");
                break;
            }
            case 4:{
                int n, tab[100];
                printf("Taille du tableau : "); scanf("%d", &n);
                for(int i=0;i<n;i++){ printf("tab[%d] = ", i); scanf("%d",&tab[i]);}
                if(estTrie(tab, n)) printf("Tableau trie\n");
                else printf("Tableau non trie\n");
                break;
            }
            case 5:{
                int n, tab[100];
                printf("Taille du tableau : "); scanf("%d", &n);
                for(int i=0;i<n;i++){ printf("tab[%d] = ", i); scanf("%d",&tab[i]);}
                inverserTableau(tab,n);
                printf("Tableau inverse : "); for(int i=0;i<n;i++) printf("%d ", tab[i]); printf("\n");
                break;
            }
            case 6:{
                int lignes = 2, colonnes = 3;
                    int M[2][3] = {{1, 5, 3}, {4, 2, 6}};

                    double med = medianeMatrice(lignes, colonnes, M);
                    printf("La mediane de la matrice est : %.2f\n", med);
            }
            case 7:{
                int A[3], B[3], C[3];
                printf("Vecteur A : "); for(int i=0;i<3;i++) scanf("%d",&A[i]);
                printf("Vecteur B : "); for(int i=0;i<3;i++) scanf("%d",&B[i]);
                produitVectoriel(A,B,C);
                printf("A x B = (%d,%d,%d)\n", C[0], C[1], C[2]);
                break;
            }
            case 8:{
               int n, m;

            printf("Entrez la taille du vecteur (nombre de lignes de la matrice) : ");
            scanf("%d", &n);
            printf("Entrez le nombre de colonnes de la matrice : ");
            scanf("%d", &m);

            int V[n], M[n][m], R[m];

            printf("\n--- Remplissage du vecteur ---\n");
            for (int i = 0; i < n; i++) {
                printf("V[%d] = ", i);
                scanf("%d", &V[i]);
            }

            printf("\n--- Remplissage de la matrice ---\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("M[%d][%d] = ", i, j);
                    scanf("%d", &M[i][j]);
                }
            }

            produitVecteurMatrice(n, m, V, M, R);

            printf("\n--- Résultat du produit V * M ---\n");
            for (int j = 0; j < m; j++) {
                printf("%d ", R[j]);
            }
            printf("\n");
    break;  
            }
            case 0: printf("Au revoir !\n"); break;
            default: printf("Option invalide !\n");
        }
    }while(choix!=0);

    return 0;
}

