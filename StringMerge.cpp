#include <iostream>
#include <cstring>

//using namespace std;

void stringmerge(std::string, std::string);

int main()
{
    int t;
    std::string s1, s2;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        std::cin>>s1>>s2;
        stringmerge(s1,s2);
    }

    return 0;
}
void stringmerge(std::string s1, std::string s2)
{
    int x, y, z, j=0;

    x=s1.length();
    y=s2.length();

    if(x>y) z=y;
    else z=x;

    z*=2;

    char *tab = new char[z+1];

    for(int i=0;j<z;i++)
    {
        tab[j]=s1[i]; j++;
        if(j<z)
        tab[j]=s2[i];
        j++;
    }

    tab[z]='\0';
    std::cout<<tab<<std::endl;

    delete [] tab;
}
