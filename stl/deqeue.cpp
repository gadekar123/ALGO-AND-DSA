#include<bits/stdc++.h>


using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(5);

    dq.pop_back();
    dq.pop_front();

    dq.back(); // access last elemnt without removing it
    dq.front();
    //rest are same as vector
    
}