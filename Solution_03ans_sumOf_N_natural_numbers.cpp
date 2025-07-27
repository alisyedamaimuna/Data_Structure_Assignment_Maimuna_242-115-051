//3) Write a recursive function to find the sum of the first N natural numbers.
#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main() {
	int n;
	cin>>n;
	cout<<"Sum is : "<<sum(n)<<endl;
	return 0;
} 
