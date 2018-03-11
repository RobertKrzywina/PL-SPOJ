#include <iostream>
#include <algorithm>

int euklides(int, int);

int main()
{
    int n;
    std::cin>>n;
    int *tab=new int[n];

    // Alokowanie dwuwymiarowej tablicy
    int **macierz=new int *[n];
    for(int i=0;i<n;i++)
    macierz[i]=new int[n];

    for(int i=0;i<n;i++)
        std::cin>>tab[i];
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            macierz[i][j]=euklides(tab[i],tab[j]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            std::cout<<macierz[i][j]<<" ";
        std::cout<<std::endl;
    }

    delete [] tab;

    //Zwalnianie pamieci z dwuwymiarowej tablicy
    for (int i=0;i<n;++i)
    delete macierz[i];
    delete macierz;

    return 0;
}
int euklides(int a, int b)
{
	while(b)
		std::swap(a%=b,b);
	return a;
}
