#include <iostream>

using namespace std;

int main()
{
    int rejestr, a, tab[10], x, y;
    char ch;
    while(cin>>ch){
        switch(ch)
        {
        case 'z':
            cin>>rejestr>>a;
            tab[rejestr]=a;
            break;
        case '+':
            cin>>x>>y;
            cout<<tab[x]+tab[y]<<endl;
            break;
        case '-':
            cin>>x>>y;
            cout<<tab[x]-tab[y]<<endl;
            break;
        case '*':
            cin>>x>>y;
            cout<<tab[x]*tab[y]<<endl;
            break;
        case '/':
            cin>>x>>y;
            if(y>0) cout<<tab[x]/tab[y]<<endl;
            else cout<<0<<endl;
            break;
        case '%':
            cin>>x>>y;
            if(y>0) cout<<tab[x]%tab[y]<<endl;
            else cout<<0<<endl;
            break;
        }
        }

    return 0;
}
