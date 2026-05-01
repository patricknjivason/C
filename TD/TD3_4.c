#include<stdio.h>
int main(void){
  int T1[100],T2[50],i,j,n,n1,k;
  printf(" enter le nombre du tableau n°1:\n entre 2 et 100 ");
  scanf("%d",&n);
  if(n<2 || n>100){
    printf(" entrer un nombre entre le information indique\n");
    }
    else{
  int k=1;
  for(i=0;i<n;i++){
    printf("entrer la case n°%d :",k);
    scanf("%d",&T1[i]);
    k++;
    }
  printf("entrer le nombre tableau n°2 : \n entre 1 et 50 ");
  scanf("%d",&n1);
  if (n1<1 || n1>50){
    printf("entrer un nombre entre les information indiques \n");
    }
  else{int k=1;
    for (i=0;i<n1;i++){
      printf(" enter la case n°%d :",k);
      scanf("%d",&T2[i]);
      k++;
      }
    for(i=0;i<n;i++){
      if (T1[i]==T2[i]){
        printf(" il y a des element dans T2 qui existe dans T1\n");
        printf(" ce sont : %d,",T1[i]);
        printf("\n");
          }
        }
        i=0;
        while(i<n){
          if(T1[i]==T2[i]){
          for (j=i;j<n;j++){
            T1[j]=T1[j+1];
              }
            n=n-1;
          }
          else i++;
          }
        printf(" le resultat finale du tableau T1 :");
        for(i=0;i<n;i++){
          printf("%d",T1[i]);
          printf("\n");
         return(0);
        }
      }
    }
  }
       
        
  
    

