/*=====ALGORITHME====
PROCEDURE saisir_nombre(a: POINTEUR VERS REEL)
  DEBUT
    AFFICHER("entrer un nombre selon votre preference");
    LIRE(a);
  FIN PROCEDURE

FONCTION determiner_signe(a: REEL): CHAINE
  DEBUT
    SI (a>0) ALORS
      RETOURNER "positif";
    SINON SI (a==0) ALORS
      RETOURNER "neutre (ni positif ni negatif)";
    SINON
      RETOURNER "negatif";
    FINSI
  FIN FONCTION

PROCEDURE afficher_resultat(a: REEL, signe: CHAINE)
  DEBUT
    AFFICHER("le nombre ",a," est ",signe);
  FIN PROCEDURE

VARIABLE
  a: REEL;
DEBUT
  saisir_nombre(&a);
  afficher_resultat(a, determiner_signe(a));
FIN
*/
#include <stdio.h>


void saisir_nombre(float *a)
{
  printf("entrer un nombre selon votre preference\n");
  scanf("%f", a);
}

const char *determiner_signe(float a)
{
  if (a > 0)
  {
    return "positif";
  }
  else if (a == 0)
  {
    return "neutre (ni positif ni negatif)";
  }
  else
  {
    return "negatif";
  }
}

void afficher_resultat(float a, const char *signe)
{
  printf("le nombre %.2f est %s\n", a, signe);
}

int main(void)
{
  float a;

  saisir_nombre(&a);
  afficher_resultat(a, determiner_signe(a));

  return 0;
}
