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

using namespace std;

int main(){
    int n;
    cin >> n;
    M<int,int> m;
    if(n == 1){
        int a;
        cin >> a;
        cout << "1";
        return 0;
    }
    if(n == 2){
        int a,b;
        cin >> a >> b;
        if(a == b)cout << "2";
        else cout << "1";
        return 0;
    }
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        if(m.count(a)==0){
            m.insert(mp(a,1));
        }else{
            m.find(a)->second++;
        }
    }
    int p = 0;
    int a[2] = {0};
    for(M<int,int>::IT i = m.begin(); i != m.end(); ++i){
        if(i->second % 2 == 0){
            p+=(i->second);
        }
        if(i->second % 2 == 1){
            p+=(i->second)-1;
            a[i->first % 2]++;
        }
    }
    p+=(((a[0] >> 1) << 1)+((a[1] >> 1) << 1));
    cout << p;
    return 0;
}