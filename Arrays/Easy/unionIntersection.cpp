#include<bits/stdc++.h>


using namespace std;

int main(){
    //merge two sorted arrays
    //brute force approach is to use set data structure

    //optimal solution
    //take advantage of the arrays being sorted, use the logic of 2 pointers same on the lines of merge sort

// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     int n1= a.size();
//     int n2= b.size();
//     vector<int> unionArray;

//     int i=0;
//     int j=0;
        //1,2,3,4
        //2,5,6
//     while(i<n1 && j<n2){
//         if(a[i]<=b[j]){
//             if(unionArray.size()==0 || unionArray.back()!=a[i] ){
//                 unionArray.push_back(a[i]);
//             }
//             i++;
//         }else{
//             if(unionArray.size()==0 || unionArray.back()!=b[j]){
//                 unionArray.push_back(b[j]);
//             }
//             j++;
//         }   
//     }
//     while(j<n2){
//         if(unionArray.size()==0 || unionArray.back()!=b[j]){
//                 unionArray.push_back(b[j]);
//         }
//         j++;
//     }
//     while(i<n1){
//         if(unionArray.size()==0 || unionArray.back()!=a[i] ){
//                 unionArray.push_back(a[i]);
//         }
//         i++;      
//     }

//     return unionArray;
// }

// TC --> O(n1 + n2)
// SC --> O(n1 + n2) just to return not to solve the algorithm

//intersection
// take 2 pointer i and j . then traverse thru both the arrays
//logic-->bruteforce approach
//use visited array and use nested loops to get the answer

//optimal solution
// 2 pointer approach. Since sorted ,if a[i]==b[j] then i++ and j++
// if a[i] < b[i] i++
//if a[i] > b[j] then j++

}
//optimal code
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	int i=0;
    int j=0;
    vector<int>intersectionArray;
    while(i<n && j<m){
        if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            intersectionArray.push_back(a[i]);
            j++;
            i++;
        }
    }

    return intersectionArray;
}
// TC --> O(n1+n2)
// SC --> O(x) to store the intersection