/* VARIABLE 
  NOM[20]:tableau de caractère;
  PRENOM[50]:tableau de caractère ;
  i :entier; 
  S: entier;
  S1= entier;
  DEBUT 
    AFFICHER ("entrer votre nom ici ");
    POUR ( i=0,i<20,i=i+1) FAIRE 
      LIRE (NOM[i]);
      SI (i!='\0' ) FAIRE
          S=S+1;
      FINSI;
    FINPOUR 
    AFFICHER ("puis entrer votre prenom");
    POUR (i=0,i<50,i=i+1) FAIRE 
      LIRE (PRENOM[i]);
        SI (i!= '\0' ) FAIRE 
          S1=S1+1;
        FINSI
    FINPOUR 
    AFFICHER (" votre nom est  ");
    POUR (i=0,i<20,i=i+1) FAIRE 
      AFFICHER("NOM[i]");
    FINPOUR
    AFFICHER("le nombre de caractere dans vos nom est : ",S);
    AFFICHER(" et votre prenom est ");
    POUR (i=0,i<50,i=i+1) FAIRE
      AFFICHER(PRENOM[i]);
    FINPOUR
    AFFICHER(" le nombre de caractere dans vos prenom est : ",S1);
  FIN
  */
#include<stdio.h>
int main (void)
{
  char NOM[i];
  char PRENOM[I];
  int i=20;
  int I=50;
  int S=0;
  int S1=0;
  printf("entrer votre nom ");
  scanf("%s",&NOM);
  for (NOM[i=0;i<20;i++];) 
  {
    
    if (i!= '\0') 
      {
        S=S+1;
      }
  }
  printf(" puis entrer votre prenom ");
  for (PRENOM[i=0;i<50;i++];)
  {
    scanf("%s",&PRENOM);
    if (i!= '\0')
    {
      S1=S1+1;
    }
  }
  printf(" votre nom est  ");
  for (i=0;i<20;i++)  
  {
    printf("%s",NOM);
  }
  printf("le nombre de caractere dans vos nom est : %d \n",S);
  printf(" et votre prenom est ");
  for (i=0;i<50;i=i+1) 
  {  
    printf("%s",PRENOM);
  }
  printf(" le nombre de caractere dans vos prenom est :%d \n",S1);
  return (0);
}
