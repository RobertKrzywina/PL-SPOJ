#include <iostream>
#include <cstdio>

void printfloat(float);

int main()
{
    using std::cin;
    int t;
    float n;

    cin>>t;
    while(t--){
        cin>>n;
        printfloat(n);
    }

    return 0;
}
void printfloat(float n)
{
    for(int i=sizeof n-1;i>0;i--)
        printf("%x ", (((const unsigned char*)&n)[i]));
    putchar(48);
    putchar('\n');
}
