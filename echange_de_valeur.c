/*VARIABLE
  temp :entier;
  a :reel;
  b :reel;
  c :reel;
  choix:caractere
  DEBUT
    affiher("vous voulez echanger la valeur deux nombres tapez y et n si trois nombres (o/n)\n");
    lire(choix);
    SI (choix='o') FAIRE 
      afficher ("entrer donc le premier nombre");
      lire(a);
      afficher("entrer le second nombre ");
      lire(b);
      temp=a;
      a=b;
      b=temp;
      afficher(" le nombre inverser est A= "a,",B=",b);
    FINSI
    SI (choix='n') FAIRE 
      afiicher("entrer le premier nombre ");
      lire(a);
      afficher("entrer le second nombre ");
      lire(b);
      afficher("entrer le troisième nombre");
      lire(c);
      temp=a;
      a=b;
      b=c;
      c=temp;
      afficher ("voici le nombre inverser A=",a,"B="b,"C=",c);
    FINSI
  FIN
*/
#include<stdio.h>
int main()
{
  double a;
  double b;
  double c;
  char choice;
  double temp;
  printf("vous voulez échanger la valeur deux nombres tapez y et n si trois nombres (o/n)\n");
  scanf("%c",&choice);
  if (choice=='o') 
  {
    printf("entrer donc le premier nombre\n");
    scanf("%lf",&a);
    printf("entrer le second nombre \n");
    scanf("%lf",&b);
    temp=a;
    a=b;
    b=temp;
    printf(" le nombre inverser est A=%2lf,B=%2lf\n",a,b);
  }
  else if (choice=='n') 
  {
    printf("entrer le premier nombre\n ");
    scanf("%lf",&a);
    printf("entrer le second nombre \n");
    scanf("%lf",&b);
    printf("entrer le troisième nombre\n");
    scanf("%lf",&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("voici le nombre inverser A=%2lf,B=%2lf,C=%2lf\n",a,b,c);
  }
  else if (choice !='o' || choice !='n')
  {
    printf("je vous est demander de choisr pas d'entrer n'importer quoi \n");
  }
  return (0);
}
      
