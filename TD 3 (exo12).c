/*
algorithme deduction si le carré est magique
variable a,b,d,s,n,f,e,g,c,h,j,l,m,o : entier;
        T: tableau[1..100] de chaine;
        L: tableau[1..100] de chaine;
        C: tableau[1..100] de chaine;
debut 
    afficher("entrer le nombre de ligne et colomne \n ");
    lire(n);
    a<-1;
    b<-1;
    pour(e<-0;e<(n*n);e++)
        afficher("(ligne ",a," , colomne ",b,")=  ");
        lire(T[e]);
        b++;
        si(b>3)
            b<-1;
            a++;
        finsi    
    finpour
    s<-0;
    pour(e<-0;e<n;e++)
        s<-s+T[e];
    finpour
    d<-0;
    o<-0;
    m<-n;
    pour(e<-0;e<(n*n);e++)
        pour(h<-e;h<m;h++)
            j<-j+T[h];
        finpour    
        L[o]<-j;
        o++;
        m+=n;
        si(j=s)
                d++;
                e+=(n-1);
                j<-0;
        sinon
            e+=(n-1);
            j<-0;
        finsi
    finpour        
    o<-0;
    l<-0;
    pour(e<-0;e<n;e++)
        pour(h<-0;h<n;h++)
            l<-l+T[e+(n*h)];
        finpour 
        C[o]<-l;
        o++;
        si(l=s)
                d++;
                l<-0;
        sinon
            l<-0;
        finsi
    finpour
    //*******CREATION DU CARREE***************
    f<-n-1;
    c<-n-3;
    pour(g<-0;g<(13+(4*c));g++)
        afficher("-");
    finpour
    afficher("\n");
    h<-0;
    pour(e<-0;e<(n*n);e++)
        si(((e%f)=0)et(e<>0))
            afficher("| ",T[e]," | =",L[h]," \n");
            pour(g<-0;g<(13+(4*c));g++)
                afficher("-");
            finpour
            afficher("\n");    
            f+=n;
            h++;
        sinon
            afficher("| ",T[e]," "); 
        finsi      
    finpour
    h<-0;
    afficher(" ");
    pour(h<-0;h<n;h++)
        si((C[h]>=10)et(C[h]<=99))
            printf("=%d ",C[h]);
        finsi    
        si(C[h]<10)
            printf("=%d  ",C[h]);
        finsi    
    finpour        
    //***************************************
    afficher("\n\n");
    si(d=(n*2))
        afficher("le carree est magique");
    sinon
        printf("le carrée n'est pas magique");
    finsi
fin    
*/
#include <stdio.h>
int main ()
{
    int T[100],L[100],C[100],a,b,d,s,n,f,e,g,c,h,j,l,m,o;
    printf("entrer le nombre de ligne et colomne \n ");
    scanf("%d",&n);
    a=1;
    b=1;
    for(e=0;e<(n*n);e++)
    {
        printf("(ligne %d , colomne %d)=  ",a,b);
        scanf("%d",&T[e]);
        b++;
        if(b>3)
        {
            b=1;
            a++;
        }    
    }
    s=0;
    for(e=0;e<n;e++)
    {
        s=s+T[e];
    }
    d=0;
    o=0;
    m=n;
    for(e=0;e<(n*n);e++)
    {
        for(h=e;h<m;h++)
        {
            j=j+T[h];
            
        }
        L[o]=j;
        o++;
        m+=n;
        if(j==s)
        {
                d++;
                e+=(n-1);
                j=0;
        }
        else
        {
            e+=(n-1);
            j=0;
        }
    }
    o=0;
    l=0;
    for(e=0;e<n;e++)
    {
        for(h=0;h<n;h++)
        {
            l=l+T[e+(n*h)];
        } 
        C[o]=l;
        o++;
        if(l==s)
        {
                d++;
                l=0;
        }
        else
        {
            l=0;
        }
    }
    //*******CREATION DU CARREE***************
    f=n-1;
    c=n-3;
    for(g=0;g<(13+(4*c));g++)
    {
        printf("-");
    }
    printf("\n");
    h=0;
    for(e=0;e<(n*n);e++)
    {
        if(((e%f)==0)&&(e!=0))
        {
            printf("| %d | =%d \n",T[e],L[h]);
            for(g=0;g<(13+(4*c));g++)
            {
                printf("-");
            }
            printf("\n");    
            f+=n;
            h++;
        }    
        else
        {
            printf("| %d ",T[e]); 
        }      
    }
    h=0;
    printf(" ");
    for(h=0;h<n;h++)
    {
        if((C[h]>=10)&&(C[h]<=99))
            printf("=%d ",C[h]);
        if(C[h]<10)
            printf("=%d  ",C[h]);
    }        
    //***************************************
    printf("\n\n");
    if(d==(n*2))
    {
        printf("le carree est magique");
    }
    else
    {
        printf("le carrée n'est pas magique");
    }
    return (0);
}
    