#include<iostream>
using namespace std;
int main(){//Q 1
int n;
cout<<"Enter size : ";
cin>>n;
int arr[n];
cout<<"Enter Elements of array in sorted order: ";
for(int i =0;i<n;i++) cin>>arr[i];
int k;
cout<<"Enter value for k : ";
cin>>k;
int lo =0,hi = n-1,ans = -1;
while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid] == k) {
        ans = mid;
        lo = mid+1;
    }
    else if(arr[mid]>k) hi = mid-1;
    else lo = mid+1;
}
cout<<"Last occurence is at index "<<ans;





}