#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int count=1;
	cout<<"Enter Number : "<<endl;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"Not a Prime Number"<<endl;
			count=0;
			break;
		}
	}
	if(count!=0)
		cout<<"Prime Number";
	/*
	Method 2 :
	for(int i=2;i<=(n/2)+1;i++)
	{
		if(n%i==0)
		{
			cout<<"Not a Prime Number"<<endl;
			count=0;
			break;
		}
	}
	if(count!=0)
		cout<<"Prime Number";
	*/
	
	
	// Method 3
	/*
	int n;
	int count=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
		cout<<"Prime Number"<<endl;
	else
		cout<<"Not a Prime"<<endl;
	
	*/
	
	return 0;
}

