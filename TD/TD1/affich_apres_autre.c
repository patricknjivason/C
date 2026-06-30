/*=====ALGORITHME====
PROCEDURE saisir_tailles(n,n1: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("saisir le nombre de valeurs pour le premier tableau");
    LIRE(n);
    AFFICHER("saisir le nombre de valeurs pour le second tableau");
    LIRE(n1);
  FIN PROCEDURE

FONCTION tailles_valides(n,n1: ENTIER): BOOLEEN
  DEBUT
    RETOURNER (n>=1 ET n<=100 ET n1>=1 ET n1<=50);
  FIN FONCTION

PROCEDURE saisir_tableau(tab: TABLEAU D'ENTIER, taille: ENTIER, depart: ENTIER)
  VARIABLE i,k: ENTIER;
  DEBUT
    k=depart;
    POUR(i=0, i<taille, i=i+1) FAIRE
      AFFICHER("entrer le nombre n°",k);
      LIRE(tab[i]);
      k=k+1;
    FINPOUR
  FIN PROCEDURE

PROCEDURE fusionner_tableaux(A,B: TABLEAU D'ENTIER, n,n1: ENTIER)
  VARIABLE i: ENTIER;
  DEBUT
    POUR(i=0, i<n1, i=i+1) FAIRE
      A[n+i]=B[i];
    FINPOUR
  FIN PROCEDURE

PROCEDURE afficher_tableau(A: TABLEAU D'ENTIER, taille_totale: ENTIER)
  VARIABLE i: ENTIER;
  DEBUT
    AFFICHER("voici le resultat final");
    POUR(i=0, i<taille_totale, i=i+1) FAIRE
      AFFICHER(A[i]);
    FINPOUR
  FIN PROCEDURE

VARIABLE
  A[100],B[50]: TABLEAU D'ENTIER;
  n,n1: ENTIER;
DEBUT
  saisir_tailles(&n,&n1);
  SI (NON tailles_valides(n,n1)) FAIRE
    AFFICHER("ERREUR: entrer un nombre normal");
  SINON
    saisir_tableau(A,n,1);
    saisir_tableau(B,n1,n+1);
    fusionner_tableaux(A,B,n,n1);
    afficher_tableau(A,n+n1);
  FINSI
FIN
*/
#include <stdio.h>

void saisir_tailles(int *n, int *n1)
{
  printf("saisir le nombre de valeurs pour le premier tableau ");
  scanf("%d", n);
  printf("saisir le nombre de valeurs pour le second tableau ");
  scanf("%d", n1);
}

/* Les bornes correspondent aux tailles reelles des tableaux declares
   dans main (A[100], B[50]) : depasser ces limites provoquerait un
   debordement de tableau (ecriture hors zone memoire allouee). */
int tailles_valides(int n, int n1)
{
  return (n >= 1 && n <= 100 && n1 >= 1 && n1 <= 50);
}

/* "depart" est le numero affiche a l'utilisateur pour le premier
   element de CE tableau (1 pour A, n+1 pour B) afin de garder une
   numerotation continue sur l'ensemble de la saisie, comme dans la
   version originale qui utilisait un compteur global k partage. */
void saisir_tableau(int *tab, int taille, int depart)
{
  int i;
  int k = depart;

  for (i = 0; i < taille; i++)
  {
    printf("entrer le nombre n°%d ", k);
    scanf("%d", &tab[i]);
    k++;
  }
}

void fusionner_tableaux(int *A, const int *B, int n, int n1)
{
  int i;
  for (i = 0; i < n1; i++)
  {
    A[n + i] = B[i];
  }
}

void afficher_tableau(const int *A, int taille_totale)
{
  int i;
  printf("voici le resultat final : ");
  for (i = 0; i < taille_totale; i++)
  {
    printf("%d,", A[i]);
  }
  printf("\n");
}

int main(void)
{
  int A[100], B[50];
  int n, n1;

  saisir_tailles(&n, &n1);

  if (!tailles_valides(n, n1))
  {
    printf("ERREUR: entrer un nombre normal\n");
  }
  else
  {
    saisir_tableau(A, n, 1);
    saisir_tableau(B, n1, n + 1);
    fusionner_tableaux(A, B, n, n1);
    afficher_tableau(A, n + n1);
  }

  return 0;
}
