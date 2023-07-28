#include<bits/stdc++.h>

using namespace std;

int main(){
    //priority queue
    priority_queue<int> pq; //to maintain max heap

    pq.push(5);
    pq.push(1);
    pq.push(6);
    //the largest elemnt is given the priority 
    //queue=> {6,5,1} not stored in linear fashion , inside a tree is maintained

    cout<<pq.top();  //prints 6 
    
    //size swap empty functions are the same as others

    //minimum heap

    priority_queue<int ,vector<int>,greater<int>>pq; // to maintain min heap

    pq.push(5);
    pq.push(1);
    pq.push(3);
    //{1,3,5} lowest value will be at the top pointer
    cout<<pq.top();// prints 1

    // time complexities
    //push--> O(logn)
    //top-->O(1)
    //pop-->O(logn)


}