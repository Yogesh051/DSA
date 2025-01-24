#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for(int i=0; i<size; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[7]={
        2,4,5,8,11,15,90
    };
    int size = 7;
    int target= 11;
     
    cout<<linearSearch(arr,size,target);

}