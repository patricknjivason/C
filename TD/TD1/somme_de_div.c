/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer un nombre que vous voulez");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_somme_inverses(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=0;
    POUR(i=1, i<=n, i=i+1) FAIRE
      S=S+(1.0/i);
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("la somme de 1 a ",n," sur (1/i) est :",S);
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
  S: REEL;
DEBUT
  saisir_nombre(&n);
  S = calculer_somme_inverses(n);
  afficher_resultat(n,S);
FIN
*/
#include <stdio.h>

/* BOGUE CORRIGE (dans le pseudo-code original) : "S=S+(1/i)" avec i un
   ENTIER effectue une DIVISION ENTIERE en C : 1/2 vaut 0, 1/3 vaut 0,
   etc. (tout sauf 1/1). Le programme original avait deja corrige ce
   point cote C avec "1.0/i", ce qui est la bonne pratique : forcer un
   operande en flottant (1.0 au lieu de 1) declenche une division
   reelle. Cette version garde cette correction et l'applique aussi a
   la version commentee en pseudo-code pour rester cohérente, et
   supprime la variable "s" (minuscule) inutile qui dupliquait "S". */

void saisir_nombre(int *n)
{
  printf("entrer un nombre que vous voulez\n");
  scanf("%d", n);
}

double calculer_somme_inverses(int n)
{
  int i;
  double S = 0;

  for (i = 1; i <= n; i++)
  {
    S = S + (1.0 / i);
  }
  return S;
}

void afficher_resultat(int n, double S)
{
  printf("la somme de 1 a %d sur (1/i) est : %f\n", n, S);
}

int main(void)
{
  int n;
  double S;

  saisir_nombre(&n);
  S = calculer_somme_inverses(n);
  afficher_resultat(n, S);

  return 0;
}
