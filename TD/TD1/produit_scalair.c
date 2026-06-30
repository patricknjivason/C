/*=====ALGORITHME====
FONCTION saisir_dimension(): ENTIER
  VARIABLE n: ENTIER;
  DEBUT
    AFFICHER("entrer la dimension des vecteurs (meme taille pour les deux)");
    LIRE(n);
    RETOURNER n;
  FIN FONCTION

PROCEDURE saisir_vecteur(tab: TABLEAU D'ENTIER, n: ENTIER, message: CHAINE)
  VARIABLE i: ENTIER;
  DEBUT
    AFFICHER(message);
    POUR (i=0, i<n, i=i+1) FAIRE
      LIRE(tab[i]);
    FINPOUR
  FIN PROCEDURE

FONCTION calculer_produit_scalaire(A,B: TABLEAU D'ENTIER, n: ENTIER): ENTIER
  VARIABLE i,S: ENTIER;
  DEBUT
    S=0;
    POUR (i=0, i<n, i=i+1) FAIRE
      S = S + (A[i]*B[i]);
    FINPOUR
    RETOURNER S;
  FIN FONCTION

PROCEDURE afficher_resultat(S: ENTIER)
  DEBUT
    AFFICHER("le produit scalaire est ",S);
    SI (S==0) ALORS
      AFFICHER("les deux vecteurs sont perpendiculaires");
    SINON SI (S>0) ALORS
      AFFICHER("les deux vecteurs forment un angle aigu");
    SINON
      AFFICHER("les deux vecteurs forment un angle obtus");
    FINSI
  FIN PROCEDURE

VARIABLE
  A[10],B[10]: TABLEAU D'ENTIER;
  n,S: ENTIER;
DEBUT
  AFFICHER("NB: les deux vecteurs doivent avoir la meme dimension");
  n = saisir_dimension();
  saisir_vecteur(A,n,"entrer les composantes du premier vecteur");
  saisir_vecteur(B,n,"entrer les composantes du second vecteur");
  S = calculer_produit_scalaire(A,B,n);
  afficher_resultat(S);
FIN
*/
#include <stdio.h>



int saisir_dimension(void)
{
  int n;
  printf("entrer la dimension des vecteurs (meme taille pour les deux) ");
  scanf("%d", &n);
  return n;
}

void saisir_vecteur(int *tab, int n, const char *message)
{
  int i;
  printf("%s\n", message);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &tab[i]);
  }
}

int calculer_produit_scalaire(const int *A, const int *B, int n)
{
  int i, S = 0;
  for (i = 0; i < n; i++)
  {
    S = S + (A[i] * B[i]);
  }
  return S;
}

void afficher_resultat(int S)
{
  printf("le produit scalaire est %d\n", S);

  if (S == 0)
  {
    printf("les deux vecteurs sont perpendiculaires\n");
  }
  else if (S > 0)
  {
    printf("les deux vecteurs forment un angle aigu\n");
  }
  else
  {
    printf("les deux vecteurs forment un angle obtus\n");
  }
}

int main(void)
{
  int A[10], B[10];
  int n, S;

  printf("NB: les deux vecteurs doivent avoir la meme dimension\n");
  n = saisir_dimension();

  saisir_vecteur(A, n, "entrer les composantes du premier vecteur");
  saisir_vecteur(B, n, "entrer les composantes du second vecteur");

  S = calculer_produit_scalaire(A, B, n);
  afficher_resultat(S);

  return 0;
}
