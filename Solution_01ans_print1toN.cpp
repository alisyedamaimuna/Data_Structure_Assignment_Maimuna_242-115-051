//1) Write a recursive function to print numbers from 1 to N.
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main() {
	int n;
	cin>>n;
	print(n);
	return 0;
}
