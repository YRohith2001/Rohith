#include<iostream>
using namespace std;
int main()
{cout<<"input size of an array "<<endl;
int size;
cin>>size;
int a[size];
cout<<"Enter elements : ";
for(int i=0;i<size;i++)
{cin>>a[i];
}
int *p=a;
cout<<"you Entered :";
for(int i=0;i<size;i++)
{
	cout<<p[i]<<endl;
}
	return 0;
}
