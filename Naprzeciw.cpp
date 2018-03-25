#include <iostream>

using namespace std;

int main()
{
    unsigned int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2) cout<<"BRAK"<<endl;
        else{
            if(k>n/2) cout<<k-n/2<<endl;
            else cout<<k+n/2<<endl;
        }
    }

    return 0;
}
