#include <iostream>

using namespace std;

int main()
{
    int t;
    long long suma=0, schowek=0, n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        suma+=n;
        if(suma>schowek) schowek=suma;
        if(suma<0) suma=0;
    }

    cout<<schowek<<endl;

    return 0;
}
