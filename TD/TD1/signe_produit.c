/*=====ALGORITHME====
PROCEDURE saisir_deux_entiers(a,b: POINTEUR VERS ENTIER)
  DEBUT
    AFFICHER("entrer le premier nombre");  LIRE(a);
    AFFICHER("entrer le deuxieme nombre"); LIRE(b);
  FIN PROCEDURE

FONCTION determiner_signe_produit(a,b: ENTIER): CHAINE
  DEBUT
    SI ((a>0 ET b>0) OU (a<0 ET b<0)) ALORS
      RETOURNER "positif";
    SINON SI ((a>0 ET b<0) OU (a<0 ET b>0)) ALORS
      RETOURNER "negatif";
    SINON
      RETOURNER "nul (l'un des deux nombres est zero)";
    FINSI
  FIN FONCTION

PROCEDURE afficher_resultat(signe: CHAINE)
  DEBUT
    AFFICHER("leur produit est ",signe);
  FIN PROCEDURE

VARIABLE
  a,b: ENTIER;
DEBUT
  saisir_deux_entiers(&a,&b);
  afficher_resultat(determiner_signe_produit(a,b));
FIN
*/
#include <stdio.h>



void saisir_deux_entiers(int *a, int *b)
{
  printf("entrer le premier nombre ");
  scanf("%d", a);
  printf("entrer le deuxieme nombre ");
  scanf("%d", b);
}

const char *determiner_signe_produit(int a, int b)
{
  if ((a > 0 && b > 0) || (a < 0 && b < 0))
  {
    return "positif";
  }
  else if ((a > 0 && b < 0) || (a < 0 && b > 0))
  {
    return "negatif";
  }
  else
  {
    return "nul (l'un des deux nombres est zero)";
  }
}

void afficher_resultat(const char *signe)
{
  printf("leur produit est %s\n", signe);
}

int main(void)
{
  int a, b;

  saisir_deux_entiers(&a, &b);
  afficher_resultat(determiner_signe_produit(a, b));

  return 0;
}
