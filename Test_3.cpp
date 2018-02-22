#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba, licz=0, i=0;

    while(scanf("%d", &liczba)==1 && (liczba>9 && liczba<100))
    {
        if(liczba!=42){
            i=1;
            printf("%d\n", liczba);
        }
        else if(liczba==42 && i==1){
            licz++; i=0;
            printf("%d\n", liczba);
            if(licz==3) exit(0);
        }
        else printf("%d\n", liczba);
    }

    return 0;
}
