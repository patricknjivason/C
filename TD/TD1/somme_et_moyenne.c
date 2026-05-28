/*VARIABLE
  DEBUT
    a:reel;
    b:reel;
    s:reel;
    m:reel;
  DEBUT
    AFFICHER("entrer la premiere note");
    LIRE(a);
    AFFICHER("entrer la seconde note");
    LIRE(b);
    s=a+b;
    m=s/2;
    AFFICHER("la somme de votre note est",s);
    AFFICHER("votre moyenne est : ",m);
  FIN
  */
#include<stdio.h>
int main()
{
  float a;
  float b;
  float s;
  float m;
  printf("entrer la valeur de votre premiere note ");
  scanf("%f",&a);
  printf("entrer la valeur du second note");
  scanf("%f",&b);
  s=a+b;
  m=s/2;
  printf("la somme de votre note est :%0f\n",s);
  printf("votre moyenne est :%2f\n",m);
  return (0);
}
  
