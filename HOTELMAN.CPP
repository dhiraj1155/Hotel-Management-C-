#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>

class hotel
{
  public:
  int mobile,rno;
  char name[10],gen;
  char bs[10],ds[10];

void accept()
{
 cout<<"\n Enter your name:";
 cin>>name;
 cout<<"\n Enter your mobile Number :";
 cin>>mobile;
 cout<<"\n Enter your Gender(m/f) :";
 cin>>gen;
 cout<<"\n Enter type of Room :";
 cin>>bs;
 cout<<"\ Enter Room price to have :";
 cin>>ds;
 }
void display()
{
 cout<<"\n Name :"<<name;
 cout<<"\n Mobile No :"<<mobile;
 cout<<"\n Gender :"<<gen;
 cout<<"\n Type of Room :"<<bs;
 cout<<"\n Room price to Have :"<<ds;
}
};

class second : public hotel
{
 public:

void accept1()
{
 cout<<"\n AC Rooms";
 cout<<"\n from 1-31";
 cout<<"\n Starting from Rooms 10000rs";
 cout<<"\n *****************************";
 cout<<"\n Non-AC Rooms";
 cout<<"\n from 32-45";
 cout<<"\n starting from Rooms 5000rs";
 cout<<"\n *****************************";
 cout<<"\n Luxury Rooms";
 cout<<"\n from 46-60";
 cout<<"\n Starting from Rooms 20000rs";
 cout<<"\n *****************************";
 cout<<"\n ordinary Rooms";
 cout<<"\n from 61-75";
 cout<<"\n starting from Rooms 2000rs";
 cout<<"\n *****************************";
 cout<<"\n Regular Rooms";
 cout<<"\n from 76-100";
 cout<<"\n starting from Rooms 1000rs";
 cout<<"\n *****************************";
 }
};
void main()
{
second s;
int ch,a[10],n,i,b,flag=0,acc,c,p;
char ch1,ch2,ch3;
do
{
 clrscr();
 cout<<"\n\n\t\t\t HOTEL FOUR SEASONS";
 cout<<"\n Main Menu :";
 cout<<"\n 1.Room Details:";
 cout<<"\n 2.Booking a Room:";
 cout<<"\n 3.Edit Records:";
 cout<<"\n 4.Room Canceling:";
 cout<<"\n 5.Exit";
 cout<<"\n Enter your Choice";
 cin>>ch;

switch(ch)
{
case 1:
      cout<<"\n \t \t\t --- Room Details---";
      s.accept();
      break;
case 2:
      cout<<"\n \t \t \t Booking a Room :";
      cout<<"\n \t Enter number of Rooms to reserve :";
      cin>>n;
      s.rno=1;
      for(i=0;i<n;i++)
      {
       s.accept();
       s.display();
       cout<<"\n \t \t --- Your Room is Booked ---";
       cout<<"\n Room no is :"<<s.rno;
       s.rno++;
       p=s.rno;
       if(s.mobile<=10||s.mobile>=60)
	cout<<"\n \t \t ---- Your Room is Booked ----";
       }
       break;
case 3:
      cout<<"\n \t \t \t Change your Rooms Details :";
      cout<<"\n Enter your Room number";
      cin>>c;
      s.rno--;
      for(i=0;i<n;i++)
      {
      if(s.rno==c)
      {
      flag=1;
      }
      else
      {
      flag=0;
      s.rno--;
      }
      }
      if(flag==1)
      {
       s.accept();
       cout<<"\n \t \t \t Your Room Information Has Ben Changed ";
       s.display();
      }
      else
      {
       cout<<"\n *** Wrong Room Number ***";
       s.rno--;
      }
      break;
case 4:
      cout<<"\n \t \t \t Room cancel:";
      cout<<"n Enter your Room number";
      cin>>b;
      p--;
      for(i=0;i<n;i++)
      {
      if(p==b)
      {
      flag=1;
      }
      else
      {
      flag=0;
      p--;
      }
      }
      if(flag==1)
      {
       cout<<"\n Your Room is Cancel.";
       cout<<"\n Enter your bank account number :";
       cin>>acc;
       cout<<"-*-*- Your Payment is Transferred in your Bank Account -*-*-";
      }
      else
      {
       cout<<"\n ** Wrong Room Number **";
       p--;
      }
      break;
case 5:
      exit(0);
}
cout<<"\n                                                  ";
cout<<"\n Do you want to enter another Choice(y/n)";
ch3=getche();
}
while(ch3=='y');
getch();
}
