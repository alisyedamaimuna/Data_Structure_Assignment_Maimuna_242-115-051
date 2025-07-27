//5) Write a recursive function to compute a^b (a raised to the power b).
#include <bits/stdc++.h>
using namespace std;
int power(int n, int m){
    if(m==0){
        return 1;
    }
    return n*power(n,m-1);
}
int main() {
	int n,m;
	cin>>n>>m;
	cout<<n<<" to the power "<<m <<" = "<<power(n,m)<<endl;
	return 0;
}
