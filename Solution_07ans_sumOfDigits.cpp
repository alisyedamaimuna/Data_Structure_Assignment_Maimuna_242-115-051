//7) Write a recursive function to find the sum of the digits of a number.
#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+digit_sum(n/10);
}
int main() {
	int n;
	cin>>n;
	cout<<"Sum of digits of "<<n<< " : "<<digit_sum(n)<<endl;
	return 0;
}
