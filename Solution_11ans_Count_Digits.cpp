//11) Write a recursive function to count the number of digits in a given integer.
#include <bits/stdc++.h>
using namespace std;
int count_digit(int n,int count){
    if(n==0){
        return count;
    }
   return count_digit(n/10,count+1);
}

int main() {
	int n;
	cin>>n;
	int count =0;
	if(n==0){
	    cout<<"It is a number of 1 digits "<<endl;
	}
	else{
	cout<<"It is a number of "<< count_digit(n,count)<<" digits "<<endl;
	}
}