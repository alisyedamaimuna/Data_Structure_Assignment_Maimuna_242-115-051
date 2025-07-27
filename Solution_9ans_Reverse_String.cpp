//9) Write a recursive function to reverse a string.
#include <bits/stdc++.h>
using namespace std;
void reverse(string s, int i){
    if(i<0){
        return;
}
cout<<s[i];
return reverse(s,i-1);
}
int main() {
	string s;
	getline(cin,s);
	int length=s.length();
	reverse(s,length - 1);
	return 0;
}