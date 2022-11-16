#include <stdio.h>  
#include <conio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <iostream> 
#include <time.h>   
#include <fstream>  
#include "technigo.h" 
using namespace std;

class login 
{
public:
    char id[100];   
    char pass[100]; 

    void getid() 
    {
        cout << "Enter your id:";
        cin >> id;
        cout << "Enter the password: ";
        cin >> pass;
    }
    void displayid() 
    {
        cout << id << "\t" << pass << endl;
    }
};
class detail 
{
public:
        
    char pno[100]; 

    char bp[100];    
    char dest[100]; 
    int c1, c1fare;  
    int c2, c2fare;  
    int d, m, y;     
    void getdetail() 
    {
        cout << "Enter the details as follows\n";
        cout << "Plane number:";
        scanf(" %[^\n]s", pno);

        cin.sync();             
        cout << "Boarding point:";
        scanf(" %[^\n]s",bp);
        cout << "Destination pt:";
        scanf(" %[^\n]s",dest);

        cout << "No of seats in Business class & Fare per ticket:";
        cin >> c1 >> c1fare;
        cout << "No of seats in Economy class & Fare per ticket:";
        cin >> c2 >> c2fare;
        cout << "Date of travel:DD MM YYYY";
        cin >> d >> m >> y;
    }
    void displaydetail() 
    {
		cout << "Plane Number  Boarding Station  Destination Station\n";
        cout << pno << "\t\t" << bp << "\t\t\t" << dest << "\t\t\t\n";
         cout<<"Business Class Seats  Businees Class Fare  Economy Class Seats  Economy Class Fare \n";
        cout << c1 << "\t\t\t" << c1fare << "\t\t\t" << c2 << "\t\t\t" << c2fare << "\t\t\t\n";
        cout<<"Date\n";
        cout << d << "-" << m << "-" << y << "\t" << endl
             << endl;
    }
};
class reser 
{
public:
    int pnr;             
    char pno[100];             

    char bp[10];         
    char dest[100];      
    char pname[10][100]; 
    int age[20];         
    char clas[10];       
    int nosr;            
    int i;
    int d, m, y;
    int con;     

    float amc;
    void getresdet() 
    {
        cout << "\nEnter the details as follows\n";
        cout << "Plane no: ";
       scanf(" %[^\n]s",pno);

        cout << "\nBoarding point: ";
        scanf(" %[^\n]s",bp);
        cout << "\nDestination pt: ";
        scanf(" %[^\n]s",dest);
        cout << "\nNo of seats required: ";
        cin >> nosr;
        cout << "\n\n";
        for (i = 0; i < nosr; i++)
        {
            cout << "Passenger " << i + 1 << " Name: ";
            cin.sync();                 
            cin.getline(pname[i], 100); 
                                        
            cout << "Passenger " << i + 1 << " Age: ";
            cin >> age[i];
        }
        cout << "\n\nEnter Class\nB for Business class\nE-Economy class\n: ";
        cin >> clas;
        cout << "\nDate of travel(DD MM YYYY): ";
        cin >> d >> m >> y;
        cout << "\n\nEnter the concession category\n";
        cout << "1.Military\n2.Senior citizen\n";
        cout << "3.Children below 5 yrs\n4.None\n: ";
        cin >> con;
        cout << "............END OF GETTING DETAILS............\n";
    }
	bool displayresdet() 
    {
        
        cout << "\n\nYou must pay: " << amc << endl;
        float paid=0.0;
        cout<<"enter the amount:"<<endl;
        cin>>paid;
        if(paid==amc)
        {
        	cout << "\n\t\t\t\t...............................................\n";
        cout << "\t\t\t\t...............................................\n";
        cout << "\t\t\t\t PNR No: " << pnr;
        cout << "\n\n\t\t\t\tPlane No: " << pno;
        cout << "\n\n\t\t\t\tBoarding Point: ";
        cout << bp;
        cout << "\n\n\t\t\t\tDestination Point: ";
        cout << dest;
        cout << "\n\n\t\t\t\tNo of seats reserved: " << nosr;
        for (i = 0; i < nosr; i++)
        {
            cout << "\n\n\t\t\t\tPassenger " << i + 1 << " Name:";
            cout << pname[i];
            cout << "\n\t\t\t\tPassenger " << i + 1 << " Age:" << age[i];
        }

        cout << "\n\n\t\t\t\tYour class: ";
        cout << clas;
        cout << "\n\n\t\t\t\tDate of reservation: " << d << "-" << m << "-" << y;
        cout << "\n\n\t\t\t\tYour concession category: " << con;
		return true;
		}
        else
        return false;
        cout << "\t\t\t\t*****************\n";
        cout << "\t\t\t\t*****************\n\n";
    }
};
class canc 
{
public:
    int pnr;             
   char pno[100];             
    char tname[100];     
    char bp[10];         
    char dest[100];      
    char pname[10][100]; 
    int age[20];         
    char clas[10];       
    int nosc;            
    int d, m, y;
    float amr;
    void getcancdet() 
    {
        cout << "Enter the details as follows\n";
        cout << "PNR no: ";
        cin >> pnr;
        cout << "Date of cancellation(DD MM YYYY): ";
        cin >> d >> m >> y;
        cout << "...........END OF GETTING DETAILS...........\n";
    }
    void displaycancdet() 
    {
        cout << "...........................................\n";
        cout << "...........................................\n";
        cout << "PNR No:" << pnr;
        cout << "\n\nPlane No: " << pno;
        cout << "\nTrain Name: ";
        cout << tname;
        cout << "\n\nBoarding Point: ";
        cout << bp;

        cout << "\n\nDestination Point: ";
        puts(dest);
        cout << "\n\nYour class: ";
        puts(clas);
        cout << "\n\nNo of seats to be cancelled: " << nosc;

        for (int i = 0; i < nosc; i++)
        {
            cout << "\n\nPassenger " << i + 1 << " Name: ";
            cout << pname[i];
            cout << "\nPassenger " << i + 1 << " Age: " << age[i];
        }

        cout << "\n\nDate of cancellation: " << d << "-" << m << "-" << y;
        cout << "\n\nYou can collect: " << amr << "rs" << endl;
        cout << "***************\n";
        cout << ".........END OF CANCELLATION.............\n";
        cout << "***************\n";
    }
};


