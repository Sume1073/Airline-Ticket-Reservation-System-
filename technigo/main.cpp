#include <stdio.h> 
#include <conio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <iostream> 
#include <time.h>   
#include <fstream>  
#include <cstdlib>
#include "technigo.cpp"
using namespace std;

int main()
{
    int ch; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << ".......WELCOME TO AIRLINE RESERVATION SYSTEM..........\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t  \t  TECHNIGO \n";
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	
    airlines a;
    do
    {
        cout << "......................MAIN MENU......................\n";
        cout
            << "1.Admin mode\n2.User mode\n3.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            a.database(); 
            break;
        case 2:
            a.user();
            break;
        case 3:
            exit(0); //Exit
        }
    } while (ch < 3);
    return 0;
}
