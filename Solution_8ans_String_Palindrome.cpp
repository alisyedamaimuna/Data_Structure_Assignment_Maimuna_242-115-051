//8) Write a recursive function to check whether a string is a palindrome.
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int i,int j){
    if(i>=j){
        return true;
}
if(s[i]!=s[j]){
    return false;
}
return palindrome(s, i+1, j-1);
}
int main() {
	string s;
	getline(cin,s);
	int start=0,end=s.length();
	int result = palindrome(s,start,(end-1));
	if(result){
	    cout<<s<<" is palindrome"<<endl;
	}
	else cout<<s<<" is not a palindrome"<<endl;
	return 0;
}