#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); //{1,2,4}

    q.back() +=5;

    cout<<q.back(); // prints 9

    cout<<q.front(); // prints the first element inserted or pushed

    q.pop(); //pops the front

    //size swap and empty are same as stack
    
}