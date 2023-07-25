#include<bits/stdc++.h>


using namespace std;


int main(){
    //understanding lists 
    list<int> ls;

    ls.push_back(2);
    //difference b/w vec and list is list provide front operations aswell , for vec we needed to use insert operation
    //which takes a lit of time
    ls.emplace_back(3);
    ls.push_front(1);

    ls.emplace_front(2);
    //rest all function are same as vector
    
}