#include<bits/stdc++.h>


using namespace std;
int secondLargest(vector<int> & a,int n){
    int largest= a[0];
    int sLargest=-1;
    for(int i=1;i<n;i++){
        if(a[i] > largest){
            sLargest= largest;
            largest=a[i];
        }
        else if (a[i]<largest && a[i]> sLargest){
                sLargest= a[i];
            
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> & a, int n){
    int smallest =a[0];
    int ssmallest =INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest= a[i];
        }
        else if (a[i] > smallest && a[i]< ssmallest){
            ssmallest= a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int sLargest = secondLargest(a,n);
    int sSmallest =secondSmallest(a,n);
    return {sLargest,sSmallest};
}
int main(){
    int arr[] = {1,2,4,7,7,5};
    //brute method is to sort it then traverse from the 2nd last index then chcek if eql , if it is then --,then check
    // nlogn +n

    //better method without sorting
    //find largest using for loop
    //then declare variable secondLargest=-1
    //traverse the array and keep checks for elemnet greater than second largest and if they are smaller than the largest 
    // in this way we'll get 5 as the answer
    //N + N ==> O(2N)

    //optimal approach
    // keep 2 vars largest and second largest , traverse the array and then check if a[i] is larger than 
    //my largest then obviously second laregts = largest and so on 

    



}