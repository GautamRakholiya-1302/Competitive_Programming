#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n;
		cout<<"enter the first element size"<<endl;
		cin>>n;
		vector<int>arr(n);
		cout<<"Enter the all element"<<endl;

		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			arr[i]=temp;
		}
		int m;
		cout<<"Enter the second elemtn size"<<endl;
		cin>>m;
		vector<int>arr1(m);
		cout<<"Entrer the all elemetn"<<endl;
		for(int i=0;i<m;i++)
		{
			int temp;
			cin>>temp;
			arr1[i]=temp;
		}
		sort(arr.begin(),arr.end());
		sort(arr1.begin(),arr1.end());
		//vector<int>ans;
		//set<int>s;

		set<int>s;

		for(int i=0;i<n;i++)
		{
			s.insert(arr[i]);
		}
		for(int i=0;i<m;i++)
		{
			s.insert(arr1[i]);
		}
		vector<int> ans(s.begin(),s.end());
		cout<<"Here are the result"<<endl;
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<endl;
		}

}

