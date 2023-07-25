#include<bits/stdc++.h>

using namespace std;

int main(){
	pair<int,int>arr[] ={{1,2},{3,4},{5,6}};//utility library	
	cout<<arr[1].second;
	//vectors
	vector<int> v(5,20);
	v.push_back(1);
	v.emplace_back(2);
	
	vector < pair<int,int> > vec;
	
	vec.push_back({1,2});
//	vec.emplace_back(3,4);
	
	cout<<vec[0].first;
	vector<int>::iterator it=v.begin();
auto it = v.begin();
	it++;
	cout<<*(it)<<" "<<endl;
	cout<<v.back();

	for( auto it=v.begin();it != v.end();it++){
		cout<<*(it)<<" ";
	}

	//insert function
	vector<int> v(2,100); //{100,100}
	v.insert(v.begin(),300); //{300,100,100}
	v.insert(v.begin() +1,2,10); //{300,10,10,100,100}
	v.erase(v.begin()+1);
	v.erase(v.begin() +2,v.begin() +4);

	cout<<v.size(); // size of the vector
	v.pop_back();  //pops from the back

	//v1-> 1,2,3
	//v2-> 4,5,6
	vector<int> v1(2,50);
	vector<int> v2(2,100);
	v1.swap(v2);//swaps v1 and v2
	v.clear(); //erases the entire vector

	cout<<v.empty();  // boolean function to check if empty or not
}
