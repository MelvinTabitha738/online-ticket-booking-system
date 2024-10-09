#include <iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class customer{
	public:
		int length();
		int wallet;
		int paybill;
		int amount;
		int one;
		int route;
    string fro;;
 	string name;
 	int age;
 	string no;
 	string password;
 	int len;
 	string first_name;
 	string middle_name;
 	int phone_number;
 	int id_no;
 	string county;
 	int now;
 	int home;
 	int day;
 	int month;
 	int year;
 	int ticket_no;
 	string email;
		customer(){
		 one=1;
		 home=99;
		 ticket_no=564829;
		};	
 	void booking(){
cout<<"routes"<<endl;
		cout<<"1. Meru - Nairobi  charges: ksh 1,200 || Departure time:8:15 a.m"<<endl;
		cout<<"2. Meru - nakuru   charges: ksh 1,500 || Departure time:6:00 a.m"<<endl;
		cout<<"3. Meru - mombasa  charges: ksh 2,500 || Departure time:6:00 p.m"<<endl;
		cout<<"4. Meru - Kitale   charges: Ksh 2,200 || Departure time:5:00 a.m"<<endl;
		cout<<"5. Meru - Kisumu   charges: Ksh 3,000 || Departure time:5:00 a.m"<<endl;
		cout<<"6. Meru - Naivasha charges: Ksh 2,500 || Departure time:5:00 a.m"<<endl;
        cout<<"please select one of the above routes"<<endl;
		cin>>route;
		switch(route){
			case 1:
				cout<<"The selected route is: Meru - Nairobi"<<endl;
				cout<<"Travelling on: dd//month//year"<<endl;
				cout<<"day:";
                 cin>>day;
                 cout<<"month:";
				cin>>month;
				cout<<"year:";
				cin>>year;
				cout<<"Travelling on:"<<day<<"/"<<month<<"/"<<year<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==1200)
				{
					cout<<"you have successfully made your booking"<<endl;
					cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
					cout<<"| ticket no: "<<ticket_no<<"           |"<<endl;
					cout<<"| route: Meru - Nairobi       |"<<endl;
					cout<<"| amount paid: "<<amount<<"           |"<<endl;
					cout<<"| travelling on: "<<day<<"/"<<month<<"/"<<year<<"   | "<<endl;
					cout<<"|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl;
					cout<<"message with the above receipt has been sent to your phone"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=1200){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;	
				}
				break;
			case 2:
				cout<<"The selected route is: Meru- Nakuru"<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==1500)
				{
					cout<<"you have successfully made your booking,thank you for believing in us"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=1500){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;
				 }
				 break;
			 case 3:
			 			cout<<"The selected route is: Meru- Mombasa"<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==2500)
				{
					cout<<"you have successfully made your booking,thank you for believing in us"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=2500){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;
				 }
				 case 4:
				 			cout<<"The selected route is: Meru- Kitale"<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==2200)
				{
					cout<<"you have successfully made your booking,thank you for believing in us"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=2200){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;
				 }
				 break;
				 case 5:
                cout<<"The selected route is: Meru- Kisumu"<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==3000)
				{
					cout<<"you have successfully made your booking,thank you for believing in us"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=3000){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;
				 }
				 break;
			 case 6:
			 	cout<<"The selected route is: Meru- Naivasha"<<endl;
				cout<<"kindly use the paybill 246576 to make payment"<<endl;
				cout<<"enter paybill: ";
				cin>>paybill;
				cout<<"Enter amount"<<endl;
				cin>>amount;
				cout<<"Enter your wallet pin";
				cin>>wallet;
				if(amount==1200)
				{
					cout<<"you have successfully made your booking,thank you for believing in us"<<endl;
					cout<<"press 99 to logout:";
					cin>>home;
				}
				 if(amount!=1200){
				cout<<"booking failed!!!  the ksh"<<amount<<"paid is not the specified route amount"<<endl;
				cout<<"press 99 to return home:";
					cin>>home;
				 }
				 	
				
			
		}
		system("cls");
	 }
 	void login(){
 		    cout<<"Enter phone number: ";
     	      cin>>no;
	 		cout<<"enter password: ";
	 		cin>>password;
	 	system("cls");
		
		cout<<"welcome"<<endl;
		
	 }
	void registerhere(){
		cout<<"-x-x-personal details-X-X-"<<endl;
		cout<<"Surname name: ";
		cin>>name;
		cout<<"First name: ";
		cin>>first_name;
		cout<<"Middle name: ";
		cin>>middle_name;
		cout<<"phone number: ";
		cin>>phone_number;
		cout<<"ID Number: ";
		cin>>id_no;
		cout<<"county: ";
		cin>>county;
		cout<<"--create account password--"<<endl;
		cout<<"Enter password: ";
		cin>>password;
		cout<<"confirm password: ";
		cin>>password;
		cout<<"press one to submit details"<<endl;
		cin>>one;
       if(one==1){
		   cout<<"registration successful"<<endl;  
	   }
	   system("cls");
		cout<<"Want to book your ticket now?, press 1, later? press 2"<<endl;
	   cin>>now;
	   if(now==1){
	   	cout<<"kindly book your ticket below"<<endl;   
	   }
	   system("cls");
	   if(now==2){
		   cout<<"Thank you for registering with us"<<endl;
		  cout<<"press 99 to return home:";
		   cin>>home; 
	   }
	   system("cls");
	} 		
 };
 int main(){
	system("color 1F");
 	customer customer1;
 	while(1||2){
     cout<<setw(61)<<"1. have an account?, Login here"<<endl;
	 cout<<setw(67)<<"2. Don't have account?, register here"<<endl;
	 cout<<setw(48)<<"3. forgot Password"<<endl;
	 cout<<setw(56)<<"4. Book your ticket online"<<endl;
 	int op;
	 cout<<setw(54)<<"Select option"<<endl;
	              cin>>op;
      system("cls");

	 switch(op){
	 	case 1:
	 		customer1.login();
	 		customer1.booking();
	 		break;
	 	case 2:
	 		customer1.registerhere();
	 		customer1.booking();
	         break;

	   system("cls");
	 		break;
         case 3:
         	cout<<"enter your email:";
         	cin>>customer1.email;
         	cout<<"your password has been sent to your email,press 99 to return home"<<endl;
         	cin>>customer1.home;
         	system("cls");
         	break;
         case 4:
			system("C:/Users/samuel/Desktop/MEB.HTML");
			cout<<"press 99 to return home"<<endl;
         	cin>>customer1.home;
         	system("cls");
         	break;
         default:
         	cout<<"Invalid choice,press 99 to return home"<<endl;
         	cin>>customer1.home;
			 system("cls");			 	 
	 }
	 }
 }
 
	 
 
