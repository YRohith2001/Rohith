#include<iostream>
using namespace std;
class time{public:
	int h;
	int m;
	int s;
};
int main()
{
	time p;
	cout<<"hours?"<<endl;
	cin>>p.h;
	cout<<"Minutes?"<<endl;
	cin>>p.m;
	cout<<"seconds?"<<endl;
	cin>>p.s;
	cout<<"Time is :"<<p.h<<":"<<p.m<<":"<<p.s<<endl;
	cout<<"Time in total seconds :"<<p.h*60*60+p.m*60+p.s<<endl;
}
