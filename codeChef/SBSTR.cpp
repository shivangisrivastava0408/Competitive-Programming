#include<iostream>
#include<string.h>
using namespace std;

bool checkInteresting(char *str,int start, int end, int k){
    int f[26] = {0};
    for(int i = start; i <= end; ++i){
        f[str[i]-97]++;
    }
    int dist = 0;
    for(int i = 0; i < 26; ++i){
        if(f[i])dist++;
    }
    if(dist >= k){
        bool pos = false;
        for(int i = 0; i < 26; ++i){
            pos = false;
            if(f[i] == 0)continue;
            for(int j = 0; j < 26; ++j){
                if(f[j] == 0)continue;
                if(i == j)continue;
                if(f[i] == f[j]){pos = true;break;}
            }
            if(!pos)return false;
        }

        // for(int k = start; k <= end; ++k){
        //     cout << str[k];
        // }
        // cout << endl;
        return true;
        
    }
    return false;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        char a[7001];
        int k;
        cin >> a;
        cin >> k;
        int count =0 ;
        if(k == 0)k = 1;
        for(int i = 0; i <= strlen(a)-k; ++i){
            for(int j = strlen(a)-1; j >= i+k-1; j-- ){
                if(checkInteresting(a,i,j,k))count++;
            }
        }
        cout << count << endl;
        // if(t != 0) cout << endl;
        
    }
    return 0;
}