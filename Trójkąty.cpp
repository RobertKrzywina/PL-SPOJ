#include <iostream>

using namespace std;

int main()
{
    int t, x11, x12, x13, y11, y12, y13, AB1, AC1, BC1, AB2, AC2, BC2, licz;
    cin>>t;

    while(t--)
    {
        licz=0;
        cin>>x11>>y11>>x12>>y12>>x13>>y13;
        AB1=((x12-x11)*(x12-x11))+((y12-y11)*(y12-y11));
        AC1=((x13-x11)*(x13-x11))+((y13-y11)*(y13-y11));
        BC1=((x13-x12)*(x13-x12))+((y13-y12)*(y13-y12));
        cin>>x11>>y11>>x12>>y12>>x13>>y13;
        AB2=((x12-x11)*(x12-x11))+((y12-y11)*(y12-y11));
        AC2=((x13-x11)*(x13-x11))+((y13-y11)*(y13-y11));
        BC2=((x13-x12)*(x13-x12))+((y13-y12)*(y13-y12));
        if(AB1==AB2 || AB1==AC2 || AB1==BC2){
            licz++;
            if(AC1==AB2 || AC1==AC2 || AC1==BC2){
                licz++;
                if(BC1==AB2 || BC1==AC2 || BC1==BC2){
                    licz++;
                    cout<<"TAK"<<endl;
                }
                else cout<<"NIE"<<endl;
            }
            else cout<<"NIE"<<endl;
        }
        else cout<<"NIE"<<endl;
    }

    return 0;
}
