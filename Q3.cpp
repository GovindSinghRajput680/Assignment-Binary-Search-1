#include<iostream>
using namespace std;
int main(){int m,n;
cout<<"Enter number of rows and columns : ";
cin>>m>>n;
int arr[m][n];
cout<<"Enter Elements in array : ";
for(int i =0;i<m;i++){
    for(int j =0;j<n;j++) cin>>arr[i][j];
}
int noo =0,rowidx;
for(int i = 0;i<m;i++){
    int lo =0,hi =n-1,noz = 0;
    while(lo<= hi){int mid = lo+(hi-lo)/2;
        if(arr[i][mid] == 1) {noz = mid;
            hi = mid-1;}
        else lo = mid+1;   
    }
    if(noo<n-noz) rowidx = i,noo = n-noz; 
}
cout<<"Required row is at index "<<rowidx;

}