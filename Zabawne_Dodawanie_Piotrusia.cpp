#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;

int reverseNumber(int);

int main()
{
    int t, n, x, z, y, sum, count;
    scanf("%d", &t);
    if(t<=80){
    for(int i=0;i<t;i++)
    {
        sum=0; count=0;
        scanf("%d", &n);
        if(n<10 && n>0) printf("%d %d\n", n, count);
        else if(n<81 && n>9){
            do{
                stringstream ss;
                ss<<n;
                string str = ss.str();
                x=str.length(); y=x;
                for(int j=0;j<x/2;j++)
                {
                    if(str[j]==str[y-1]) z=1;
                    else z=0;
                    y--;
                }

                if(z==0){
                    sum=reverseNumber(n);
                    count++;
                }
                n+=sum;
            }while(z==0);
            printf("%d %d\n", n-sum, count);
        }
    }
    }

    return 0;
}
int reverseNumber(int n)
{
    int reversedNumber = 0, remainder;
    while(n!=0)
    {
    remainder=n%10;
    reversedNumber=reversedNumber*10+remainder;
    n/=10;
    }
    return reversedNumber;
}
