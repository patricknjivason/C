#include<stdio.h>
int main (void){
  char nom[100],x;
  int n_cara=0,n_espace=0;
  printf( " entrer votre nom et prenom ici ");
  while ((x =getchar())!='\n' && n_cara< 100){
    nom[n_cara]=x;n_cara++;
    if(x ==' ') n_espace++;}
  int nbr_exacte;nbr_exacte=n_cara-n_espace;
  nom[n_cara]='\0';
  //affichage de methode apres avoir mis '\O'
  printf(" votre nom et  prenom est :%s \n",nom);
  /* affichage de methode avec pour
  for (int i=0;i<n_cara;i++){
    putchar(nom[i]);}*/
  printf(" le nombre de caractere de votre nom et prenom est : %d \n",nbr_exacte);int n;
  printf(" entrer le nombre de votre matiere :");
  scanf("%d",&n);
  char matiere[n][40];
  float note[n];
  int coe[n];
  for (int i=0;i<n;i++){
    printf(" entrer la matiere :");
    scanf("%s",matiere[i]);
    printf(" entrer la note %s :",matiere[i]);
    scanf("%f",&note[i]);
    printf("entrer sa coefficient");
    scanf("%d",&coe[i]);}
  //triage selon choix
  printf(" on est au triage! que choisissez vous ?\n 1- croissant \n 2-decoissant");
  int choix;
  scanf("%d",&choix);
  for (int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++){
       int reponse=0;
      if (choix==1 && note[i]>note[j]) reponse=1;
      if(choix==2 && note[i]<note[j]) reponse=1;
      
      if(reponse){
        int temp_note= note[i];
        note[i]=note[j];
        note[j]=temp_note;
        // triage du chaine de matiere 
      for (int k=0;k<40;k++){
        int temp_mat=matiere[i][k];
        matiere[i][k]=matiere[j][k];
        matiere[j][k]=temp_mat;
        if (matiere[i][k]=='\0' && matiere[i][k]=='\0')break;
          }
        }
      }
    }
  float note_coe[n],moyenne;
  int somme=0,somme_coe=0;
  for (int i=0;i<n;i++){
    note_coe[i]=note[i]*coe[i];}
  for (int i=0;i<n;i++){
    somme_coe=somme_coe+coe[i];
    somme=somme+note_coe[i];}
  moyenne=somme/somme_coe;
  for (int i=0;i<n;i++){
    printf("%s (%d): %.2f\n",matiere[i],coe[i],note_coe[i]);}
  printf(" votre moyenne est : %f\n",moyenne);
  return (0);
  }
  
