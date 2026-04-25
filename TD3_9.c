#include<stdio.h>
int main()
{
  char T[100],x;
  int i=0,j,c_vrai=0; 
  printf("  entrer le mot que vous souhaitez moins de 100 caractère ");
  while ((x=getchar())!='\n'&& i<100){
    T[i]=x;i++;}
    T[i]='\0';
  printf(" le mot est %s \n",T);
  if (i%2==0){
  for (j=0;j<(i/2);j++){
    if (T[j]==T[((i/2)+j)]){
      c_vrai=c_vrai ;}
    else c_vrai++;
  }
  if (c_vrai==0) printf(" le caractère %s est  carré ",T);
  else if (c_vrai!=0) printf(" le caractère %s n' est pas carrè ",T);
  }
  else printf(" le caractère %s n' est pas carrè ",T);
  printf("\n");
  return (0);
}
