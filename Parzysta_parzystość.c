#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int i, y;
    unsigned long long int x;
    char liczba[N];
    fgets(liczba, N, stdin);
    x=atoi(liczba);
    y=strlen(liczba)-1;
    if(x%2==0){
        puts("Tak"); exit(0);
    }
    else{
        for(i=0;i<y;i++)
            if(liczba[i]=='0' || liczba[i]=='2' || liczba[i]=='4' || liczba[i]=='6' || liczba[i]=='8'){
                puts("Tak"); exit(0);
            }
    }
    puts("Nie");

    return 0;
}
