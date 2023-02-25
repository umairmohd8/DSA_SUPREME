#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<int> arr{5,4,2,1,7,6};

    for(int x :arr){
        cout<<x<<" ";
    }

    for(int i = 0 ;i< arr.size()-1; i++){
        int temp = arr[i];
        int smallest = i;
        cout<<temp<<" "<<smallest<<endl;
        for (int j = i+1; j< arr.size(); j++){
            if(arr[j] < arr[smallest])
                smallest = j;
        
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        }
    }
    for(int x :arr){
        cout<<x<<" ";
    }

    //vector<int> sorted_arr = select_sort(arr);
}