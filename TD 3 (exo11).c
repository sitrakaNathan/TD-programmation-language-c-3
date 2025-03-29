/*
algorithme decryptage d un chaine de caractère
variable e,f,a,n : entier;
        T: tableau[1..100] de chaine;
        Tdecrypte: tableau[1..100] de chaine;
debut
    afficher("entrer le chaine de caractère \n");
    lire(T);
    n<-strlen(T);
    pour(e<-0;e<n;e++)
        Tdecrypte[a]<-T[e];
        a++;
        si(((T[e]<>'a')et(T[e]<>'e')et(T[e]<>'i')et(T[e]<>'o')et(T[e]<>'u')<>(T[e]<>'y')et(T[e]<>'A')et(T[e]<>'E')et(T[e]<>'I')et(T[e]<>'O')et(T[e]<>'U')et(T[e]<>'Y'))et(T[e+4]<>'T')et((T[e+3]='a')ou(T[e+3]='e')ou(T[e+3]='i')ou(T[e+3]='o')ou(T[e+3]='u')ou(T[e+3]='y')ou(T[e+3]='A')ou(T[e+3]='E')ou(T[e+3]='I')ou(T[e+3]='O')ou(T[e+3]='U')ou(T[e+3]='Y')))
            e+=2;
        finsi    
    finpour
    afficher("le mot decrypte est :\n");
    afficher("",Tdecrypte);
fin    
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    int e,f,a,n;
    char T[100]="",Tdecrypte[100]="";
    printf("entrer le chaine de caractère \n");
    gets(T);
    n=strlen(T);
    for(e=0;e<n;e++)
    {
        Tdecrypte[a]=T[e];
        a++;
        if(((T[e]!='a')&&(T[e]!='e')&&(T[e]!='i')&&(T[e]!='o')&&(T[e]!='u')&&(T[e]!='y')&&(T[e]!='A')&&(T[e]!='E')&&(T[e]!='I')&&(T[e]!='O')&&(T[e]!='U')&&(T[e]!='Y'))&&(T[e+4]!='T')&&((T[e+3]=='a')|| (T[e+3]=='e')||(T[e+3]=='i')||(T[e+3]=='o')||(T[e+3]=='u')||(T[e+3]=='y')||(T[e+3]=='A')||(T[e+3]=='E')||(T[e+3]=='I')||(T[e+3]=='O')||(T[e+3]=='U')||(T[e+3]=='Y')))
        {
            e+=2;
        }
    }
    printf("le mot decrypte est :\n");
    puts(Tdecrypte);
    return (0);
}
    