void airlines:: database()
{
    char password[15];
    const char *pass = "1234";
    cout << "Enter the administrator password: ";
    cin >> password;
    detail a;                        
    fstream f;                       
    int ch;                          
    char c;                          
    if (strcmp(pass, password) != 0) 
    {
        cout << "Enter the password correctly\n";
        cout << "You are not permitted to login in this mode\n";
    }
    if (strcmp(pass, password) == 0) 
    {
        char c;
        do
        {
            cout << "...........ADMINISTRATOR MENU...........\n";
            cout << "1.Add Plane Details in Database\n";
            cout << "2.Display All Plane Details\n3.User Management\n";
            cout << "4.Display All Reservations\n5.Display Cancellations\n6.Return to Main Menu\n";
            cout << "Enter your choice: ";
            cin >> ch;

            cout << endl;
            switch (ch)
            {
            case 1:
                f.open("plane.txt", ios::in | ios::out | ios::binary | ios::app); 
                do
                {
                    a.getdetail();                  
                    f.write((char *)&a, sizeof(a)); 
                    cout << "Do you want to add one more record?\n";
                    cout << "y-for Yes\nn-for No\n: ";
                    cin >> c;
                } while (c == 'y');
                f.close();
                break;
            case 2:


				f.open("plane.txt", ios::in | ios::out | ios::binary | ios::app); 
                f.seekg(0);                                                   
                while (f.read((char *)&a, sizeof(a)))                         
                {
                    a.displaydetail(); 
                }
                f.close(); 
                cout << "\n\n";
                break;
            case 3:
                manage(); 
                break;
            case 4:

                displaypassdetail(); 
                break;
            case 5:
                displaycan(); 
            }
        } while (ch < 6);

        f.close(); 
    }
}

