//ROUND ROBIN
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Round Robin
//Inputs -> Time Quantum
//Inputs -> Process ID, Burst Time

int check(vector <pair<int,int> > v)
{
	vector <pair<int,int> >::iterator i;
	for(i=v.begin();i!=v.end();i++)
	{
		if(i->second>0)
			return 1; //Returns 1 if any process is not completed
	}
	return 0; //Returns 0 if all processes are completed
}

int main()
{
	int tq,counter=0;
	cout<<"\nEnter Time Quantum";
	cin>>tq;
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
	cout<<"###EXECUTING####"<<endl;
	while(check(v)!=0)
	{
		for(i=v.begin();i!=v.end();i++)
		{
			//counter+=tq;
			int temp;
			if(i->second>0)
			{
				counter+=tq; //Counter to keep track of the time (Remember: Gantt Chart)
				temp=(i->second)-tq;
				if(temp>=0)	//If the Burst Time Remaining is more than zero
					cout<<"Process: "<<i->first<<"\tBurst Remaining: "<<(i->second)-tq<<"\tTIME: "<<counter<<endl;
				else
				{
					counter=counter+temp; //Adding it back because at times, not the whole quantum is used, hence remaining time should not be wasted
					cout<<"Process: "<<i->first<<"\tBurst Remaining: 0"<<"\tTIME: "<<counter<<endl; //Printing Burst Time Remaining as Zero

				}	
			}
			i->second-=tq;
		}
	}
	return 0;
}
