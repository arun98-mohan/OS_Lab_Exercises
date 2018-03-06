#include<vector>
#include<string>
#include<iostream>
#include<utility>
#include<string>
using namespace std;
//First in First Out
int main()
{
	vector <pair<int,int> > v1;
	vector <pair<int,int> >::iterator i1;
	pair<int,int> p1;
	/*p1.first=5;
	  p1.second=10;
	  v1.push_back(p1);
	  i1=v1.begin();
	  cout<<(i1->first);
	 */
	int pname,burst;
	int n;
	cout<<"\nEnter Number of Processes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Process ID(integer): ";
		cin>>pname;
		cout<<"\nEnter Process Burst Time: ";
		cin>>burst;
		p1.first=pname;
		p1.second=burst;
		v1.push_back(p1);
	}
	cout<<"\nThe order of Execution is: "<<endl;
	for(i1=v1.begin();i1!=v1.end();i1++)
		cout<<i1->first<<'\t'<<i1->second<<endl;
	return 0;
}

