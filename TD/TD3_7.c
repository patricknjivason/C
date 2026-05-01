#include<stdio.h>
int main (void){
  char  T[100],x;int i,j=0,nombre_a=0,nombre_es=0;
  printf(" entrer le texte que vouss vous voulez qui se termine par un point \n");
  while ((x=getchar())!='.' && j<100){
    T[j]=x;
    j++;}
  T[j]='\0';
  for (i=0;i<j;i++){
    if (T[i]=='a' || T[i]=='A' ){
      nombre_a=nombre_a +1; }
    else if (T[i]=='e' && T[i+1]=='s'){
      nombre_es++;}
      }
    printf(" le nombre  de a est : %d ",nombre_a);
    printf(" le nombre de es est : %d ",nombre_es);
    return (0);
    }
    
