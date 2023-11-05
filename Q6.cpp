#include<iostream>
using namespace std;
int main(){// Q 6 -> number of coins: 
int n;
cout<<"Enter number of coins : ";
cin>>n;
int lo =1,hi =n,nor = 0;

while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    int long long sum = mid*(mid+1)/2;
    if(sum == n) {nor = mid;
            break;}
    else if(sum>n) hi = mid-1;
    else {nor = mid;
          lo = mid+1;
    }
}
cout<<"Number of complete rows = "<<nor;


}