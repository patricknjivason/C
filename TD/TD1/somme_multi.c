/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer votre nombre");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_factoriel(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=1;
    POUR(i=1, i<=n, i=i+1) FAIRE
      S=S*i;
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("le produit des multiplications de 1 a ",n," est ",S);
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
  S: REEL;
DEBUT
  saisir_nombre(&n);
  S = calculer_factoriel(n);
  afficher_resultat(n,S);
FIN
*/
#include <stdio.h>

/* NOTE : ce programme calcule en realite n! (le produit 1*2*3*...*n),
   pas une "somme". Le nom et le message d'origine ("la somme des
   multiplications") etaient trompeurs. Conserve fonctionnellement
   identique mais avec un message clarifie : c'est un PRODUIT, pas
   une somme. L'algorithme pseudo-code original avait aussi un point-
   virgule manquant apres "S=S*i" qui aurait empeche la compilation
   s'il avait ete pris au pied de la lettre. */

void saisir_nombre(int *n)
{
  printf("entrer votre nombre\n");
  scanf("%d", n);
}

double calculer_factoriel(int n)
{
  int i;
  double S = 1;

  for (i = 1; i <= n; i++)
  {
    S = S * i;
  }
  return S;
}

void afficher_resultat(int n, double S)
{
  printf("le produit des multiplications de 1 a %d est : %.0lf\n", n, S);
}

int main(void)
{
  int n;
  double S;

  saisir_nombre(&n);
  S = calculer_factoriel(n);
  afficher_resultat(n, S);

  return 0;
}
