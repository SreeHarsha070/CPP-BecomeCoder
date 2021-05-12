#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	int res=1;
	int i=2;
	cout<<"Enter a and b :"<<endl;
	cin>>a>>b;
	while(1)
	{
		if(a%i==0 && b%i==0)
		{
			res=res*i;
			a=a/i;
			b=b/i;
		}
		else
		{
			i++;
		}
		if(a<i || b<i)
		{
			break;		
		}
	}
	cout<<"res="<<res*a*b;
	return 0;
}
