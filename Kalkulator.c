#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t a, b;
    char ch;
    while((scanf("%c", &ch))!=EOF){
        switch(ch)
        {
        case '+':
            scanf("%d %d", &a, &b);
            printf("%d\n", a+b);
            break;
        case '-':
            scanf("%d %d", &a, &b);
            printf("%d\n", a-b);
            break;
        case '*':
            scanf("%d %d", &a, &b);
            printf("%d\n", a*b);
            break;
        case '/':
            scanf("%d %d", &a, &b);
            if(b>0)
            printf("%d\n", a/b);
            break;
        case '%':
            scanf("%d %d", &a, &b);
            if(b>0)
            printf("%d\n", a%b);
            break;
        }
        }

    return 0;
}
