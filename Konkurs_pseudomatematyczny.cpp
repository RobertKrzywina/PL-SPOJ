#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int d, n, j;

    cin>>d;
    while(d--)
    {
        cin>>n;
        int *tab1=new int[n];
        int *tab2=new int[n];
        for(int i=0;i<n;i++){
            cin>>tab1[i];
        }
        sort(tab1, tab1+n);
        j=1;
        tab2[0]=tab1[n-1];
        for(int i=0;i<n-1;i++){
            if(tab2[0]==tab1[i]){
                tab2[j]=tab1[i];
                j++;
            }
        }
        for(int i=0;i<j;i++){
            cout<<tab2[i]<<" ";
        }
        for(int i=0;i<n-j;i++){
            cout<<tab1[i]<<" ";
        }
        cout<<endl;
        delete [] tab1;
        delete [] tab2;
    }

    return 0;
}
