//13) Write a recursive function to find the sum of all elements in an integer array.
#include <bits/stdc++.h>
using namespace std;
int sumArray(int arr[],int i,int sum){
    if(i<0){
        return sum;
    }
    return sumArray(arr,i-1,sum+arr[i]);
}

int main() {
	int n,sum=0;
	cin>>n;
	int arr[n];
	for(int j=0;j<n;j++){
	    cin>>arr[j];
	}
	int result= sumArray(arr,n-1,sum);
	cout<<result<<endl;
	return 0;
}
