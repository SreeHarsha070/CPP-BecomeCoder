#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r[100][100];
	int n;
	int i,j;
	cout<<"\nEnter Number : ";
	cin>>n;
	for(i=1,j=1;i<=n,j<=n;i++,j++)
	{
		
		r[i][j]=0;
	}
	for(i=1;i<=n;i++)
	{
		r[i][1]=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)	
		{
			r[i][j]=r[i-1][j-1]+r[i-1][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			cout<<r[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
}
