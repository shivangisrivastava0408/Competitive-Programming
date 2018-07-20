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
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define MAXN 1001
using namespace std;

ll arr[MAXN][MAXN];
void solveSquare(int k, ll b){
    if(b == 0)return;
    for(int i = MAXN-1-k; i >= k; --i){
        if(b == 0)return;
        arr[k][i] = b;
        b--;
    }
    for(int i = k+1; i < MAXN-k; ++i){
        if(b == 0)return;
        arr[i][k] = b;
        b--;
    }
    for(int i = k+1; i < MAXN-k; ++i){
        if(b == 0)return;
        arr[MAXN-k-1][i] = b;
        b--;
    }
    for(int i = MAXN-k-2; i > k; --i){
        if(b == 0)return;
        arr[i][MAXN-1-k] = b;
        b--;
    }
    solveSquare(k+1,b);
}

int main(){
    FILE_READ
    for(int i = 0; i < MAXN; ++i)for(int j = 0; j < MAXN; ++j)arr[i][j] = -1;
    solveSquare(0,MAXN*MAXN);
    // for(int i = 0; i < MAXN; ++i){
    //     for(int j = 0; j < MAXN; ++j)cout << arr[i][j] << " ";
    //     cout << endl;
    // }
    ll sum = 0;
    for(int i = 0; i < MAXN; ++i)sum+=arr[i][i];
    for(int i = 0; i < MAXN; ++i)sum+=arr[i][MAXN-1-i];
    sum-=arr[MAXN/2][MAXN/2];
    cout << sum;
    return 0;
}