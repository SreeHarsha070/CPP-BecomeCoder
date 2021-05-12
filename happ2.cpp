#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r;
	int sum=0;
	int loop=0;
	cin>>n;
	while(n) //7
	{
		loop+=1;
		if(loop>1000)
		{
			break;
		}
		r=n%10; //7
		sum=sum+(r*r);
		n = n/10;  //
		if(n==0 && sum!=1)
		{
			n=sum;
			sum=0;
		}
	}
	if(n==0 && sum==1 )
	{
		cout<<"\nHappy\n";
	}
	else
	{
		cout<<"Not";
	}
}
