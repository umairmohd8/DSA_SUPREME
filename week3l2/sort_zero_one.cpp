#include "iostream"
#include <vector>
// sorts 0's and 1's

using namespace std;

int main(){
    int arr[] = {0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1};

    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;

    while(start <= end){
        if(arr[start] == 1 && arr[end] == 0){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
        if(arr[start] == 0){
            start++;
        }
        if(arr[end] == 1){
            end--;
        }
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    return 0;
}

