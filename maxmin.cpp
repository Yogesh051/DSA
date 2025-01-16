//max and min in an array
#include <iostream>
using namespace std;

int main() {
    int num[10] ={
        5, 7, 2, 4, 9, 8, 1, 6, 3, 0
    };
    int size=10;
    int min = INT16_MAX;
    int max = INT16_MIN;

    for(int i=0; i<10;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    cout<<"The minimum number is: "<<min<<endl;

    for(int i=0; i<10;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
        cout<<"The maximum number is: "<<max<<endl;
    return 0;
}