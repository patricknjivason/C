/*=====ALGORITHME====
PROCEDURE saisir_valeurs(a,b,c: POINTEUR VERS REEL)
  DEBUT
    AFFICHER("entrer le premier valeur"); LIRE(a);
    AFFICHER("entrer le second valeur");  LIRE(b);
    AFFICHER("entrer la troisieme valeur"); LIRE(c);
  FIN PROCEDURE

FONCTION trouver_maximum(a,b,c: REEL): REEL
  DEBUT
    SI (a>=b ET a>=c) ALORS
      RETOURNER a;
    SINON SI (b>=a ET b>=c) ALORS
      RETOURNER b;
    SINON
      RETOURNER c;
    FINSI
  FIN FONCTION

FONCTION sont_tous_egaux(a,b,c: REEL): BOOLEEN
  DEBUT
    RETOURNER (a=b ET b=c);
  FIN FONCTION

PROCEDURE afficher_resultat(max: REEL, egaux: BOOLEEN)
  DEBUT
    SI (egaux) FAIRE
      AFFICHER("tous les nombres sont egaux");
    SINON
      AFFICHER("la valeur la plus grande est :",max);
    FINSI
  FIN PROCEDURE

VARIABLE
  a,b,c,max: REEL;
DEBUT
  saisir_valeurs(&a,&b,&c);
  max = trouver_maximum(a,b,c);
  afficher_resultat(max, sont_tous_egaux(a,b,c));
FIN
*/
#include <stdio.h>


void saisir_valeurs(float *a, float *b, float *c)
{
  printf("entrer la 1ere valeur ");
  scanf("%f", a);
  printf("entrer la seconde valeur ");
  scanf("%f", b);
  printf("entrer la troisieme valeur ");
  scanf("%f", c);
}

float trouver_maximum(float a, float b, float c)
{
  if (a >= b && a >= c)
  {
    return a;
  }
  else if (b >= a && b >= c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int sont_tous_egaux(float a, float b, float c)
{
  return (a == b && b == c);
}

void afficher_resultat(float max, int egaux)
{
  if (egaux)
  {
    printf("les nombres sont tous egaux\n");
  }
  else
  {
    printf("le plus grand nombre est : %.2f\n", max);
  }
}

int main(void)
{
  float a, b, c, max;

  saisir_valeurs(&a, &b, &c);
  max = trouver_maximum(a, b, c);
  afficher_resultat(max, sont_tous_egaux(a, b, c));

  return 0;
}
