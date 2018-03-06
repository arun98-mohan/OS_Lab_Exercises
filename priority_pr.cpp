#include<bits/stdc++.h>
using namespace std;
//PRIORITY Preemptive

//The jobs will be started to carry out as and when the jobs arrive
//PID,Burst TIME,Priority
#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<pair<int,int>,int> &a,
		const pair<pair<int,int>,int> &b)
{
	return (a.second < b.second);
}

int main()
{
	vector <pair<pair<int,int>,int> > v;
	pair<pair<int,int>,int> p;
	vector <pair<pair<int,int>,int> >::iterator i;
	char flag='y';
	while(flag!='n'&&flag!='N')
	{
		int a,b,c;
		cout<<"Enter Process ID: ";
		cin>>a;
		cout<<"\nEnter Process Burst Time: ";
		cin>>b;
		cout<<"\nEnter Process Priority: ";
		cin>>c;
		p.first.first=a;
		p.first.second=b;
		p.second=c;
		v.push_back(p);
		for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
			if(i->first.second<=0) v.erase(i);
		sort(v.begin(),v.end(),sortbysec); //Sorting Based on Burst Time
		i=v.begin();
		i->first.second-=1; //Reducing the Shortest of all jobs's Burst Time by 1
		for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
			if(i->first.second<=0) v.erase(i);		
		cout<<"\nThe Order of Exec is"<<endl;
		cout<<"Process\t"<<"Burst_Time\tPRIORITY"<<endl;
		for(i=v.begin();i!=v.end();i++)
			cout<<i->first.first<<'\t'<<i->first.second<<'\t'<<i->second<<endl;		
		cout<<"\nEnter Y to continue, N to stop adding processes";
		cin>>flag;
	}
	for(i=v.begin();i!=v.end();i++) //Removing Completed Jobs
		if(i->first.second<=0) v.erase(i);
	cout<<"\nThe Order of Exec is"<<endl;
	cout<<"Process\t"<<"Burst_Time\tPRIORITY"<<endl;
	for(i=v.begin();i!=v.end();i++)
		cout<<i->first.first<<'\t'<<i->first.second<<'\t'<<i->second<<endl;	

	return 0;
}
