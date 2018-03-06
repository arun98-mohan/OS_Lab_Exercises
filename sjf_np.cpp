//Shortest job First - Non Pre-emptive
#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
		const pair<int,int> &b)
{
	return (a.second < b.second);
}

int main()
{
	vector <pair<int,int> > v;
	pair<int,int> p;
	vector <pair<int,int> >::iterator i;
	char flag='y';
	while(flag!='n'&&flag!='N')
	{
		int a,b;
		cout<<"Enter Process ID: ";
		cin>>a;
		cout<<"\nEnter Process Burst Time: ";
		cin>>b;
		p.first=a;
		p.second=b;
		v.push_back(p);
		cout<<"\nEnter Y to continue, N to stop adding processes";
		cin>>flag;
	}

	sort(v.begin(),v.end(),sortbysec);

	cout<<"\nThe Order of Exec is"<<endl;
	cout<<"Process\t"<<"Burst_Time"<<endl;
	for(i=v.begin();i!=v.end();i++)
		cout<<i->first<<'\t'<<i->second<<endl;
	return 0;
}
