#include<iostream>
using namespace std;
int poss(int x)
{bool p=true,q=true;
int j=2,k=2;
	for(int i=1;i<=x/2;i++)
	{int temp=x-i;p=true;q=true;
		for(j=2;j<temp;j++)
		{if(temp%j==0)
		 { p=false;
		  exit;
		 } 
		 }
		 for( k=2;k<i;k++)
		{if(i%k==0)
		 { q=false;
		 exit;
		 }
		
		}
		if(p==true&&q==true)
		{cout<<x<<"="<<temp<<"+"<<i<<"\n";
		}
	
	}
}
int main()
{int n;
cout<<"input a number :";
cin>>n;
poss(n);
return 0;
}
