/*=====ALGORITHME====
PROCEDURE saisir_chaine(tab: TABLEAU DE CARACTERE, message: CHAINE)
  DEBUT
    AFFICHER(message);
    LIRE(tab);
  FIN PROCEDURE

FONCTION compter_caracteres(tab: TABLEAU DE CARACTERE): ENTIER
  VARIABLE i,S: ENTIER;
  DEBUT
    S=0;
    i=0;
    TANT QUE (tab[i] != '\0') FAIRE
      S=S+1;
      i=i+1;
    FINTANTQUE
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_chaine(tab: TABLEAU DE CARACTERE)
  DEBUT
    AFFICHER(tab);
  FIN PROCEDURE

PROCEDURE afficher_resultat(nom: TABLEAU DE CARACTERE, sNom: ENTIER,
                            prenom: TABLEAU DE CARACTERE, sPrenom: ENTIER)
  DEBUT
    AFFICHER("votre nom est "); afficher_chaine(nom);
    AFFICHER("le nombre de caracteres dans votre nom est : ",sNom);
    AFFICHER("votre prenom est "); afficher_chaine(prenom);
    AFFICHER("le nombre de caracteres dans votre prenom est : ",sPrenom);
  FIN PROCEDURE

VARIABLE
  NOM[20], PRENOM[50]: TABLEAU DE CARACTERE;
  S, S1: ENTIER;
DEBUT
  saisir_chaine(NOM, "entrer votre nom ici ");
  saisir_chaine(PRENOM, "puis entrer votre prenom ");
  S  = compter_caracteres(NOM);
  S1 = compter_caracteres(PRENOM);
  afficher_resultat(NOM,S,PRENOM,S1);
FIN
*/
#include <stdio.h>


void saisir_chaine(char *tab, int taille_max, const char *message)
{
  printf("%s", message);
  scanf("%19s", tab);          /* limite de securite, voir compter_caracteres */
  (void)taille_max;            /* parametre garde pour la lisibilite de l'appel */
}

int compter_caracteres(const char *tab)
{
  int i = 0;
  int S = 0;

  while (tab[i] != '\0')
  {
    S = S + 1;
    i = i + 1;
  }
  return S;
}

void afficher_chaine(const char *tab)
{
  printf("%s", tab);
}

void afficher_resultat(const char *nom, int sNom, const char *prenom, int sPrenom)
{
  printf("votre nom est ");
  afficher_chaine(nom);
  printf("\nle nombre de caracteres dans votre nom est : %d\n", sNom);

  printf("votre prenom est ");
  afficher_chaine(prenom);
  printf("\nle nombre de caracteres dans votre prenom est : %d\n", sPrenom);
}

int main(void)
{
  char NOM[20];
  char PRENOM[50];
  int S, S1;

  saisir_chaine(NOM, sizeof(NOM), "entrer votre nom ici ");
  saisir_chaine(PRENOM, sizeof(PRENOM), "puis entrer votre prenom ");

  S  = compter_caracteres(NOM);
  S1 = compter_caracteres(PRENOM);

  afficher_resultat(NOM, S, PRENOM, S1);

  return 0;
}
