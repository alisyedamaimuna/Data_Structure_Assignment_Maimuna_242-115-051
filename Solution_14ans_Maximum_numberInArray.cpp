//14) Write a recursive function to find the maximum element in an array.
#include <bits/stdc++.h>
using namespace std;
int maximum(int arr[],int j,int n,int maxnum){
   if(j==n){
       return maxnum;
   } 
   if(arr[j]>maxnum){
       maxnum=arr[j];
   }
   return maximum(arr,j+1,n,maxnum);
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int maxnum=arr[0];
	int j=1;
	int result=maximum(arr,j,n,maxnum);
	cout<<"The maximum number among input is :"<<endl<<result<<endl;
	return 0;
}