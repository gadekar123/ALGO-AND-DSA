#include<bits/stdc++.h>

using namespace std;

int main(){
    //arr[] = [1,2,4,5]
    //find the missing number in a sorted array
    //bruteforce--> traverse in a linear manner 
    // check the index and the key 
    int arr[] = {1,2,4,5};
    int n = 5;
    //better solution is using hashing

    int hash[n+1]={0};

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(hash[i]==0)
            cout<<i<<" ";
    }

    //the above soln gave us tc of o(2n) and sc of o(n)
    //now optimise the sc

    //optimal solution 
    //can have 2 optimal solution
    //sum and xor
    //sum approach is find the sum of n numbers then sum the array . The difference b/w the 2 is the answer
    // if difference is 0 then 0 is the missing number considering 0 is included in the array
    //xor approach is more optimal then the sum approach 
    //one property of xor is a xor a is always 0 (a^a)
     

}