/*
algorithme compteur du caractère 'a' et du suite de caractère 'es'
variable n,e,f,a,es : entier;
        T : tableau [1..50] de chaine;
debut
    e<-0;
    faire
    
        e++;
        si(e>3)
            fin;
        finsi
        afficher("entrer le nombre de caractère \n");
        lire(n);
    tantque((n<1)ou(n>50));
    e<-0;
    faire
    {
        e++;
        si(e>3)
            exit(0);
        finsi
        afficher("entrer le mot : \n");
        lite(T);
    }tantque(strlen(T)>n); 
    afficher("le mot est",T);  
    a<-0;
    es<-0;
    pour (f<-0;f<n;f++)
        si(T[f]='a')
            a++;
        finsi
        si((T[f]='e')&&(T[f+1]='s'))
            es++;
        finsi
    finpour
    printf("le nombre de lettre a est ",a," et Le nombre de suite de lettre 'es' est ",es);
fin             
*/
#include <stdio.h>
#include <string.h>
#define c 50
int main ()
{
    int n,e,f,a,es;
    char T[c];
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le nombre de caractère \n");
        scanf("%d",&n);
    }while((n<1)||(n>50));
    e=0;
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le mot : \n");
        scanf("%s",&T);
    }while(strlen(T)>n);
    printf("le mot est %s . ",T);  
    a=0;
    es=0;
    for (f=0;f<n;f++)
    {
        if(T[f]=='a')
        {
            a++;
        }
        if((T[f]=='e')&&(T[f+1]=='s'))
        {
            es++;
        }
    }
    printf("le nombre de lettre a est %d et Le nombre de suite de lettre 'es' est %d",a,es);
    return (0);
    
}
    