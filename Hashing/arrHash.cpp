#include<bits/stdc++.h>


using namespace std;

int main(){
    char arr[] = "aasdjklm";
    int n=(sizeof(arr)/sizeof(arr[0]));

    //create hash array
    int hashArr[26]={0};
    for(int i=0;i<n;i++){
        hashArr[arr[i]-'a']++;
    }
    cout<<hashArr[0];

}