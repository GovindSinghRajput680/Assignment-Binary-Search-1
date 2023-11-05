#include<iostream>
using namespace std;
int main(){//Q 5
int n;
cout<<"Enter a possitive number : ";
cin>>n;
string check = "NO";
int lo = 1,hi = n;
int i =1;
while(lo<=hi){int mid = lo+(hi - lo)/2;
    if((float)mid == (float)n/mid) {check = "YES";
            break;}// Don't forget break after work done -> Infinite loop
    else if((float)mid < (float)n/mid) lo = mid+1;
    else hi = mid-1;
    
}
cout<<check;

}