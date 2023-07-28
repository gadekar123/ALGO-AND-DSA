#include<bits/stdc++.h>

using namespace std;
    bool comp(pair<int,int> p1,pair<int,int> p2){
        if(p1.second< p2.second) return true;
        if(p1.second>p2.second) return false;
        if(p1.first >p2.first) return true;
        return false;

    }
int main(){
    // int arr[] = {5,2,3,4,1};
    // sort(arr,arr+5);

    // cout<<arr[0];

    //for vector 
    vector<int> v;
    sort(v.begin(),v.end());

    // sort(arr,arr+5, greater<int>());//auto sorts in descending order

    pair<int,int> arr[] ={{1,2},{2,1},{4,1}};

    sort(arr,arr+3,comp); //comp is a self written comparator

    //builtin pop count
    int num =7;

    int cnt = __builtin_popcount(num); //provides nos of set bits that is 3 in case of 7

    //long long then do __builtin_popcountll(num)

    string s ="123";
    sort(s.begin(),s.end());
    do{
        cout<< s << endl;
    }while(next_permutation(s.begin(),s.end()));
    //the catch is if u dont provide the sorted string it will stop at few permutations

    // int maxel= *max_element(a,a+n);         



}