#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    int num = 7780;
    string s = to_string(num);

    cout<<s.size();

    //digit count using log10

    int count = (int)log10(num) +1; //timecomplxeity is log10 N
    //armstrong number
  	// int num=n;
	// int val=0;
	// int count = (log10(n) +1);
	// if(n==1){
	// 	return true; 
	// }
	// while(n>0){
	// 	int ld = n%10;
	// 	val = val + pow(ld,count);
	// 	n=n/10;
	// }
	// if(val==num){
	// 	return true;
	// }
	// return false;

    //print all divisors
    // for(int i=1;i<=sqrt(n);i++){
	// 	if(n%i==0){
	// 		cout<<i;
	// 		if(n/i!=i){
	// 			cout<<(n/i);
	// 		}
	// 	}

	// }
	// find factors till sqrt of n and print both all the factors like 1 * 36 , 2* 18 and so on 
	//n/i check , checks if the n/i gives the same factor again like 36/6 gives 6 again
	// store them in a vector and sort them

	// other way of writing sqrt is doing i*i in the for loop as calling sqrt function also takes time

	//prime nos use the same logic as divisors and check if there are more than 2 divioors

	

}