#include<bits/stdc++.h>

using namespace std;

int main(){
//	pair<int,int>arr[] ={{1,2},{3,4},{5,6}};//utility library	
//	cout<<arr[1].second;
	//vectors
	vector<int> v(5,20);
	v.push_back(1);
//	v.emplace_back(2);
//	
//	vector < pair<int,int> > vec;
//	
//	vec.push_back({1,2});
////	vec.emplace_back(3,4);
//	
//	cout<<vec[0].first;
//	vector<int>::iterator it=v.begin();
//auto it = v.begin();
//	it++;
//	cout<<*(it)<<" "<<endl;
//	cout<<v.back();

	for(auto it=v.begin();it != v.end();it++){
		cout<<*(it)<<" ";
	}
}
