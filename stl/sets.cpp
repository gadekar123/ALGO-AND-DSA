#include<bits/stdc++.h>

using namespace std;

int main(){
    //sets stores everything in sorted order and stores unique elements 
    set<int> st;
    st.insert(1);
    st.insert(4);
    st.insert(2);
    //tree is maintained it is not linear


    auto it =st.find(3);// returns an iterator pointing to 3 

    // auto it = st.find(6);// element not present so it will point right after the end;

    // st.erase(it); //deletes 5 and maintains the sorted order. to erase give element or the iterator

    int cnt = st.count(1); // either 1 or 0 as quinique elements are present

    auto it1 = st.find(1);
    auto it2 = st.find(3);

    // st.erase(it1,it2); //erases 1 and 2

    // auto ind = st.lower_bound(4); //
    vector<int> v={1,2,3,4,5};

    int ind = lower_bound(v.begin(),v.end(),3)- v.begin();

    cout<<ind;
}