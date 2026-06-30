/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer le nombre factoriel");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_factoriel(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=1;
    POUR (i=1, i<=n, i=i+1) FAIRE
      S=S*i;
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("le factoriel de ",n," est :",S);
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

void saisir_nombre(int *n)
{
  printf("entrer le nombre factoriel ");
  scanf("%d", n);
}

/* Retourne le factoriel de n. S est en double car n! grandit tres vite
   (12! depasse deja la capacite d'un int sur 32 bits). */
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
  printf("le factoriel de %d est : %.0lf\n", n, S);
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
