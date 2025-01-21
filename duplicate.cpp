#include <iostream>
#include<array>
#include<algorithm>
using namespace std;


bool duplicate(int arr[], int size){

    std::sort(arr, arr + size);

    for(int i=1; i<size; ++i){
        if (arr[i]==arr[i-1]){
            return true;
        }
    }
    return false;

}

int main(){
    int arr[7] ={1,2,3,4,5,6,7};
    int size =sizeof(arr)/sizeof(arr[0]);  //: The line int size = sizeof(arr); calculates the total size in bytes of the array, not the number of elements. It should be sizeof(arr) / sizeof(arr[0]).
     std::cout << (duplicate(arr, size) ? "True" : "False") << std::endl;
    // bool duplicacy = duplicate(arr,size);
    // cout<<duplicacy<<endl;
    return 0;
}