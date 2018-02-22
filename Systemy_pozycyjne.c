#include <stdio.h>

int main()
{
    int t, i, j, k, liczba, szesn, jeden, zmienna, tabS[100], tabJ[100];
    char liczby[]="ABCDEF";
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &liczba);
        zmienna=liczba;
        j=0;
        do{
            szesn=liczba;
            szesn%=16;
            tabS[j]=szesn;
            liczba/=16;
            j++;
        }while(liczba);

        j-=1;
        
        for(j;j>=0;j--){
            if(tabS[j]<10) printf("%d", tabS[j]);
            else printf("%c", liczby[tabS[j]-10]);        
        }

        putchar(' ');

        k=0;
        do{
            jeden=zmienna;
            jeden%=11;
            tabJ[k]=jeden;
            zmienna/=11;
            k++;
        }while(zmienna);

        k-=1;
        for(k;k>=0;k--){
            if(tabJ[k]<10) printf("%d", tabJ[k]);
            else printf("%c", liczby[tabJ[k]-10]);
        }

        putchar('\n');

    }

    return 0;
}
