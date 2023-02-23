#include "iostream"
#include<vector>

using namespace std;

//union without duplicates

int union_arr(int arr[], int brr[]){

}

// intersection of two arrays
// fails for duplicate values
int main()
{
    int arr[4] = {1, 2, 3, 3};
    int brr[5] = {1, 6, 5, 3,3};

    vector<int> ans;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (arr[i] == brr[j]){
                brr[j] = -1; // to mark the duplicate value
                ans.push_back(arr[i]);
            }
        }
    }
    //cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*test
code */