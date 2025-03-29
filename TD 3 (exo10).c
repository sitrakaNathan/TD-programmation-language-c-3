/*
algorithme cryptage d un chaine de caractère
variable e,f,a,n : entier;
        T: tableau[1..100] de chaine;
        Tcrypte: tableau[1..100] de chaine;
debut
    afficher("entrer le chaine de caractère \n");
    lire(T);
    n<-strlen(T);
    pour(e<-0;e<n;e++)
        Tcrypte[a]<-T[e];
        a++;
        si(((T[e]<>'a')et(T[e]<>'e')et(T[e]<>'i')et(T[e]<>'o')et(T[e]<>'u')et(T[e]<>'y')et(T[e]<>'A')et(T[e]<>'E')et(T[e]<>'I')et(T[e]<>'O')et(T[e]<>'U')et(T[e]<>'Y'))et(T[e]<>' ')et((T[e+1]='a')ou(T[e+1]='e')ou(T[e+1]='i')ou(T[e+1]='o')ou(T[e+1]='u')ou(T[e+1]='y')ou(T[e+1]='A')ou(T[e+1]='E')ou(T[e+1]='I')ou(T[e+1]='O')ou(T[e+1]='U')ou(T[e+1]='Y')))
            Tcrypte[a]<-'I';
            a++;
            Tcrypte[a]<-'T';
            a++;
        finsi
    finpour
    afficher("le mot crypte est :\n");
    afficher("",Tcrypte);
fin    
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    int e,f,a,n;
    char T[100]="",Tcrypte[100]="";
    printf("entrer le chaine de caractère \n");
    gets(T);
    n=strlen(T);
    for(e=0;e<n;e++)
    {
        Tcrypte[a]=T[e];
        a++;
        if(((T[e]!='a')&&(T[e]!='e')&&(T[e]!='i')&&(T[e]!='o')&&(T[e]!='u')&&(T[e]!='y')&&(T[e]!='A')&&(T[e]!='E')&&(T[e]!='I')&&(T[e]!='O')&&(T[e]!='U')&&(T[e]!='Y'))&&(T[e]!=' ')&&((T[e+1]=='a')||(T[e+1]=='e')||(T[e+1]=='i')||(T[e+1]=='o')||(T[e+1]=='u')||(T[e+1]=='y')||(T[e+1]=='A')||(T[e+1]=='E')||(T[e+1]=='I')||(T[e+1]=='O')||(T[e+1]=='U')||(T[e+1]=='Y')))
        {
            Tcrypte[a]='I';
            a++;
            Tcrypte[a]='T';
            a++;
        }
    }
    printf("le mot crypte est :\n");
    puts(Tcrypte);
    return (0);
}
    