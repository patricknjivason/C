/*=====ALGORITHME====
PROCEDURE saisir_choix(choix: POINTEUR VERS CARACTERE)
  DEBUT
    AFFICHER("vous voulez echanger deux nombres (o) ou trois nombres (n) ? ");
    LIRE(choix);
  FIN PROCEDURE

PROCEDURE saisir_deux(a,b: POINTEUR VERS REEL)
  DEBUT
    AFFICHER("entrer le premier nombre"); LIRE(a);
    AFFICHER("entrer le second nombre");  LIRE(b);
  FIN PROCEDURE

PROCEDURE saisir_trois(a,b,c: POINTEUR VERS REEL)
  DEBUT
    AFFICHER("entrer le premier nombre");   LIRE(a);
    AFFICHER("entrer le second nombre");    LIRE(b);
    AFFICHER("entrer le troisieme nombre"); LIRE(c);
  FIN PROCEDURE

PROCEDURE echanger_deux(a,b: POINTEUR VERS REEL)
  VARIABLE temp: REEL;
  DEBUT
    temp=a; a=b; b=temp;
  FIN PROCEDURE

PROCEDURE echanger_trois(a,b,c: POINTEUR VERS REEL)
  VARIABLE temp: REEL;
  DEBUT
    temp=a; a=b; b=c; c=temp;
  FIN PROCEDURE

PROCEDURE afficher_deux(a,b: REEL)
  DEBUT
    AFFICHER("le nombre inverse est A=",a,",B=",b);
  FIN PROCEDURE

PROCEDURE afficher_trois(a,b,c: REEL)
  DEBUT
    AFFICHER("voici le nombre inverse A=",a,"B=",b,"C=",c);
  FIN PROCEDURE

VARIABLE
  a,b,c: REEL;
  choix: CARACTERE;
DEBUT
  saisir_choix(&choix);
  SI (choix='o') FAIRE
    saisir_deux(&a,&b);
    echanger_deux(&a,&b);
    afficher_deux(a,b);
  SINON SI (choix='n') FAIRE
    saisir_trois(&a,&b,&c);
    echanger_trois(&a,&b,&c);
    afficher_trois(a,b,c);
  SINON
    AFFICHER("choix invalide");
  FINSI
FIN
*/
#include <stdio.h>


void saisir_choix(char *choix)
{
  printf("vous voulez echanger deux nombres (o) ou trois nombres (n) ? (o/n)\n");
  scanf(" %c", choix);
}

void saisir_deux(double *a, double *b)
{
  printf("entrer le premier nombre\n");
  scanf("%lf", a);
  printf("entrer le second nombre\n");
  scanf("%lf", b);
}

void saisir_trois(double *a, double *b, double *c)
{
  printf("entrer le premier nombre\n");
  scanf("%lf", a);
  printf("entrer le second nombre\n");
  scanf("%lf", b);
  printf("entrer le troisieme nombre\n");
  scanf("%lf", c);
}

void echanger_deux(double *a, double *b)
{
  double temp = *a;
  *a = *b;
  *b = temp;
}

void echanger_trois(double *a, double *b, double *c)
{
  double temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
}

void afficher_deux(double a, double b)
{
  printf("le nombre inverse est A=%.2lf, B=%.2lf\n", a, b);
}

void afficher_trois(double a, double b, double c)
{
  printf("voici le nombre inverse A=%.2lf, B=%.2lf, C=%.2lf\n", a, b, c);
}

int main(void)
{
  double a, b, c;
  char choix;

  saisir_choix(&choix);

  if (choix == 'o')
  {
    saisir_deux(&a, &b);
    echanger_deux(&a, &b);
    afficher_deux(a, b);
  }
  else if (choix == 'n')
  {
    saisir_trois(&a, &b, &c);
    echanger_trois(&a, &b, &c);
    afficher_trois(a, b, c);
  }
  else
  {
    printf("je vous ai demande de choisir, pas d'entrer n'importe quoi\n");
  }

  return 0;
}
