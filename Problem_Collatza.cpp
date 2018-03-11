#include <iostream>

int main()
{
    int t, n, licz;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        std::cin>>n;
        if(n>1){
            licz=0;
            do{
            if(n%2!=0) n=n*3+1;
            else n/=2;
            licz++;
            }while(n!=1);
        std::cout<<licz<<std::endl;
        }
        else if(n==1) std::cout<<0<<std::endl;
    }

    return 0;
}
