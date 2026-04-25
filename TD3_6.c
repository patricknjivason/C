#include<stdio.h>
int main (void){
  char T[100];int i,j=0,x,p=0;
  printf("entrer votre nombre ou letre ou les deux :");
  while((x=getchar())!='\n'&& j<100){
    T[j]=x;
    j++;}
    T[j]='\0';
  for (i=0;i<j;i++){
    if (T[i]==T[j-i-1]){
      i++;p=p;
      }
    else p=p+1;}
    if (p==0) printf(" \nil est palindrome \n");
    else printf(" il n' est pas palindrome ");
    return (0);
  }
