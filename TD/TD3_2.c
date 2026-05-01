#include<stdio.h>
int main(void){
int T[100],i,n,n1,pos,j,k,k1;
printf (" entrer la taille du tableau a trie");
scanf("%d",&n1);
k=1;
for (i=0;i<n1;i++)
{
  printf("entrer le nombre n°%d:",k);
  scanf("%d",&T[i]);
  k++;}
// mode de tri avec une boucle tant que

   int choice;
  printf(" quel type de trie voulez vous avant l'insertion ? \n 1-croissant\n 2-decroissant ");
  scanf("%d",&choice);
    i=0;
    for(j=i;j<n1;j++){
  printf(" entrer le nombre a inserer\n ");
  scanf("%d",&k1);
  if (T[j]==k1){
  printf(" ce nombre existe deja entre un autre nombre \n");
      }
  }
  T[n1]=k1;
  for (int i=0;i<n1;i++){
    for (int j=i+1;j<n1+1;j++){
       int reponse=0;
      if (choice==1 && T[i]>T[j]) reponse=1;
      if(choice==2 && T[i]<T[j]) reponse=1;
      if (choice !=1 && choice !=2) printf(" ERREUR: choisir entre 1 et 2");
      if(reponse){
        int temp= T[i];
        T[i]=T[j];
        T[j]=temp;}
      }
    }
printf("voici le nouveau tableau trie avec le nombres inserer:");
for (i=0;i<n1+1;i++)
{
  if (T[i]==k1){pos=i+1;}
  printf("%d,",T[i]);
} 
printf("\nla position du nombre inserer est au %d ème case \n",pos);
return (0);
  
}
