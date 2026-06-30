/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer un nombre quelconque");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_somme(n: ENTIER): ENTIER
  VARIABLE i,S: ENTIER;
  DEBUT
    S=0;
    POUR(i=1, i<=n, i=i+1) FAIRE
      S=S+i;
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n,S: ENTIER)
  DEBUT
    AFFICHER("la somme de tous les nombres entre 1 et ",n," est ",S);
  FIN PROCEDURE

VARIABLE
  n,S: ENTIER;
DEBUT
  saisir_nombre(&n);
  S = calculer_somme(n);
  afficher_resultat(n,S);
FIN
*/
#include <stdio.h>

void saisir_nombre(int *n)
{
  printf("entrer un nombre quelconque ");
  scanf("%d", n);
}

/* BOGUE CORRIGE : la variable S n'etait jamais initialisee a 0 avant
   la boucle ("int S;" puis directement "S=S+i;"). En C, une variable
   locale non initialisee contient une valeur indeterminee (poubelle
   memoire), donc le resultat final etait totalement aleatoire et
   different a chaque execution. Il faut TOUJOURS initialiser un
   accumulateur avant de l'utiliser dans une boucle. */
int calculer_somme(int n)
{
  int i, S = 0;

  for (i = 1; i <= n; i++)
  {
    S = S + i;
  }
  return S;
}

void afficher_resultat(int n, int S)
{
  printf("la somme de tous les nombres entre 1 et %d est : %d\n", n, S);
}

int main(void)
{
  int n, S;

  saisir_nombre(&n);
  S = calculer_somme(n);
  afficher_resultat(n, S);

  return 0;
}
