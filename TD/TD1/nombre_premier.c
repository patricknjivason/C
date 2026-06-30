/*=====ALGORITHME====
PROCEDURE saisir_nombre(a: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer un nombre que vous souhaitez");
    LIRE(a);
  FIN PROCEDURE

FONCTION est_premier(a: ENTIER): BOOLEEN
  VARIABLE i,R,S: ENTIER;
  DEBUT
    SI (a==0 OU a==1) ALORS
      RETOURNER FAUX;
    FINSI
    S=0;
    POUR (i=2, i<=a-1, i=i+1) FAIRE
      R=a%i;
      SI (R==0) ALORS
        S=S+1;
      FINSI
    FINPOUR
    RETOURNER (S==0);
  FIN FONCTION

PROCEDURE afficher_resultat(a: ENTIER, premier: BOOLEEN)
  DEBUT
    SI (premier) FAIRE
      AFFICHER(a," est un nombre premier ");
    SINON
      AFFICHER(a, " n'est pas premier ");
    FINSI
  FIN PROCEDURE

VARIABLE
  a: ENTIER;
DEBUT
  saisir_nombre(&a);
  afficher_resultat(a, est_premier(a));
FIN
*/
#include <stdio.h>

void saisir_nombre(int *a)
{
  printf("entrer un nombre que vous voulez ");
  scanf("%d", a);
}


int est_premier(int a)
{
  int i, R, S = 0;

  if (a == 0 || a == 1)
  {
    return 0;
  }

  for (i = 2; i <= a - 1; i++)
  {
    R = a % i;
    if (R == 0)
    {
      S = S + 1;
    }
  }
  return (S == 0);
}

void afficher_resultat(int a, int premier)
{
  if (premier)
  {
    printf("%d est un nombre premier\n", a);
  }
  else
  {
    printf("%d n'est pas premier\n", a);
  }
}

int main(void)
{
  int a;

  saisir_nombre(&a);
  afficher_resultat(a, est_premier(a));

  return 0;
}
