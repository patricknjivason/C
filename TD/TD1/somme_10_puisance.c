/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer une valeur qui vous plait");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_somme_puissances(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=0;
    POUR(i=0, i<=n, i=i+1) FAIRE
      S=S+PUISSANCE(10,i);
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("la somme de 10^0 a 10^",n," est :",S);
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
  S: REEL;
DEBUT
  saisir_nombre(&n);
  S = calculer_somme_puissances(n);
  afficher_resultat(n,S);
FIN
*/
#include <math.h>
#include <stdio.h>

/* BOGUES CORRIGES (dans le pseudo-code original) :
   1) "S=S+(10^i)" : en pseudo-code et dans beaucoup d'autres langages
      le symbole ^ signifie "puissance", mais en C le symbole ^ est
      l'operateur OU EXCLUSIF BIT A BIT (XOR), totalement different
      d'une puissance mathematique. Heureusement la version C avait
      deja corrige ce point avec pow(10,i) (fonction de <math.h>),
      qui est la bonne approche.
   2) "S" n'etait pas initialisee a 0 dans le pseudo-code original
      avant la boucle. La version C avait deja cette initialisation
      (S=0;), conservee ici. */

void saisir_nombre(int *n)
{
  printf("entrer une valeur qui vous plait\n");
  scanf("%d", n);
}

double calculer_somme_puissances(int n)
{
  int i;
  double S = 0;

  for (i = 0; i <= n; i++)
  {
    S = S + pow(10, i);
  }
  return S;
}

void afficher_resultat(int n, double S)
{
  printf("la somme de 10^0 a 10^%d est : %lf\n", n, S);
}

int main(void)
{
  int n;
  double S;

  saisir_nombre(&n);
  S = calculer_somme_puissances(n);
  afficher_resultat(n, S);

  return 0;
}
