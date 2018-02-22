#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int r, y, z, a;

    scanf("%d", &r);

    while(r!=0)
    {
        y=1;
        if(r>0){ // lewoskretny
            a=r; z=r-1;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<y;j++) putchar('*');
                for(int k=0;k<z;k++) putchar('.');
                for(int l=a;l>0;l--) putchar('*');
                if(i>0){
                    for(int c=0;c<i;c++) putchar('.');
                }
                putchar('\n');
                y++; z--; a--;
                if(i==r-1){
                    y=1; z=r-1; a=r;
                    for(i=0;i<r;i++)
                    {
                        for(int k=0;k<z;k++) putchar('.');
                        for(int j=0;j<y;j++) putchar('*');
                        if(i>0){
                            for(int c=0;c<i;c++) putchar('.');
                        }
                        for(int l=a;l>0;l--) putchar('*');
                        putchar('\n');
                        y++; z--; a--;
                    }
                }
            }
        }
        else{ // prawoskretny
            z=abs(r+1); r=abs(r); a=r;
            for(int i=0;i<r;i++)
            {
                if(i>0){
                    for(int c=0;c<i;c++) putchar('.');
                }
                for(int j=a;j>0;j--) putchar('*');
                for(int k=z-1;k>=0;k--) putchar('.');
                for(int l=0;l<y;l++) putchar('*');
                putchar('\n');
                y++; z--; a--;
                if(i==r-1){
                    y=1; z=abs(r+1); r=abs(r); a=r;
                    for(int i=0;i<r;i++)
                    {
                        for(int j=a;j>0;j--) putchar('*');
                        if(i>0){
                            for(int c=0;c<i;c++) putchar('.');
                        }
                        for(int l=0;l<y;l++) putchar('*');
                        for(int k=a-1;k>0;k--) putchar('.');
                        putchar('\n');
                        y++; z--; a--;
                    }
                }
            }
        }
        scanf("%d", &r);
    }

    return 0;
}
