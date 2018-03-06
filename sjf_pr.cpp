#include<bits/stdc++.h>
using namespace std;
//Shortest Job First Preemptive

//The jobs will be started to carry out as and when the jobs arrive

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
		for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
			if(i->second<=0) v.erase(i);
		sort(v.begin(),v.end(),sortbysec); //Sorting Based on Burst Time
		i=v.begin();
		i->second-=1; //Reducing the Shortest of all jobs's Burst Time by 1
		for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
			if(i->second<=0) v.erase(i);		
		cout<<"\nThe Order of Exec is"<<endl;
		cout<<"Process\t"<<"Burst_Time"<<endl;
		for(i=v.begin();i!=v.end();i++)
			cout<<i->first<<'\t'<<i->second<<endl;		
		cout<<"\nEnter Y to continue, N to stop adding processes";
		cin>>flag;
	}
	for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
		if(i->second<=0) v.erase(i);
	cout<<"\nThe Order of Exec is"<<endl;
	cout<<"Process\t"<<"Burst_Time"<<endl;
	for(i=v.begin();i!=v.end();i++)
		cout<<i->first<<'\t'<<i->second<<endl;


	return 0;
}
