#include <bits/stdc++.h>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define S set
#define MS multiset
#define M map
#define mp make_pair
#define pb push_back
#define MM multimap
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
using namespace std;
ull dp[100100][100100];
ull func(int n, int r){
    if(dp[n][r]!=0)return dp[n][r];
    if(r > n || n == 0){
        dp[n][r] = 0;
        return 0;
    }
    if(r == 0){
        dp[n][r] = 1;
        return dp[n][r];
    }
    return (func(n-1,r)%MOD + ((r%MOD)*func(n-1,r-1)%MOD)%MOD)%MOD;
}

int main(){
    int t,k;
    cin >> t >> k;
    for(int i = 1; i <= 100010; ++i){
        
    }    
    return 0;
}