void airlines:: displaycan() 
{
    fstream f3;                                          
    canc c;                                              
    f3.open("cancel.txt", ios::in | ios::out | ios::binary); 
    f3.seekg(0);                                         
    while (f3.read((char *)&c, sizeof(c)))               
    {
         cout << "...........................................\n";
        cout << "...........................................\n";
        cout << "PNR Number:" << c.pnr;


        cout << "\n\nBoarding Point: ";
        cout << c.bp;

        cout << "\n\nDestination Point: ";
        puts(c.dest);
        cout << "\n\nYour class: ";
        puts(c.clas);
        cout << "\n\nNo of seats to be cancelled: " << c.nosc;

        for (int i = 0; i < c.nosc; i++)
        {
            cout << "\n\nPassenger " << i + 1 << " Name: ";
            cout << c.pname[i];
            cout << "\nPassenger " << i + 1 << " Age: " << c.age[i];
        }

        cout << "\n\nDate of cancellation: " << c.d << "-" << c.m << "-" << c.y;
        cout << "\n\nAmount: " << c.amr << "rs" << endl;
    }
    f3.close(); 
}

void airlines:: res()
{
    detail a;                                                      
    reser b;                                                       
    fstream f1, f2;                                                
    time_t t;                                                      
    f1.open("plane.txt", ios::in | ios::out | ios::binary);            
    f2.open("passenger.txt", ios::in | ios::out | ios::binary | ios::app); 
    int ch;
    cout << "\nEnter Plane No.: ";
    scanf(" %[^\n]s",b.pno);

    while (f1.read((char *)&a, sizeof(a))) 
    {
        if (strcmp(a.pno,b.pno)==0) 
        {
            cout << "\nEnter Plane Number again for confirmation\n";
            b.getresdet();              
          if((strcmp(a.bp,b.bp)!=0)|| (strcmp(a.dest,b.dest)!=0) ||a.d!=b.d||a.m!=b.m||a.y!=b.y) {

          	flag=-1;
          	break;
	       }
	       else{

            if (strcmp(b.clas, "B") == 0) 
            {
                if (a.c1 >= b.nosr) 
                {

                    amt = a.c1fare;
                    addr = f1.tellg(); 
                    ad = sizeof(a);
                    f1.seekp(addr - (ad)); 
                    a.c1 = a.c1 - b.nosr;
                    f1.write((char *)&a, sizeof(a)); 
                    if (b.con == 1)
                    {
                        cout << "Concession category: MILITARY PERSONNEL\n";
                        b.amc = b.nosr * ((amt * 50) / 100); 
                    }
                    else if (b.con == 2)
                    {
                        cout << "Concession category: SENIOR CITIZEN\n";
                        b.amc = b.nosr * ((amt * 20) / 100); 
                    }
                    else if (b.con == 3)
                    {
                        cout << "Concession category: CHILDREN BELOW FIVE\n";
                        b.amc = 0.0; //Free
                    }
                    else if (b.con == 4)
                    {
                        cout << "No concession\n";
                        b.amc = b.nosr * amt; //No Concession
                    }
                    srand((unsigned)time(&t));       
                    b.pnr = rand();                  
                     
                    bool x=b.displayresdet();             
                    if(x)
					{
					f2.write((char *)&b, sizeof(b));
					cout << "\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout << "-------------------------------------------------------Contratulations,   "<<b.pname[0]<<" ,  Your ticket is reserved ------------------------------------------------------------------\n";


                    
					cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
					cout<<" 1.  Airport counters close 60 minutes prior to the scheduled departure time.\n";
					cout<<" 2.  Boarding gates close 25 minutes prior to the scheduled departure time.\n";
					cout<<" 3.  BAGGAGE INFORMATION:\n";
					cout<<" 4.  Check-in Baggage: 25kg per person (1 piece only). Excess baggage/additional piece is subject to applicable charges.\n";
					cout<<" 5.  Disclaimer: 25 Kg per person (One piece only). For Double/Triple or MultiSeats bookings, extra 10 kg will be applicable. \n";
					cout<<"     Baggage in excess of 25 kg will be subject to additional charges of INR 1000 per piece in addition to the excess baggage charges of INR 500 per kg at the airport.\n";
					cout<<" 6.  Hand Baggage: One hand bag up to 10 kgs and 150 ms (L+W+H), shall be allowed per customer.We recommend to place it under the seat in front, on board.\n";
					cout<<" 7.  All passengers must present valid photo identification in original at the time of check-in.\n";
					cout<<" 8.  Carry a printed or soft copy of boarding pass and baggage tag, you can print them at the airport kiosk as well.\n";
					cout<<" 9.  Remember to wear your mask, carrying a sanitiser is recommended.\n";
        			cout << "\n\n Travel advisory: Safety during COVID-19";
					cout<<"\n We seek your kind assistance to safeguard your well-being, as well as that of your fellow passengers and our crew on board our flights, by following the guidelines set out below:";
					cout<<"\n 1.All customers should wear a mask and sanitize their hands before proceeding to the boarding gate.";
					cout<<"\n 2.Customers must wear a face mask covering their nose and mouth, throughout their journey with IndiGo. The mask maybe removed only while eating and drinking.";
					cout<<"\n 3.Please maintain appropriate social distancing while boarding and de-boarding the aircraft.";
					cout<<"\n 4.Kindly adhere to all the announcements and other directives issued by our ground staff and/or crew at all points of time during your journey.";
					cout<<"\n 5.Caution: Customers are advised to strictly follow all COVID-19 protocols. Failure to comply with these guidelines and the directions of our ground staff and/or crew may attract penal action against the concerned individual.";
					cout<<"\n                                                                            Thank You!                                                                                                                            ";
               		 }
               		 else
               		 cout << "--------------Your ticket is not reserved as entered amount is wrong---------------------\n";
					cout<<"\n----------------------------------------------------------------------End of reservation menu-------------------------------------------------------------------------------\n";
                }


                else 
                {
                    cout << "***Sorry requested seats are not available***\n";
                }
            }


            else if (strcmp(b.clas, "E") == 0) 
            {
                if (a.c2 >= b.nosr)
                {

                    amt = a.c2fare;
                    addr = f1.tellg(); 
                    ad = sizeof(a);
                    f1.seekp(addr - (ad)); 
                    a.c2 = a.c2 - b.nosr;
                    f1.write((char *)&a, sizeof(a)); 
                    if (b.con == 1)
                    {
                        cout << "Concession category:MILITARY PERSONNEL\n";
                        b.amc = b.nosr * ((amt * 50) / 100); 
                    }
                    else if (b.con == 2)
                    {
                        cout << "Concession category:SENIOR CITIZEN\n";
                        b.amc = b.nosr * ((amt * 60) / 100); 
                    }
                    else if (b.con == 3)
                    {
                        cout << "Concession category:CHILDERN BELOW FIVE\n";
                        b.amc = 0.0; 
                    }
                    else if (b.con == 4)
                    {
                        cout << "You cannot get any concession\n";
                        b.amc = b.nosr * amt; 
                    }
                    srand((unsigned)time(&t));       
                    b.pnr = rand();                  
                    f2.write((char *)&b, sizeof(b)); 
                    bool x=b.displayresdet();               
                    if(x)
					{
					f2.write((char *)&b, sizeof(b));
                    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                    cout << "-------------------------------------------------------Contratulations,   "<<b.pname[0]<<" ,  Your ticket is reserved ------------------------------------------------------------------\n";


                   
					cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
					cout<<" 1.  Airport counters close 60 minutes prior to the scheduled departure time.\n";
					cout<<" 2.  Boarding gates close 25 minutes prior to the scheduled departure time.\n";
					cout<<" 3.  BAGGAGE INFORMATION:\n";
					cout<<" 4.  Check-in Baggage: 15kg per person (1 piece only). Excess baggage/additional piece is subject to applicable charges.\n";
					cout<<" 5.  Disclaimer: 15 Kg per person (One piece only). For Double/Triple or MultiSeats bookings, extra 10 kg will be applicable. \n";
					cout<<"     Baggage in excess of 15 kg will be subject to additional charges of INR 1000 per piece in addition to the excess baggage charges of INR 500 per kg at the airport.\n";
					cout<<" 6.  Hand Baggage: One hand bag up to 10 kgs and 150 ms (L+W+H), shall be allowed per customer.We recommend to place it under the seat in front, on board.\n";
					cout<<" 7.  All passengers must present valid photo identification in original at the time of check-in.\n";
					cout<<" 8.  Carry a printed or soft copy of boarding pass and baggage tag, you can print them at the airport kiosk as well.\n";
					cout<<" 9.  Remember to wear your mask, carrying a sanitiser is recommended.\n";
        			cout << "\n\n Travel advisory: Safety during COVID-19";
					cout<<"\n We seek your kind assistance to safeguard your well-being, as well as that of your fellow passengers and our crew on board our flights, by following the guidelines set out below:";
					cout<<"\n 1.All customers should wear a mask and sanitize their hands before proceeding to the boarding gate.";
					cout<<"\n 2.Customers must wear a face mask covering their nose and mouth, throughout their journey with IndiGo. The mask maybe removed only while eating and drinking.";
					cout<<"\n 3.Please maintain appropriate social distancing while boarding and de-boarding the aircraft.";
					cout<<"\n 4.Kindly adhere to all the announcements and other directives issued by our ground staff and/or crew at all points of time during your journey.";
					cout<<"\n 5.Caution: Customers are advised to strictly follow all COVID-19 protocols. Failure to comply with these guidelines and the directions of our ground staff and/or crew may attract penal action against the concerned individual.";
					cout<<"\n                                                                            Thank You!                                                                                                                            ";
                	}
                    else
                    cout << "--------------Your ticket is not reserved as entered amount is wrong-----------\n";
                   cout<<"\n----------------------------------------------------------------------End of reservation menu-------------------------------------------------------------------------------\n";
                
                }
            }
            else
                {
                    cout << "***Sorry requested seats are not available**\n";
                }

            flag = 1;
            break;
        }
    }
        else
        {
            flag = 0;
        }
    }
    if (flag <= 0)
    {
        cout << "............Sorry enter correct details......................\n";

    }
    f1.close();
    f2.close();
}
void airlines:: displaypassdetail() 
{
    fstream f;                                         
    reser b;                                           
    f.open("passenger.txt", ios::in | ios::out | ios::binary);
    f.seekg(0);                                        
    while (f.read((char *)&b, sizeof(b)))             
    {
       cout << "\n...............................................\n";
        cout << "...............................................\n";
        cout << "PNR No: " << b.pnr;
        cout << "\n\nPlane No: " << b.pno;
        cout << "\n\nBoarding Point: ";
        cout << b.bp;
        cout << "\n\nDestination Point: ";
        cout << b.dest;
        cout << "\n\nNo of seats reserved: " << b.nosr;
        for (int i = 0; i < b.nosr; i++)
        {
            cout << "\n\nPassenger " << i + 1 << " Name:";
            cout << b.pname[i];
            cout << "\nPassenger " << i + 1 << " Age:" << b.age[i];
        }

        cout << "\n\nYour class: ";
        cout << b.clas;
        cout << "\n\nDate of reservation: " << b.d << "-" << b.m << "-" << b.y;
        cout << "\n\nYour concession category: " << b.con;
        cout << "\n\nAmount: " << b.amc << endl;

    }
    f.close(); 
}
void airlines:: enquiry() 
{
    fstream f;                                        
    f.open("plane.txt", ios::in | ios::out | ios::binary);
    detail a;
    while (f.read((char *)&a, sizeof(a))) 
    {
        a.displaydetail(); 
    }
    f.close(); 
}

