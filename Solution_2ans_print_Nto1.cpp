//2) Write a recursive function to print numbers from N to 1.
#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int main() {
	int n;
	cin>>n;
	print(n);
	return 0;
}