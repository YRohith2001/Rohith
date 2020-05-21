#include<iostream>
#include<string.h>
#include<conio.h>
#include<cstdio>
#include<cstdlib>

using namespace std;
static int p=0;
class a{
	char busn[5],driver[10],arrival[5],from[10],depart[5],to[10],seat[8][4][10],age[8][4],gender[8][4];
public:
	void install();
	void allotment();
	void empty();
	void show();
	void avail();
	void Ticket();
	void availability();
	void position(int);
}
bus[10];

void vline(char ch)
{for(int i=100;i>0;i--)
 {cout<<ch;
 }
}
void a::Ticket()
{int n;int a ;
	char number[5];char name[5];
	cout<<"\nEnter Bus No.";
	e:
	cin>>number;
	cout<<"\nEnter passenger's seat N0.";
	cin>>a;
	for(n=0;n<=p;n++)
	{if(strcmp(bus[n].busn,number)==0)
	 {break;
	 }
	}
		while(n<=p)
	{
	 int i=a/4;int j=a%4-1;
	 	vline('*');
	cout<<"Bus No:\t"<<bus[n].busn
	 <<"\nDriver:\t"<<bus[n].driver<<"\tArrival Time:\t"
	 <<bus[n].arrival<<"\tDeparture Time \t"<<bus[n].depart
	 <<"\tFrom:\t"<<bus[n].from<<"\t\tTo: \t\t"<<
	 bus[n].to<<"\n";
	 vline('*');
	 vline('_');
	 cout.width(4);
 	cout.fill(' ');
	 cout<<"\nName:"<<bus[n].seat[i][j];
	 cout<<"\nAge:"<<bus[n].age[i][j];
	 	 cout<<"\nGender:"<<bus[n].gender[i][j]<<endl;;
	 	  vline('*');
	 vline('_');
	   
	break;
	}
	if(n>p)
	{cout<<"\nEnter correct Bus No:";
	goto e;
	}
	
	
}
void a::availability()
{
	int n;
	char number[5];
	cout<<"Enter Bus No.";
	r:
	cin>>number;
	for(n=0;n<=p;n++)
	{if(strcmp(bus[n].busn,number)==0)
	 {break;
	 }
	}
	while(n<=p)
	{
	 
	 int a=0,b=0;
	 for(int i=0;i<8;i++)
	 {for(int j=0;j<4;j++)
	  {
	   if(strcmp(bus[n].seat[i][j],"Empty")!=0)
	   {a++;
	   }
	   else
	   {b++;
	   }
	  }
	 }
	 	cout<<"No of seats available :"<<b;
	cout<<"\nNo of reaserved seats:"<<a;
	 
	 break;
	}

	if(n>p)
	{cout<<"\nEnter correct Bus No:";
	goto r;
	}
	
}

