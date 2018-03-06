#include <iostream>

using namespace std;

int main()
{
    int d, w, p, polowa, suma_w, suma_p;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        polowa=0; suma_w=0; suma_p=0;
        for(int j=0;j<3;j++)
        {
            cin>>w>>p;
            if(j==0){
                polowa+=w+p;
                polowa*=2;
            }
            suma_w+=w; suma_p+=p;
        }
        cout<<polowa-suma_w<<" "<<polowa-suma_p<<endl;
    }
    return 0;
}
