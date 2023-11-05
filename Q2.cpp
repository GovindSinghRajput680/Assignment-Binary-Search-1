#include<iostream>
using namespace std;
int main(){//Q 2
int n;
cout<<"Enter size : ";
cin>>n;
int arr[n];
cout<<"Enter Elements of array in sorted order: ";
for(int i =0;i<n;i++) cin>>arr[i];
int lo = 0,hi = n-1,noz =0;
while(lo<=hi){
    int mid = lo+(hi-lo)/2;
    if(arr[mid] == 1){noz = mid;
        hi = mid -1;
    }
    else lo = mid+1;
}
cout<<"Number of 1's in given array = "<<(n-noz);


}