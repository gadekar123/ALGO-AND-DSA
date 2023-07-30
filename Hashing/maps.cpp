#include<bits/stdc++.h>


using namespace std;

int main(){
    //hasing using maps
    int n;
    cout<<"enter nos of elemnts in the array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"enter array elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    //precompute
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    
    // int q;
    // cout<<"enter nos of queries\n";
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     //fetch
    //     cout<<mp[num]<<endl;
    // }
    //highest and lowest frequency element in the map
    int l=9999,h=0;
    for(auto it: mp){
        if(it.second <l){
            l=it.second;
            h=it.first;
        }
    }
    cout<<"the lowest frequency element is: "<<h;
}