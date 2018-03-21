#include<iostream>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    n = n%7;
    int arr[7] = {4,4,4,4,4,4,4};
    string s;
    cin >> s;
    int m = 0;
    if(s=="mon")m=0;
    else if(s=="tue")m=1;
    else if(s=="wed")m=2;
    else if(s=="thu")m=3;
    else if(s=="fri")m=4;
    else if(s=="sat")m=5;
    else if(s=="sun")m=6;
    for(int i = 0; i < n; ++i){
        arr[(m+i)%7]++;
    }
    for(int i = 0; i < 7; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
return 0;
}
