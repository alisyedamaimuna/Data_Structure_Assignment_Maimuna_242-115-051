//27) Write a C program to implement binary search in a sorted array.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int target,int n){
    int low =0,high=n-1;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) high=mid-1;
        else if(arr[mid]<target) low=mid+1;
    }
    return -1;
}

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    sort(arr,arr+n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int idx=binarySearch(arr,target,n);
    if(idx>=0){
        cout<<"Found at index : "<<idx<<endl;
    }
    else
    cout<<"Not found"<<endl;
    return 0;
}
