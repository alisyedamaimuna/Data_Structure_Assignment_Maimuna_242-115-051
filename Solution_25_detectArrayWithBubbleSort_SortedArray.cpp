//25) Modify the bubble sort algorithm to detect already sorted arrays.
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

void detect(int arr[],int temp[],int n){
    int p=0;
    for(int i=0;i<n;i++){
        if(arr[i]!= temp[i]){
            cout<<"Array is unsorted didn't match with bubble Sorted array"<<endl;
            return;
        }
        else
        {
           p=1; 
        }
    }
    if(p==1){
        cout<<"Array is Sorted matched with bubbleSort"<<endl;
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int temp[n];
	for(int i=0;i<n;i++){
	    temp[i]=arr[i];
	}
	bubbleSort(temp,n);
	detect(arr, temp, n);
	return 0;
} 
