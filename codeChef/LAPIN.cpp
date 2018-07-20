#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    cin >> a;
    int k1,k2;
    if(a.length()%2 == 0){
        k1 = a.length()/2;
        k2 = a.length()/2;
    }else{
        k1 = a.length()/2;
        k2 = a.length()/2 + 1;
    }
    int f1[26] = {0};
    int f2[26] = {0};
    for(int i = 0; i < k1; ++i){
        f1[a[i]-'a']++;
        f2[a[i+k2]-'a']++;
    }
    for(int i = 0; i < 26; ++i){
        if(f1[i] != f2[i]){
            cout << "NO\n";
            return ;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}