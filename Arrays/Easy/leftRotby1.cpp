#include<bits/stdc++.h>


using namespace std;

int main(){
    //in place algo
    //we move the 1st element at the end and all the other element to thier left by 1 place 
    //to achieve it we store the first element in a temp and then start shifting the other elements 
    int arr[]= {1,2,3,4,5};
    // int temp= arr[0];
    // for(int i=1;i<5;i++){
    //     arr[i-1]= arr[i];
    // }
    // arr[4]= temp;

    // for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";

    //what is the space used in algo then o(N) and time complexity is o(N)
    //now solve for left rotate by d places
    //observation is that if the arr is rotated by the N number of times then it will come back to its same place
    //therefore we can use the formula d%N d being the places therefore we rotate only by d%N places
    //lets take the above array 
    //this is a brute force method
    vector<int> temp;
    int d =3,n=5;//nos of places to rotate by
    for(int i=0;i<d;i++)
        temp.push_back(arr[i]);
    for(int i= d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i =0;i<d;i++){
        arr[n-d+i]= temp[i];
    }
      for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    //optimal solution
    // reverse the arr till arr +d 
    //reverse the arr from arr+d to arr+n
    //then reverse the whole array 
    // TC--> O(d) + O(N-d) + O(N)--> O(2N)
    // SC --> O(1) no extra space used
    

}