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

FONCTION calculer_somme_inverses_factorielles(n: ENTIER): REEL
  VARIABLE i: ENTIER; S: REEL;
  DEBUT
    S=0;
    POUR(i=1, i<=n, i=i+1) FAIRE
      S=S+(1.0/calculer_factoriel(i));
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, S: REEL)
  DEBUT
    AFFICHER("la somme de 1/1! a 1/",n,"! est :",S);
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
  S: REEL;
DEBUT
  saisir_nombre(&n);
  S = calculer_somme_inverses_factorielles(n);
  afficher_resultat(n,S);
FIN
*/
#include <stdio.h>

/* BOGUES CORRIGES (memes causes que somme_de_factoriel.c) :
   1) La variable S1 du programme original n'etait jamais reinitialisee
      a 1 entre chaque iteration de la boucle externe i : chaque calcul
      de factoriel "heritait" du resultat du precedent au lieu de
      redemarrer proprement, faussant completement le resultat.
   2) "S1=S*j;" (au lieu de "S1=S1*j;") dans le commentaire pseudo-code
      original melangeait l'accumulateur de somme S avec l'accumulateur
      de factoriel S1 — confusion typique quand on essaie de tout faire
      avec une seule boucle imbriquee sans separer les responsabilites.
   La encore, separer clairement calculer_factoriel() (calcul isole,
   propre, reutilisable) de calculer_somme_inverses_factorielles()
   (qui l'appelle n fois) elimine ces deux bogues d'un coup. */

void saisir_nombre(int *n)
{
  printf("entrer un nombre quelconque\n");
  scanf("%d", n);
}

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

double calculer_somme_inverses_factorielles(int n)
{
  int i;
  double S = 0;

  for (i = 1; i <= n; i++)
  {
    S = S + (1.0 / calculer_factoriel(i));
  }
  return S;
}

void afficher_resultat(int n, double S)
{
  printf("la somme de 1/1! a 1/%d! est : %lf\n", n, S);
}

int main(void)
{
  int n;
  double S;

  saisir_nombre(&n);
  S = calculer_somme_inverses_factorielles(n);
  afficher_resultat(n, S);

  return 0;
}
