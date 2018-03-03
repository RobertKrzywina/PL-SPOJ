#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char znak;
    while((znak=getchar())!=EOF)
    {
        switch(znak)
            {
            case 'a':
            case 'A':
                {
                    cout<<".-/";
                    break;
                }
            case 'b':
            case 'B':
                {
                    cout<<"-.../";
                    break;
                }
            case 'c':
            case 'C':
                {
                    cout<<"-.-./";
                    break;
                }
            case 'd':
            case 'D':
                {
                    cout<<"-../";
                    break;
                }
            case 'e':
            case 'E':
                {
                    cout<<"./";
                    break;
                }
            case 'f':
            case 'F':
                {
                    cout<<".-../";
                    break;
                }
            case 'g':
            case 'G':
                {
                    cout<<"--./";
                    break;
                }
            case 'h':
            case 'H':
                {
                    cout<<"..../";
                    break;
                }
            case 'i':
            case 'I':
                {
                    cout<<"../";
                    break;
                }
            case 'j':
            case 'J':
                {
                    cout<<".---/";
                    break;
                }
            case 'k':
            case 'K':
                {
                    cout<<"-.-/";
                    break;
                }
            case 'l':
            case 'L':
                {
                    cout<<"..-./";
                    break;
                }
            case 'm':
            case 'M':
                {
                    cout<<"--/";
                    break;
                }
            case 'n':
            case 'N':
                {
                    cout<<"-./";
                    break;
                }
            case 'o':
            case 'O':
                {
                    cout<<"---/";
                    break;
                }
            case 'p':
            case 'P':
                {
                    cout<<".--./";
                    break;
                }
            case 'q':
            case 'Q':
                {
                    cout<<"--.-/";
                    break;
                }
            case 'r':
            case 'R':
                {
                    cout<<".-./";
                    break;
                }
            case 's':
            case 'S':
                {
                    cout<<".../";
                    break;
                }
            case 't':
            case 'T':
                {
                    cout<<"-/";
                    break;
                }
            case 'u':
            case 'U':
                {
                    cout<<"..-/";
                    break;
                }
            case 'v':
            case 'V':
                {
                    cout<<"...-/";
                    break;
                }
            case 'w':
            case 'W':
                {
                    cout<<".--/";
                    break;
                }
            case 'x':
            case 'X':
                {
                    cout<<"-..-/";
                    break;
                }
            case 'y':
            case 'Y':
                {
                    cout<<"-.--/";
                    break;
                }
            case 'z':
            case 'Z':
                {
                    cout<<"--../";
                    break;
                }
            case ' ':
                {
                    cout<<"/";
                    break;
                }
            case '\n':
                {
                    putchar('\n');
                    break;
                }
            }
    }

    return 0;
}
