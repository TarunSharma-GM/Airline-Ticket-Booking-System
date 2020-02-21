#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int glob=0;
int global=10;

class d_booking //class  for domestic booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];//flightDetails arrivalTime departureTime
    char doj[15];
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++;
        pnr=glob;
    }
    int j_detail()
    {
        cout << "\nEnter DateOfJourney(DD/MM/YY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "1.Assam(1) \t2.Duwahati(2) \t3.Ranchi(3) \t4.Bangalore(4)" << endl << endl;
        cout << "Enter From:";
        cin >> src;
        cout << "To:";
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.AirAsia(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.AirAsia(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
            cout << "2.AirAsia(2)\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "2.AirAisa(2)\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "2.AirAsia(2)\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "\t \t \t---Flights Found---" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Indigo(1)\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
            cout << "2.AirAisa(2)\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
            cout << "3.Go Air(3)\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
        }
        else if(src==dest)
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) 
        {
          case 1:
                cout << "\n\nFlight selected:"<<endl;
                cout << "Indigo"<<endl;
                strcpy(f_d,"Indigo");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\n\nFlight selected:"<<endl;
                cout << "AirAisa"<<endl;
                strcpy(f_d,"AirAsia");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\n\nFlight selected:" << endl;
                cout << "Go Air" << endl;
                strcpy(f_d,"Go Air");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Invalid Choice number entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking//class for international booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    char doji[15];
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }
    
    int j_detaili()
    {
        cout << "Enter Date Of Journey(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "1.India(1) \t2.Dubai(2) \t3.London(3) \t4.Singapore(4) \t5.NewYork(5) " << endl << endl;
        cout << "\nEnter From:";
        cin >>srci;
        cout << "\To:";
        cin >>desti;
        cout << "\t \t \t---Flights Found---" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }
        else if((srci==1 && desti==2) || (srci==2 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.25700\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.27300\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs.29650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }
        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";
        }
        else if((srci==2 && desti==5) || (srci==5 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "1.Vistara(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";
        }
        else if(srci==desti)
        {
            cout << "Source and Destination can't be same.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else
        {
            cout << "Invalid Option entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice:" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:cout << "\n\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(f_i,"Vistara");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\n\nFlight selected:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\n\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");
            cout << "Departure Time : 18:00" << endl;  
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Invalid Option entered" << endl;
            return select_flighti();
        }
    }
};

