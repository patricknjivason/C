/*=====ALGORITHME====
PROCEDURE saisir_note_coefficient(note: POINTEUR VERS REEL, coef: POINTEUR VERS ENTIER, rang: CHAINE)
  DEBUT
    AFFICHER("entrer la note ",rang); LIRE(note);
    AFFICHER("entrer son coefficient"); LIRE(coef);
  FIN PROCEDURE

FONCTION calculer_moyenne(a: REEL, ca: ENTIER, b: REEL, cb: ENTIER): REEL
  VARIABLE SN,SC: REEL;
  DEBUT
    SN = (a*ca)+(b*cb);
    SC = ca+cb;
    RETOURNER SN/SC;
  FIN FONCTION

PROCEDURE afficher_moyenne(m: REEL)
  DEBUT
    AFFICHER("votre moyenne est ",m);
  FIN PROCEDURE

VARIABLE
  a,b,m: REEL;
  ca,cb: ENTIER;
DEBUT
  saisir_note_coefficient(&a,&ca,"première");
  saisir_note_coefficient(&b,&cb,"seconde");
  m = calculer_moyenne(a,ca,b,cb);
  afficher_moyenne(m);
FIN
*/
#include <stdio.h>

void saisir_note_coefficient(float *note, int *coef, const char *rang)
{
  printf("entrer la %s note\n", rang);
  scanf("%f", note);
  printf("entrer son coefficient\n");
  scanf("%d", coef);
}

float calculer_moyenne(float a, int ca, float b, int cb)
{
  float SN = (a * ca) + (b * cb);
  float SC = (float)(ca + cb);
  return SN / SC;
}

void afficher_moyenne(float m)
{
  printf("votre moyenne est : %.2f\n", m);
}

int main(void)
{
  float a, b, m;
  int ca, cb;

  saisir_note_coefficient(&a, &ca, "premiere");
  saisir_note_coefficient(&b, &cb, "seconde");

  m = calculer_moyenne(a, ca, b, cb);
  afficher_moyenne(m);

  return 0;
}
