/*
algorithme chaine de caractère palindrome
variable n,e,f : entier;
        b,a : reel;
        T: tableau[1..5] de caractère;
debut
    T[5]<-"maman";
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
        lire(T);
    }tantque(strlen(T)>n);
    b<-(strlen(T))/2;
    a<-round(b);
    f<-0;
    e<-0;
    tantque(e<n)
        si(T[e]=T[n-1])
            f++;
            n--;
            e++;
        sinon
            f--;
            n--;
            e++;
        finsi    
    fintantque
    si(a=f)
        afficher("Elle est palindrome");
    sinon
        afficher("Elle n est pas palindrome");
    finsi
fin    
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define c 5
int main ()
{
    int n,e,f;
    double b,a;
    char T[5]="maman";
    e=0;
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
    }while(strlen(T)>n);    
    b=((float)strlen(T))/2;
    a=round(b);
    f=0;
    e=0;
    while(e<n)
    {
        if(T[e]==T[n-1])
        {
            f++;
            n--;
            e++;
        }
        else
        {
            f--;
            n--;
            e++;
        }
    }
    if(a==f)
    {
        printf("Elle est palindrome");
    }
    else
    {
        printf("Elle n est pas palindrome");
    }
    
    return (0);
    
}
    