void airlines:: cancel() 
{
    detail a;                                                           
    reser b;                                                            
    canc c;                                                             
    int flagc = 0;                                                      
    fstream f1, f2, f3, temp;                                           
    f1.open("plane.txt", ios::in | ios::out | ios::binary);                 
    f2.open("passenger.txt", ios::in | ios::out | ios::binary);                 
    f3.open("cancel.txt", ios::in | ios::out | ios::binary | ios::app);     
    temp.open("temp.txt", ios::in | ios::out | ios::binary | ios::app); 
    cout << "***CANCELLATION MENU****\n";
    c.getcancdet();                       
    while (f2.read((char *)&b, sizeof(b))) 
    {
        if (b.pnr == c.pnr) 
        {
            strcpy(c.pno,b.pno);            

            strcpy(c.bp, b.bp);       
            strcpy(c.dest, b.dest);  
            c.nosc = b.nosr;          

            for (int j = 0; j < c.nosc; j++)
            {
                strcpy(c.pname[j], b.pname[j]); 
                c.age[j] = b.age[j];            
            }
            strcpy(c.clas, b.clas);     

            if (strcmp(c.clas,"F" )==0) 
            {

                  while (f1.read((char *)&a, sizeof(a))) 
                {

                    if (strcmp(a.pno,c.pno)==0)
                    {
                        a.c1 = a.c1 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg(); 
                        ad = sizeof(a);
                        f1.seekp(addr - (ad));
                        f1.write((char *)&a, sizeof(a)); 
                        tamt = b.amc;

                        
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one atleast month before the date of departure\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "Cancelling after the departure\n";
                            cout << "Your request cannot be completed\n";
                        }
                        c.displaycancdet(); 
                    }
                }
            }
            else if (strcmp(c.clas, "S")==0) 
            {

                while (f1.read((char *)&a, sizeof(a))) 
                {

                    if (strcmp(a.pno,c.pno))
                    {
                        a.c2 = a.c2 + c.nosc;
                        d = a.d;
                        m = a.m;
                        addr = f1.tellg(); 
                        ad = sizeof(a);
                        f1.seekp(addr - (ad));
                        f1.write((char *)&a, sizeof(a)); 
                        tamt = b.amc;

                        
                        if ((c.d == d) && (c.m == m))
                        {
                            cout << "You are cancelling at the date of departure\n";
                            c.amr = tamt - ((tamt * 60) / 100);
                        }
                        else if (c.m == m)
                        {
                            cout << "You are cancelling at the month of departure\n";
                            c.amr = tamt - ((tamt * 50) / 100);
                        }
                        else if (m > c.m)
                        {
                            cout << "You are cancelling one month before the date of departure\n";
                            c.amr = tamt - ((tamt * 20) / 100);
                        }
                        else
                        {
                            cout << "Cancelling after the departure\n";
                            cout << "Your request cannot be completed\n";
                        }

                        c.displaycancdet(); 
                    }
                }
            }
            flagc = 1; 
        }
        else
        {
            if (flagc != 1)
            {
                flagc = 0; 
            }
            temp.write((char *)&b, sizeof(b)); 
        }
    }
    if (flagc == 0)
    {
        cout << "\n\nEnter the correct PNR no\n\n";
    }
    f3.write((char *)&c, sizeof(c)); 
    f1.close();                      
    f2.close();
    f3.close();
    remove("passenger.txt");             
    rename("temp.txt", "p.txt"); 
}
void airlines:: user()
{
    login a;   
    int flagu; 
    int ch;    
    cout << "*******************\n";
    cout << "****WELCOME TO THE USER MENU*****\n";
    cout << "******************\n";
    char password[15]; 

    fstream f;                                          
    f.open("id.txt", ios::in | ios::out | ios::binary); 
    char id[100];                                      
    cout << "Enter your id: ";
    cin >> id;

    cout << "Enter the password: ";
    cin >> password;
    while (f.read((char *)&a, sizeof(a))) 
    {
        if ((strcmp(a.id, id) == 0) && (strcmp(a.pass, password) == 0)) 
        {
            do
            {
                cout << "1.Reserve\n2.Cancel\n3.Enquiry\n4.Return to the main menu\n";
                cout << "Enter your choice:";
                cin >> ch;
                cout << endl;
                switch (ch)
                {
                case 1:
                    res(); 
                    break;
                case 2:
                    cancel();
                    break;
                case 3:
                    enquiry(); 
                    break;
                }
            } while (ch <= 3);

            return;
        }
        else
        {
            flagu = 1;
        }
    }
    if (flagu == 1)
    {
        cout << "Enter your user id and password correctly\n";
    }
}

void airlines:: manage() 
{
    int ch;    
    fstream f; 
    char c;    
    login a;   
    cout << ".........WELCOME TO THE USER MANAGEMENT MENU........\n";
    do
    {
        cout << "1.Add User in Database\n";
        cout << "2.Display details\n3.Return to the main menu\n";
        cout << "Enter your choice:";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            f.open("id.txt", ios::in | ios::out | ios::binary | ios::app); 
            do
            {
                a.getid();                      
                f.write((char *)&a, sizeof(a)); 
                cout << "Do you want to add one more record\n";
                cout << "y-Yes\nn-No\n";
                cin >> c;
            } while (c == 'y');
            f.close(); 
            break;

        case 2:
            f.open("id.txt", ios::in | ios::out | ios::binary); 

            f.seekg(0); 
            cout << "UserID\tPassword\n";
            while (f.read((char *)&a, sizeof(a))) 
            {
                a.displayid();
            }
            f.close(); 
            break;
        }
    } while (ch < 3);
}
