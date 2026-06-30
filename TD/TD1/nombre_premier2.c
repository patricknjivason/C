/*=====ALGORITHME====
PROCEDURE saisir_deux_nombres(a,b: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer le premier nombre");  LIRE(a);
    AFFICHER("entrer le second nombre");   LIRE(b);
  FIN PROCEDURE

FONCTION est_premier(n: ENTIER): BOOLEEN
  VARIABLE i,R,S: ENTIER;
  DEBUT
    SI (n==0 OU n==1) ALORS
      RETOURNER FAUX;
    FINSI
    S=0;
    POUR (i=2, i<=n-1, i=i+1) FAIRE
      R=n%i;
      SI (R==0) ALORS
        S=S+1;
      FINSI
    FINPOUR
    RETOURNER (S==0);
  FIN FONCTION

PROCEDURE afficher_resultat(n: ENTIER, premier: BOOLEEN)
  DEBUT
    SI (premier) FAIRE
      AFFICHER(n," est un nombre premier ");
    SINON
      AFFICHER(n, " n'est pas premier ");
    FINSI
  FIN PROCEDURE

VARIABLE
  a,b: ENTIER;
DEBUT
  saisir_deux_nombres(&a,&b);
  // la meme fonction est_premier() est reutilisee pour les deux nombres
  afficher_resultat(a, est_premier(a));
  afficher_resultat(b, est_premier(b));
FIN
*/
#include <stdio.h>

void saisir_deux_nombres(int *a, int *b)
{
  printf("entrer le premier nombre ");
  scanf("%d", a);
  printf("entrer le second nombre ");
  scanf("%d", b);
}


int est_premier(int n)
{
  int i, R, S = 0;

  if (n == 0 || n == 1)
  {
    return 0;
  }

  for (i = 2; i <= n - 1; i++)
  {
    R = n % i;
    if (R == 0)
    {
      S = S + 1;
    }
  }
  return (S == 0);
}

void afficher_resultat(int n, int premier)
{
  if (premier)
  {
    printf("%d est un nombre premier\n", n);
  }
  else
  {
    printf("%d n'est pas premier\n", n);
  }
}

int main(void)
{
  int a, b;

  saisir_deux_nombres(&a, &b);

  /* La meme fonction est_premier() sert pour les deux nombres :
     c'est exactement le but de la factorisation en fonctions. */
  afficher_resultat(a, est_premier(a));
  afficher_resultat(b, est_premier(b));

  return 0;
}
