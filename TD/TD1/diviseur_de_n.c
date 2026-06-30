/*=====ALGORITHME====
PROCEDURE saisir_nombre(n: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer la valeur que vous souhaitez savoir ses diviseurs ");
    LIRE(n);
  FIN PROCEDURE

PROCEDURE afficher_diviseurs(n: ENTIER)
  VARIABLE
    i: ENTIER;
  DEBUT
    POUR (i=1, i<=n, i=i+1) FAIRE
      SI (n%i==0) FAIRE
        AFFICHER(i);
      FINSI
    FINPOUR
  FIN PROCEDURE

VARIABLE
  n: ENTIER;
DEBUT
  saisir_nombre(&n);
  afficher_diviseurs(n);
FIN
*/
#include <stdio.h>

/* Demande à l'utilisateur le nombre dont on veut les diviseurs */
void saisir_nombre(int *n)
{
  printf("entrer la valeur que vous souhaitez savoir ses diviseurs ");
  scanf("%d", n);
}

/* Parcourt et affiche tous les diviseurs de n (1 inclus) */
void afficher_diviseurs(int n)
{
  int i;
  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      printf("%d\n", i);
    }
  }
}

int main(void)
{
  int n;

  saisir_nombre(&n);
  afficher_diviseurs(n);

  return 0;
}
