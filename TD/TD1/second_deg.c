/*=====ALGORITHME====
PROCEDURE saisir_coefficients(a,b,c: POINTEUR VERS REEL)
  DEBUT
    AFFICHER("votre equation est de la forme aX2+bX+c=0");
    AFFICHER("entrer la valeur de a"); LIRE(a);
    AFFICHER("entrer la valeur de b"); LIRE(b);
    AFFICHER("entrer la valeur de c"); LIRE(c);
  FIN PROCEDURE

PROCEDURE resoudre_premier_degre(b,c: REEL)
  DEBUT
    SI (b!=0 ET c!=0) ALORS
      AFFICHER("devient ",b,"x+",c,"=0");
      AFFICHER("la solution est x=",-c/b);
    SINON SI (b!=0 ET c==0) ALORS
      AFFICHER("la solution est x=0");
    SINON SI (b==0 ET c!=0) ALORS
      AFFICHER("l'equation n'admet pas de solution");
    SINON
      AFFICHER("l'equation admet une infinite de solutions");
    FINSI
  FIN PROCEDURE

PROCEDURE resoudre_second_degre(a,b,c: REEL)
  VARIABLE delta,x,x1,x2: REEL;
  DEBUT
    delta = (b*b)-(4*a*c);
    SI (delta>0) ALORS
      x1=(-b-RACINE(delta))/(2*a);
      x2=(-b+RACINE(delta))/(2*a);
      AFFICHER("deux solutions reelles x1=",x1," x2=",x2);
    SINON SI (delta==0) ALORS
      x=-b/(2*a);
      AFFICHER("solution double x=",x);
    SINON
      delta=RACINE(-delta);
      AFFICHER("solutions complexes X1=",-b/(2*a),"-",delta/(2*a),"i");
      AFFICHER("solutions complexes X2=",-b/(2*a),"+",delta/(2*a),"i");
    FINSI
  FIN PROCEDURE

VARIABLE
  a,b,c: REEL;
DEBUT
  saisir_coefficients(&a,&b,&c);
  SI (a==0) ALORS
    resoudre_premier_degre(b,c);
  SINON
    resoudre_second_degre(a,b,c);
  FINSI
FIN
*/
#include <math.h>
#include <stdio.h>


void saisir_coefficients(float *a, float *b, float *c)
{
  printf("votre equation est de la forme aX2+bX+c=0\n");
  printf("entrer la valeur de a\n");
  scanf("%f", a);
  printf("entrer la valeur de b\n");
  scanf("%f", b);
  printf("entrer la valeur de c\n");
  scanf("%f", c);
}

void resoudre_premier_degre(float b, float c)
{
  if (b != 0 && c != 0)
  {
    printf("devient %.0fx + %.0f = 0\n", b, c);
    printf("la solution est x = %.2f\n", -c / b);
  }
  else if (b != 0 && c == 0)
  {
    printf("la solution est x = 0\n");
  }
  else if (b == 0 && c != 0)
  {
    printf("l'equation n'admet pas de solution\n");
  }
  else
  {
    printf("l'equation admet une infinite de solutions\n");
  }
}

void resoudre_second_degre(float a, float b, float c)
{
  double delta = (double)(b * b) - (4.0 * a * c);

  if (delta > 0)
  {
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);
    printf("deux solutions reelles : x1=%.3f, x2=%.3f\n", x1, x2);
  }
  else if (delta == 0)
  {
    double x = -b / (2 * a);
    printf("solution double : x=%.3f\n", x);
  }
  else
  {
    double deltaPrime = sqrt(-delta);
    double partieReelle = -b / (2 * a);
    double partieImaginaire = deltaPrime / (2 * a);
    printf("solutions complexes : X1=%.2f - %.2fi\n", partieReelle, partieImaginaire);
    printf("solutions complexes : X2=%.2f + %.2fi\n", partieReelle, partieImaginaire);
  }
}

int main(void)
{
  float a, b, c;

  saisir_coefficients(&a, &b, &c);

  if (a == 0)
  {
    resoudre_premier_degre(b, c);
  }
  else
  {
    resoudre_second_degre(a, b, c);
  }

  return 0;
}
