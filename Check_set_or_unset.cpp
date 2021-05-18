#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,k;
	cin>>num;
	cin>>k;
	int count=0;
	if ((num >> (k - 1)) & 1)
        cout << "SET";
    else
        cout << "NOT SET";
}
