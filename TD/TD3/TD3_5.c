#include<stdio.h>
int main()
{
  float T[50],T1[25],T2[25],m,S=0;
  int i,k=1;char n;
  debut:
  printf(" entrer le nombre de matiere  ");
  scanf("%c",&n);
  getchar();
  if ((n<1 || n>22) || (n>='a' && n<='z') || (n>='A' && n<='Z')){
    goto debut;
    }
  for (i=0;i<n;i++){
    printf("entrer la note n°%d :",k);
    scanf("%f",&T[i]);
    k++;
    S=S+T[i];
    }
  m=S/n;
  printf( "la somme est %.2f ",S);
  printf("la moyenne est %.2f",m);
  int pmin=0,pmax=0;float min=0,max=20;
  for (i=0;i<n;i++){
    if (T[i]<m){
      T1[pmin]=T[i];
      pmin++;
      }
    else if(T[i]>m){
      T2[pmax]=T[i];
      pmax++;}
      }
    for (i=0;i<pmin;i++){
      if (T1[i]>min){
        min=T1[i];
        }
      }
    for (i=0;i<pmax;i++){
      if(T2[i]<max){
        max=T2[i];
        }
     }
     int p;
     for (i=0;i<n;i++){
     if (T[i]==m){
     printf(" ce note :%f est equivaut a votre moyenne",T[i]);
     p=i+1;
     printf("sa position est au %d eme ",p);}
     else if(T[i]!=m){
    int choix,p1,p2;
    printf(" vous la valeur la plus proche \n 1-gauche \n 2-droite\n 3-les deuux");
    scanf("%d",&choix);
     for (i=0;i<n;i++){
        if (T[i]==min){
          p1=i+1;}
        else if (T[i]==max){
          p2=i+1;}
        }
    if(choix==1){
      printf(" la valeur la plus proche de la moyenne est : %.2f\n",min);
      printf(" sa position dans votre liste de note est :%d eme\n",p1);
      }
    else if (choix==2){
      printf(" la valeur la plus proche de la moyenne est : %.2f\n",max);
        printf(" sa position dans votre liste de note est :%d eme\n",p2);
      }
    else if (choix ==3){
      printf(" la moyenne est comprise entre %.2f et %.2f",min,max);
      printf(" leur position est :%d et %d",p1,p2);
      }
    return (0);
      }
    }
}
