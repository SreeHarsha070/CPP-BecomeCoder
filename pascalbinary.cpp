#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=1,b=0,i=1;
	int c=0;
	cout<<"\nEnter n:";
	cin>>n;
	while(i<=n)
	{
		c=(a+b)^i;
		cout<<c<<endl;
		b=1;
		i++;
	}
}

