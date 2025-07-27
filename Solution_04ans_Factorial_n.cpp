//4) Write a recursive function to compute the factorial of a given number.
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    cout<<n;
    if(n>1){
        cout<< " * "<<" ";
    }
    else if(n==1){
        cout<<" = ";
    }
    return n*fact(n-1);
}
int main() {
	int n;
	cin>>n;
	cout<<"Factorial ans of "<< n<<"! : "<<fact(n)<<endl;
	return 0;
}
