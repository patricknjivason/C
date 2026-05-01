#include<stdio.h>
#include<stdlib.h>
void reception(int *cote)
{
    printf("entrer la longueur du cotés du carré");
    scanf("%d",cote);
}
void fabrication(int *cote)
{
    for (int i=0;i< *cote;i++)
    {
        for (int j=0;j< *cote;j++)
        {
            printf("* ");
        }
    printf("\n");
    }   
}
int main(void)
{
    int *cote,i,j;
    reception(cote);
    fabrication(cote);
}