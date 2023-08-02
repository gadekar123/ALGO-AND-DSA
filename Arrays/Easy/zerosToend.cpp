#include<bits/stdc++.h>


using namespace std;

int main(){
    //move all zeroes to end
    //brute force is first iterate and store all the non zeroes in a vector
    //then iterate again and put the non zeroes in the order in the og array
    //then make all the remaining places as 0
    // TC for this is o(n) + o(x) + o(n-x) = o(2n)
    // SC --> O(N) for the temp list wrrst case where there is no zeroes or else O(x)

    //optimal solution
    // first find the first zero in the array by using a j pointer set to -1
    // if j is still -1 then no zeroes in the arr and then return
    //else start a loop from j+1 and when u find a non zero number swap with jth index and move j
    //j is always at a zero  

    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    int n = 10;
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j= i;
            break;
        }

    }
    if(j==-1)
        cout<<"no zeroes in the array"<<endl;
    
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


// inplace and stable movement
//TC --> O(x) + O(N-x) the reamining length , x is the length till the first zero
// SC --> O(N) , no extra space used


}