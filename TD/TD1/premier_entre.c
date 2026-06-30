/*=====ALGORITHME====
PROCEDURE saisir_deux_entiers(a,b: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer le premier nombre");  LIRE(a);
    AFFICHER("entrer le second nombre");   LIRE(b);
  FIN PROCEDURE

FONCTION calculer_pgcd(a,b: ENTIER): ENTIER
  VARIABLE r: ENTIER;
  DEBUT
    TANT QUE (b!=0) FAIRE
      r=a%b;
      a=b;
      b=r;
    FINTANTQUE
    RETOURNER a;
  FIN FONCTION

FONCTION sont_premiers_entre_eux(a,b: ENTIER): BOOLEEN
  DEBUT
    RETOURNER (calculer_pgcd(a,b)==1);
  FIN FONCTION

PROCEDURE afficher_resultat(premiers: BOOLEEN)
  DEBUT
    SI (premiers) FAIRE
      AFFICHER("les deux nombres sont premiers entre eux");
    SINON
      AFFICHER("les deux nombres ne sont pas premiers entre eux");
    FINSI
  FIN PROCEDURE

VARIABLE
  A,B: ENTIER;
DEBUT
  saisir_deux_entiers(&A,&B);
  afficher_resultat(sont_premiers_entre_eux(A,B));
FIN
*/
#include <stdio.h>

void saisir_deux_entiers(int *a, int *b)
{
  printf("entrer le premier nombre ");
  scanf("%d", a);
  printf("entrer le second nombre ");
  scanf("%d", b);
}

/* Identique au calcul utilise dans pgcd.c : deux nombres sont premiers
   entre eux si et seulement si leur PGCD vaut exactement 1. */
int calculer_pgcd(int a, int b)
{
  int r;

  while (b != 0)
  {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int sont_premiers_entre_eux(int a, int b)
{
  return (calculer_pgcd(a, b) == 1);
}

void afficher_resultat(int premiers)
{
  if (premiers)
  {
    printf("les deux nombres sont premiers entre eux\n");
  }
  else
  {
    printf("les deux nombres ne sont pas premiers entre eux\n");
  }
}

int main(void)
{
  int A, B;

  saisir_deux_entiers(&A, &B);
  afficher_resultat(sont_premiers_entre_eux(A, B));

  return 0;
}
