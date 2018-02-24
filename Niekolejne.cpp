#include <stdio.h>

int main()
{
    int n, i=1;
    scanf("%d", &n);
    if(n>2){
        printf("%d ", i);
        i=n;
        while(n>1){
            printf("%d ", n);
            n-=2;
        }
        printf("0 ");
        n=i-1;
        while(n>1){
            printf("%d ", n);
            n-=2;
        }
    }
    else if(n==0) puts("0");
    else puts("NIE");

    return 0;
}
