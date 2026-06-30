/*=====ALGORITHME====
PROCEDURE saisir_note(note: POINTEUR VERS REEL, rang: CHAINE)
  DEBUT
    AFFICHER("entrer la ",rang," note");
    LIRE(note);
  FIN PROCEDURE

FONCTION calculer_somme(a,b: REEL): REEL
  DEBUT
    RETOURNER a+b;
  FIN FONCTION

FONCTION calculer_moyenne(s: REEL): REEL
  DEBUT
    RETOURNER s/2;
  FIN FONCTION

PROCEDURE afficher_resultat(s,m: REEL)
  DEBUT
    AFFICHER("la somme de vos notes est ",s);
    AFFICHER("votre moyenne est : ",m);
  FIN PROCEDURE

VARIABLE
  a,b,s,m: REEL;
DEBUT
  saisir_note(&a,"premiere");
  saisir_note(&b,"seconde");
  s = calculer_somme(a,b);
  m = calculer_moyenne(s);
  afficher_resultat(s,m);
FIN
*/
#include <stdio.h>

void saisir_note(float *note, const char *rang)
{
  printf("entrer la %s note\n", rang);
  scanf("%f", note);
}

float calculer_somme(float a, float b)
{
  return a + b;
}

float calculer_moyenne(float s)
{
  return s / 2;
}

void afficher_resultat(float s, float m)
{
  printf("la somme de vos notes est : %.2f\n", s);
  printf("votre moyenne est : %.2f\n", m);
}

int main(void)
{
  float a, b, s, m;

  saisir_note(&a, "premiere");
  saisir_note(&b, "seconde");

  s = calculer_somme(a, b);
  m = calculer_moyenne(s);

  afficher_resultat(s, m);

  return 0;
}
