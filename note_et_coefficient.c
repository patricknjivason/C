/*VARIABLE
  a:reel;
  b:reel;
  ca:entier;
  cb:entier;
  SC:entier;
  SN:reel;
  m:reel
DEBUT
  AFFICHER("entrer le premier note ");
  LIRE(a);
  AFFICHER("entrer son coefficient ");
  LIRE(ca);
  AFFICHER("entrer la sonde note");
  LIRE(b);
  AFFICHER("entrer son coefficient ");
  LIRE(cb);
  SN=(a*ca)+(b*cb);
  SC=ca+cb;
  m=SN/SC;
  AFFICHER("votre moynne est ",m);
FIN
*/
#include<stdio.h>
int main()
{
  float a;
  float b;
  int ca;
  int cb;
  float SC;
  float SN;
  float m;
  printf("entrer le première note\n ");
  scanf("%f",&a);
  printf("entrer son coefficient\n ");
  scanf("%d",&ca);
  printf("entrer la seconde note \n");
  scanf("%f",&b);
  printf("entrer son coefficient \n");
  scanf("%d",&cb);
  SN=(a*ca)+(b*cb);
  SC=ca+cb;
  m=SN/SC;
  printf(" votre est :%f\n",m);
  return (0);
}
