/*=====ALGORITHME====
PROCEDURE saisir_deux_entiers(a,b: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer la valeur de a"); LIRE(a);
    AFFICHER("entrer la valeur de b"); LIRE(b);
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

PROCEDURE afficher_pgcd(A,B,pgcd: ENTIER)
  DEBUT
    AFFICHER("le PGCD de ",A," et ",B," est :",pgcd);
  FIN PROCEDURE

VARIABLE
  A,B,resultat: ENTIER;
DEBUT
  saisir_deux_entiers(&A,&B);
  resultat = calculer_pgcd(A,B);
  afficher_pgcd(A,B,resultat);
FIN
*/
#include <stdio.h>

void saisir_deux_entiers(int *a, int *b)
{
  printf("entrer la valeur de a ");
  scanf("%d", a);
  printf("entrer la valeur de b ");
  scanf("%d", b);
}

/* Algorithme d'Euclide : calcule le PGCD sur des copies locales de a et b
   (passage par valeur) pour ne jamais modifier les variables originales
   de l'appelant */
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

void afficher_pgcd(int A, int B, int pgcd)
{
  printf("le pgcd de %d et %d est %d\n", A, B, pgcd);
}

int main(void)
{
  int A, B, resultat;

  saisir_deux_entiers(&A, &B);
  resultat = calculer_pgcd(A, B);
  afficher_pgcd(A, B, resultat);

  return 0;
}
