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
    P<string,int> a[2];
    a[0].first = "";
    a[0].second = 0;
    a[1].first = "";
    a[1].second = 0;
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(a[0].first == "" || a[0].first == str){
            a[0].first = str;
            a[0].second++;
        }
        else if(a[1].first == "" || a[1].first == str){
            a[1].first = str;
            a[1].second++;
        }
    }
    if(a[0].second > a[1].second)cout << a[0].first;
    else cout << a[1].first;
    return 0;
}