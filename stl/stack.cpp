#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);
    cout<<st.top();
    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    cout<<st.empty(); //false

    stack <int>st1,st2;
    st1.swap(st2);

    //all operation are O(1) time complexity
    
}