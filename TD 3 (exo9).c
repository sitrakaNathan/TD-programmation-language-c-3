/*
algorithme deduction si un chaine de caractère est Un carré
variable n,e,f,a,b : entier;
        T: tableau[1..50] de chaine;
debut
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
            fin;
        finsi
        afficher("entrer le mot : \n");
        lire(T);
    tantque(strlen(T)<>n);
    b<-0;
    a<-0;  
    pour(f<-0;f<(n/2);f++)
        a<-(n/2)+f;
        si(T[f]=T[a])
            b++;
        finsi
    }
    si(b=(n/2))
        printf("la chaine est carré");
    sinon
        printf("la chaine n est pas carré");
    finsi
fin        
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    int n,e,f,a,b;
    char T[50];
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
        scanf("%s",T);
    }while(strlen(T)!=n);
    b=0;
    a=0;
    for (f=0;f<(n/2);f++)
    {
        a=(n/2)+f;
        if(T[f]==T[a])
        {
            b++;
        }
    }
    if(b==(n/2))
    {
        printf("la chaine est carré");
    }
    else
    {
        printf("la chaine n est pas carré");
    }
    return (0);
}
    