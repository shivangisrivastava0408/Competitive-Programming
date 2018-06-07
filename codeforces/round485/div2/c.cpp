#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

void dis(int arr[], int n){
    for(int i = 0; i < n; ++i)cout << arr[i] << "\t";
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    int *cost = new int[n];
    for(int i = 0; i < n; ++i)cin >> arr[i];
    for(int i = 0; i < n; ++i)cin >> cost[i];
    int a[3] = {arr[0],arr[1],arr[2]};
    int c[3] = {cost[0],cost[1],cost[2]};
    int max = INT_MAX;
    int sum;
    for(int i = 0; i < n; ++i){
        // cout << i << endl;
        sum = cost[i];
        for(int j = i + 1; j < n; ++j){
            // cout << j << endl;
            if(arr[j] > arr[i]){
                sum+=cost[j];
                for(int k = j+1; k < n; ++k){
                    // cout << k << endl;
                    if(arr[k] > arr[j]){
                        sum+=cost[k];
                        if(sum < max)max=sum;
                        sum-=cost[k];
                    }
                }
                sum-=cost[j];
            }
        }
    }
    if(max == INT_MAX)max = -1;
    cout << max;
return 0;
}