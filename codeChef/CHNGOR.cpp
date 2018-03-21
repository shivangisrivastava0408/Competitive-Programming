#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll mn = INT_MAX;
        ll a;
        vector<ll> vec;
        for(int i = 0; i < n; ++i){
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
    }
}