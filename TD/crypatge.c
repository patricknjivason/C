#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int est_voyel( char c)
{
   char  voyel[]={"aeyuioAEYUIO"};
    return (strchr(voyel ,c) != NULL);
}
int est_consonne( char c)
{
    char consonne[]={"ZRTPQSDFGHJKLMWXCVBNzrtpqsdfghjklmwxcv"};
    return (strchr(consonne ,c) != NULL);
}

void reception()
{
    char phrase[200],resultat[400];int j=0,k=0;
    printf("enter la phrase a crypter" );
    if (fgets(phrase, sizeof(phrase),stdin) ==NULL)
    {
        return;
    }
    
    phrase[strcspn(phrase, "\n") ]='\0';
    printf(" la phrase :%s",phrase);
    while (phrase[j]!= '\0' && phrase[j+1]!='\0')
    {
        if (est_consonne(phrase[j]) && est_voyel(phrase[j+1]))
        {
            resultat[k++]=phrase[j];
            resultat[k++]='I';
            resultat[k++]='T';
            j++;
        }
        else 
        {
            resultat[k++]=phrase[j];
            j++;
        }
        resultat[k]='\0';
    }
    printf("\n la phrase crypter : %s",resultat);
}
int main(void)
{
    reception();
    return 0;
}