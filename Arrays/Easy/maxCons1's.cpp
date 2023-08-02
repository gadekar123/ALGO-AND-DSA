#include<bits/stdc++.h>

using namespace std;

int main(){
    //maximum consecutive 1's
    //traverse through the array, keep 2 variables 
    int arr[] = {1,1,0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max=0;int temp=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            max++;
        }
        else if(max!=0){
            if(max > temp){
                temp=max;
                max=0;
            }
            max=0;
        }
    }
    if(max > temp){
        cout<<max;
    }
    else{
        cout<<temp;
    }
}