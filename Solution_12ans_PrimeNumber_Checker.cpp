//12) Write a recursive function to check if a number is prime.
#include <bits/stdc++.h>
using namespace std;
bool prime(int n,int i){

   if(n<=1) return false;
   else if(n==2) return true;
   else if(n%i==0) return false;
   else if(i*i>n) return true;
   else return prime(n,i+1);
}
int main() {
	int n,i=2;
	cin>>n;
   bool result = prime(n, i);
	if(result){
	    cout<<n<<" is a prime Number"<<endl;
	}
	else cout<< n<<" is not a prime number"<<endl;
}