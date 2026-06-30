/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer un nombre quelconque");
    LIRE(n);
  FIN PROCEDURE

FONCTION calculer_factoriel(k: ENTIER): REEL
  VARIABLE j: ENTIER; F: REEL;
  DEBUT
    F=1;
    POUR(j=1, j<=k, j=j+1) FAIRE
      F=F*j;
    FINPOUR
    RETOURNER F;
  FIN FONCTION

FONCTION calculer_somme_factorielles(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=0;
    POUR(i=1, i<=n, i=i+1) FAIRE
      S=S+calculer_factoriel(i);
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("la somme de 1! a ",n,"! est :",S);
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
  S: REEL;
DEBUT
  saisir_nombre(&n);
  S = calculer_somme_factorielles(n);
  afficher_resultat(n,S);
FIN
*/
#include <stdio.h>

/* BOGUE CORRIGE : le programme original utilisait UNE SEULE variable
   S1 partagee entre toutes les iterations de la boucle externe, sans
   jamais la reinitialiser a 1 entre chaque i. Resultat : a i=2, S1
   continuait a partir de sa valeur precedente (deja egale a 1!) au
   lieu de redemarrer a 1 pour calculer 2! proprement. La somme
   obtenue n'etait donc PAS 1!+2!+3!+...+n! mais quelque chose de
   completement different et incorrect.
   La correction separe clairement le calcul du factoriel d'un seul
   nombre (calculer_factoriel) du calcul de la somme (qui l'appelle
   n fois, avec a chaque fois un compteur F propre et reinitialise). */

void saisir_nombre(int *n)
{
  printf("entrer un nombre quelconque\n");
  scanf("%d", n);
}

/* Calcule k! avec une variable F propre a chaque appel : pas de fuite
   d'etat entre deux calculs successifs, contrairement au bogue original. */
double calculer_factoriel(int k)
{
  int j;
  double F = 1;

  for (j = 1; j <= k; j++)
  {
    F = F * j;
  }
  return F;
}

double calculer_somme_factorielles(int n)
{
  int i;
  double S = 0;

  for (i = 1; i <= n; i++)
  {
    S = S + calculer_factoriel(i);
  }
  return S;
}

void afficher_resultat(int n, double S)
{
  printf("la somme de 1! a %d! est : %lf\n", n, S);
}

int main(void)
{
  int n;
  double S;

  saisir_nombre(&n);
  S = calculer_somme_factorielles(n);
  afficher_resultat(n, S);

  return 0;
}
