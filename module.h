#ifndef MODULE_H
#define MODULE_H
/* les fonction pour la sommes des matrices */
void remplirMatriceAddition(int lignes, int colonnes, int M[lignes][colonnes]);
void sommeMatrice(int lignes, int colonnes, int A[lignes][colonnes], int B[lignes][colonnes], int C[lignes][colonnes]);
void afficherMatriceAddition(int lignes, int colonnes, int M[lignes][colonnes]);

/*les fonction pour la multiplication des matrices */

void remplirMatriceMultiplication(int lignes, int colonnes, int M[lignes][colonnes]);
void afficherMatriceMultiplication(int lignes, int colonnes, int M[lignes][colonnes]);
void multiplicationMatrice(int lignesA, int colonnesA, int A[lignesA][colonnesA],
                           int lignesB, int colonnesB, int B[lignesB][colonnesB],
                           int C[lignesA][colonnesB]);

/*recherche sequetielle sur un tableax */

int rechercheSequentielle(int tableau[], int taille, int valeur);

/*verifier si un tableau trie  */
 
int estTrie(int tableau[], int taille); 

/* median dans un tableau  */
double medianeMatrice(int lignes, int colonnes, int M[lignes][colonnes]);

/* inverse un tableau   */
void inverserTableau(int tab[], int taille);

/* produit vectoriel  */

void produitVectoriel(int A[3], int B[3], int C[3]);

/*produit des vecteur * matrice*/
void produitVecteurMatrice(int n, int m, int V[n], int M[n][m], int R[m]);

#endif