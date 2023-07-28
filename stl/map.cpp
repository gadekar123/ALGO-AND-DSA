#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int>mpp;

    map<pair<int,int>,int>mpp1;

    map <int,pair<int,int>> mpp2;

    //ways to insert

    mpp[1]=2;

    mpp.insert({3, 4});

    mpp1[{2,3}] = 10;

    for (auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //stored in a sorted order of keys

    cout<<mpp[1];
    cout<<mpp[5];//will give 0 or null

    auto it1 = mpp.find(3);

    cout <<*(it1).second;

    //multimaps
    //same as map but duplicate keys can be used 
    //only map[key] cannot be used

    //unordered map 
    //same as set and unordered set difference
    //unique but sorted
    //works in constant time and worst case big-0h N

    




}