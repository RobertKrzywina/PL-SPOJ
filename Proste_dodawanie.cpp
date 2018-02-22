#include <iostream>

using namespace std;

int t, n, liczby, suma, wynik[20];

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
    suma=0;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        cin>>liczby;
        suma+=liczby;
    }
    wynik[i]=suma;
    }
    for(int k=0;k<t;k++)
    {
        cout<<wynik[k]<<endl;
    }
    cin.ignore();
    cin.get();

    return 0;
}
