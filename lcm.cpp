#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	if(a<b)
	{
		swap(a,b);
	}
	cout<<a<<"\t"<<b<<endl;
	for(i=a;i<=a*b;i+=a)
	{
		if(i%a==0 && i%b==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
