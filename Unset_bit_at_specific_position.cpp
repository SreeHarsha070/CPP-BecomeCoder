#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,k;
	cin>>num;
	cin>>k;
	int res;
	res=(num)^((k-1)<<1);
	cout<<res;
}
