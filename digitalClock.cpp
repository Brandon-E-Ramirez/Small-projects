#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
    int hour = 0, minute = 0, second = 0, i;
    

    while(1)
    {
    while(hour < 24)
    {
    while(minute < 60)
    {
    while(second < 60)
    {
    Sleep(1000);
    system("cls");
    cout<<"***DIGITAL CLOCK***";
    cout<<"\n\n HOUR : MINUTE : SECOND";
    cout<< "\n " << hour << "   :   " << minute << "   :   " << second << "   :   " << endl;
    second++; 

    }

    minute++;
    second = 0;
    }

    hour++;
    minute = 0;
    }
}

_getch();
}