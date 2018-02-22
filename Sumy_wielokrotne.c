#include <stdio.h>

int main()
{
    long long n, suma=0, suma_s=0;
    while((scanf("%lu", &n))!=EOF){
        suma+=n;
        if(getchar() != '\n') continue;
        else{
            printf("%lu\n", suma);
            suma_s+=suma;
            suma=0;
        }
    }
    printf("%lu", suma_s);

    return 0;
}