void a::install()
{
	cout<<"Enter Bus NO. :";
	cin>>bus[p].busn;
	cout<<"\nEnter Driver Name:";
	cin>>bus[p].driver;
	cout<<"\nEnter Arrival Time:";
	cin>>bus[p].arrival;
	cout<<"\nDepature Time:";
	cin>>bus[p].depart;
	cout<<"\n From:\t\t\t";
	cin>>bus[p].from;
	cout<<"\nTo:\t\t\t";
	cin>>bus[p].to;
	bus[p].empty();
	p++;
}
void a::allotment(){
	int seat; 
	int b=seat;
	char number[5];
	top:
		cout<<"Bus NO:";
		cin>>number;
		int n;
		for(n=0;n<=p;n++)
		{if(strcmp(bus[n].busn,number)==0)
		 {break;
		 }
		}
		while(n<=p)
		{
			cout<<"\nSeat Number:";
			cin>>seat;
			if(seat>32)
			{cout<<"\nThere are only 32 seats in this bus";
			}
			else
			{
				if(strcmp(bus[n].seat[seat/4][seat%4-1],"Empty")==0)
				{cout<<"\nEnter Passenger's Name :";
				 cin>>bus[n].seat[seat/4][seat%4-1];
				 cin.sync();
				 cout<<"\nEnter Passenger's Age :";
				 cin>>bus[n].age[seat/4][seat%4-1];
				 cin.sync();
				 cout<<"\nEnter Passenger's Gender:";
				 cin>>bus[n].gender[seat/4][seat%4-1];
				 cin.sync();
				 
				 break;
				}
				else
				{cout<<"The Seat is already reaerved.\n";
				}
			}
			
			}
			if(n>p)
			{cout<<"Enter correct Bus NO.\n";
			 goto top;
		}
}
void a::empty()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
		{strcpy(bus[p].seat[i][j],"Empty");
		}
	}
}
void a::show()
{
	int n;
	char number[5];
	cout<<"Enter Bus No.";
	cin>>number;
	for(n=0;n<=p;n++)
	{if(strcmp(bus[n].busn,number)==0)
	 {break;
	 }
	}
	while(n<=p)
	{vline('*');
	 cout<<"Bus No:\t"<<bus[n].busn
	 <<"\nDriver:\t"<<bus[n].driver<<"\tArrival Time:\t"
	 <<bus[n].arrival<<"\tDeparture Time \t"<<bus[n].depart
	 <<"\tFrom:\t"<<bus[n].from<<"\t\tTo: \t\t"<<
	 bus[n].to<<"\n";
	 vline('*');
	 bus[0].position(n);
	 int a=1;
	 for(int i=0;i<8;i++)
	 {for(int j=0;j<4;j++)
	  {
	   if(strcmp(bus[n].seat[i][j],"Empty")!=0)
	   {cout<<"\nThe seat no "<<(a)<<" is reserved for "<<bus[n].seat[i][j]<<".";
	   }a++;
	  }
	 }
	 break;
	}
	if(n>p)
	{cout<<"\nEnter correct Bus No:";
	}
}
void a::position(int l)
{int s=0;p=0;
for(int i=0;i<8;i++)
{cout<<"\n";
 for(int j=0;j<4;j++)
 {s++;
 if(strcmp(bus[l].seat[i][j],"Empty")==0)
 {
 	cout.width(5);
 	cout.fill(' ');
 	cout<<s<<".";
 	cout.width(10);
 	cout.fill(' ');
 	cout<<bus[l].seat[i][j];
 	p++;
 }
 else
 {
 	cout.width(5);
 	cout.fill(' ');
 	cout<<s<<".";
 	cout.width(10);
 	cout.fill(' ');
 	 	cout<<bus[l].seat[i][j];
 }
 }
}
cout<<"\n\nThere are "<<p<<" seats empty in Bus No. "<<bus[l].busn;
}
void a::avail()
{
	for(int n=0;n<p;n++)
	{vline('*');
	cout<<"Bus No:\t"<<bus[n].busn
	 <<"\nDriver:\t"<<bus[n].driver<<"\tArrival Time:\t"
	 <<bus[n].arrival<<"\tDeparture Time \t"<<bus[n].depart
	 <<"\tFrom:\t"<<bus[n].from<<"\t\tTo: \t\t"<<
	 bus[n].to<<"\n";
	 vline('*');
	 vline('_');
	 
	}
}
int main()
{//system("cls");
 int w;
 while(10>2)
 {
 	cout<<"\n\n\n\n\n";
 	cout<<"\t\t\t1.Install\n\t\t\t"
	<<"2.Reservation\n\t\t\t"
 	<<"3.Show seating in a Bus\n\t\t\t"
 	<<"4.Buses Available.\n\t\t\t"
 	<<"5.No.of seats available in a particular bus \n\t\t\t"
    <<"6.Ticket of reserved passenger\n\t\t\t"
 	<<"7.Exit\n\t\t\t";
 	cout<<"Enter your choice :";
 	
 	cin>>w;
 	switch(w)
 	{
 		case 1:
 			bus[p].install();
 			break;
 		case 2:
 			bus[p].allotment();
 			break;
 		case 3:
 			bus[0].show();
 			break;
 		case 4:
 			bus[0].avail();
 			break;
 		case 5:
 			bus[0].availability();
 			break;
 		case 6:
 			bus[0].Ticket();
 			
 			break;
 		case 7:
 			exit(0);
 			break;
	 }
 }
 return 0;
}
