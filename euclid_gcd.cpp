#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two values : "<<endl;
	cin>>a>>b;
	while(a!=0)
	{
		if(a<b)
			swap(a,b);
		a=a%b;
		
	}
	cout<<"GCD is "<<b<<endl;

	return 0;
}
