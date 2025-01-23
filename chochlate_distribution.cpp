#include<iostream>
#include<vector>
// #include<limits.h>
#include<algorithm>
using namespace std;

int choclate(vector<int> &arr, int m){
int n=arr.size();

sort(arr.begin(), arr.end());

int mindiff = INT16_MAX;

for(int i=0; i+m-1<n; i++){
    int diff = arr[i+m-1]-arr[i];
    if (diff<mindiff){
       mindiff=diff;
    }
    
}
return mindiff;
}

int main(){
    vector<int> arr={9, 3, 1, 4, 7, 5, 6};
    int m=3;
    cout<<choclate(arr,m);
    return 0;
}