class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    char c_no[11];
public:
    void p_detail(int x)
    {   if(x==1)
        { 
		  j_detail();
          select_flight();
        }
        else
        {  
	       j_detaili();
           select_flighti();
        }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()//to check gender input as valid
    {
        cout << "\nGender:\n1.Male\n2.Female\nEnter choice:";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nEnter Valid Gender.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
    void more_details()
    {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(10 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


    int getpnr()//function to get pnr for domestic booking
    {
      return pnr;
    }

    int getpnri()//function to get pnr for international booking
    {
        return pnri;
    }

    void disp()//function to display details for domestic booking
    { 
         cout<<"\n\n::Ticket::\n";
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
    }

    void dispi()//function to display details for international booking
    {
     	 cout<<"\n\n::Ticket::\n";
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
    }
};



class payment
{
protected:
    long int choice1,bank,cvv;
    char user_id[10],card[17],date[10];
    string passwd="";
    int ch;
public:
    void pay_detail()
    {     cout << "\n\nHow would you like to pay?:\n";
        cout << "\n1.Debit Card(1) \n2.Credit Card(2) \n3.Net Banking(3)";
        cout << "\n\nEnter your choice:";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter 16 digit card no.:";
            cin >> card;
            cout << "\nEnter expiry date(MMYY):";
            cin >> date;
            cout << "\nEnter 3 digit CVV no.:";
            while(ch=getch())
            {
    	      if(ch==13)
    	      {
    	
			   passwd="";
			   break;
		     }
		     else if(ch==8)
		     {
			 	if(passwd.length()>0)
				{
					cout<<"\b \b";
					passwd.erase(passwd.length()-1);
				}
			 }	
			 else 
			 { 
				cout<<"*";
				passwd +=ch;
		     }
		   }
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter 16 digit card no.:";
            cin >> card;
            cout << "\nEnter expiry date(MMYY):";
            cin >> date;
            cout << "\nEnter password:";
            while(ch=getch())
            {
    	      if(ch==13)
    	      {
    	
			   passwd="";
			   break;
		     }
		     else if(ch==8)
		     {
			 	if(passwd.length()>0)
				{
					cout<<"\b \b";
					passwd.erase(passwd.length()-1);
				}
			 }	
			 else 
			 { 
				cout<<"*";
				passwd +=ch;
		     }
		   }
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available: 1.Indian Bank(1) 2.Yes Bank(2) 3.State Bank of India(3) 4.PNB Bank(4) 5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id number:";
            cin >> user_id;
            cout << "\nEnter password:";
            while(ch=getch())
            {
    	      if(ch==13)
    	      {
    	
			   passwd="";
			   break;
		     }
		     else if(ch==8)
		     {
			 	if(passwd.length()>0)
				{
					cout<<"\b \b";
					passwd.erase(passwd.length()-1);
				}
			 }	
			 else 
			 { 
				cout<<"*";
				passwd +=ch;
		     }
		   }	
            cout << "\nTransaction Successful\n";
            break;
        	default:
            cout << "\nInvalid Option entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)//file creation for domestic booking
{  
   ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticket(int x)//function to cancel ticket
{  
   passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
     fin.write((char *)&p,sizeof(p));//writing to file
     else
     {
        p.disp();//display details
        cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
        f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)
    cout<<"Ticket not found\n";
    fout.close();
    fin.close();
    remove("domestic.txt");//deleting old file
    rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {
	  p.disp();//display details
      cout<<"\n::::::::Your ticket:::::::::\n"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)
   cout<<"Ticket not found\n"<<endl;

}
void createfilei(passenger p)//opening a file for international booking
{  
   ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  
   passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else
     {
         p.dispi();//display details
         cout<<"\nYour Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("international.txt");//deleting old file
   rename("international1.txt","international.txt");//renaming new file

}
void checkticketi(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {
	  p.dispi();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==0)
   cout<<"\nTicket not found"<<endl;

}
int main()
{
    d_booking d1;
    i_booking i1;
    passenger p1;
    payment p2;
    int ch,ch1,n;
	char input;
    do
    {
    system("CLS");
    cout << "\n\n\t   -Welcome To Flight Reservation System-" << endl << endl;
    cout <<"\t==============================================\n";
    cout << "\t       Book your Flight tickets !" << endl;
    cout <<"\t==============================================";
    
    cout << "\n\n\t\t\t1.Book Flight(1) \n\t\t\t2.Cancel Fight(2) \n\t\t\t3.Check Ticket(3) \n\t\t\t4.Exit(4)" << endl;
    cout << "\n\t\tPlease enter your choice number:";
    cin >> ch;
      switch(ch)
      {
        case 1:
         system("CLS");
         cout << "\n1.Domestic Fights(1) \n2.International Flights(2)" << endl;
         cout << "\nPlease enter your choice number:" << endl;
         cin >> ch1;
          switch(ch1)
          {
            case 1://for booking domestic ticket
                   p1.d_pnr();
                   p1.p_detail(1);
                   p1.gender_check();
                   p1.more_details();
                   p2.pay_detail();
                   p1.disp();
                   createfile(p1);
            break;
            case 2: //for booking international ticket
                   p1.p_detail(2);
                   p1.i_pnr();
                   p1.gender_check();
                   p1.more_details();
                   p2.pay_detail();
                   p1.dispi();
                   createfilei(p1);
            break;
            default:
            cout << "Wrong input entered\nTry again\n\n\n" << endl;
            return main();
          }
          break;
        case 2:
              system("CLS");
              cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
        case 3://for displaying booked ticket details
                  system("CLS");
                  cout << "1.Domestic Fights(1) \n2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option:" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {
				  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);
				  }
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
                   {
                    cout << "Wrong input entered.\nTry again\n\n\n";
                    return main();
                   }
               break;
        case 4:
		    system("CLS");  
			return 0;
        default:cout << "\nInvaild Option entered\nTry again.\n\n\n\n" << endl;
            return main();
    }
    cout<<"\n\n\nDo you wish to continue:(Y/y and N/n)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
return 0;
}

