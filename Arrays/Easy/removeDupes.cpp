#include<bits/stdc++.h>


using namespace std;

int main(){
    //bruteforce
    // we need unique elements , set ds comes to mind
    // insert element into set by using st.insert(arr[i]) takes NlogN
    //set takes extra space of O(N)

    //optimal solution is a 2 pointer method
    // keep i and j ,j at 1 then 
    int i=0;
    int arr[]= {1,1,2,2,3};
    for(int j=1;j<sizeof(arr)/sizeof(arr[0]);j++){
        if(arr[i]!= arr[j]){
            arr[i+1]=arr[j];
            i++;
        }

    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<i;
}