#include<bits/stdc++.h>

using namespace std;



int main(){
//	for(int i=0;i<5;i++){
//		for(int j=0;j<i;j++){
//			cout<<" ";
//		}
//		for(int k=0;k<2*5-(2*i+1);k++){
//			cout<<"*";
//		}
//		for(int j=0;j<i;j++){
//			cout<<" ";
//		}		
//		cout<<endl;
//	}
//
//	for(int i=0;i<=2*5-1;i++){
//		int stars =i;
//		if(i>5) stars = 2* 5 -i;
//		for(int j=1;j<=stars;j++)
//			cout<<"*";
//		cout<<endl;
//	}
//	for(int i=0;i<5;i++){
//		int value=1;
//		if(i%2==0) value=1;
//		else value =0;
//		for(int j=0;j<=i;j++){
//			cout<<value;
//			value=1-value;
//		}
//		cout<<endl;
//	}
//	for(int i=1;i<=4;i++){
//		//num
//		//space
//		//num
//		for(int j=1;j<=i;j++){
//			cout<<j;
//		}
//		for(int k=1;k<=2*4 -(2 *i);k++){
//			cout<<" ";
//		}
//		for(int j=i;j>=1;j--){
//			cout<<j;
//		}
//		cout<<endl;		
//	}
	
//	for(int i=0;i<5;i++){
//	
//		for(char ch='A';ch<='A' +i;ch++){
//			cout<<ch<<" ";
//			
//		}
//		
//		cout<<endl;
//	}
//
	
//	for(int i=0;i<5;i++){
//		for(int j=0;j<(5-i-1);j++){
//			cout<<" ";
//		}
//		char ch='A';
//		int breakpoint= (2*i+1)/2;
//		for(int k=0;k<2 *i +1;k++){
//			cout<<ch;
//			if(k<breakpoint)ch++;
//			else ch--;
//		}
//		for(int j=0;j<(5-i-1);j++){
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//    char ch='E';
//	for(int i=0;i<5;i++){
//		
//		for(char j=ch;j<=ch+i;j++){
//			cout<<j;
//		}
//		ch=ch-1;
//		cout<<endl;
//	}

//	for(int i=0;i<5;i++){
//		for(int j=0;j<(5-i);j++){
//			cout<<"*";
//		}
//		for(int k=0;k<stars;k++){
//			cout<<" ";
//		}
//		for(int j=0;j<(5-i);j++){
//			cout<<"*";
//		}
//		stars+=2;
//		cout<<endl;
//	}
	int spaces=2*5-2;
	for(int i=0;i<10;i++){
		int stars=i;
		if(stars>4) stars = 2* 5-i-1; 
		for(int j=0;j<=stars;j++){
			cout<<"*";
		}
		for(int k=0;k<spaces;k++){
			cout<<" ";
		}
		for(int j=0;j<=stars;j++){
			cout<<"*";
		}
		
		cout<<endl;
		if(i<5){
			spaces+=2;
		}
		else{
			spaces-=2;
		}
	}
	
	
}
