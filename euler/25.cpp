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
using namespace std;

string add(string a1, string b1){
    deque<int> s,a,b;
    string ans = "";
    int carry = 0;
    for(int i = 0; i < a1.length(); ++i){
        a.pb(int(a1[i]-'0'));
    }
    for(int i = 0; i < b1.length(); ++i){
        b.pb(int(b1[i]-'0'));
    }
    if(a.size() < b.size()){
        while(a.size()!=b.size()){
            a.push_front(0);
        }
    }
    if(a.size() > b.size()){
        while(a.size()!=b.size()){
            b.push_front(0);
        }
    }
    int i = a.size()-1;
    for(int i = a.size()-1; i >= 0; --i){
        s.push_front((a[i]+b[i]+carry)%10);
        carry = (a[i]+b[i]+carry)/10;
    }
    while(carry){
        s.push_front(carry%10);
        carry/=10;
    }
    for(i = 0; i < s.size(); ++i){
        ans+=(char(s[i]+'0'));
    }
    return ans;
}

int main(){
    ll index = 3;
    string a = "1";
    string b = "1";
    string c = "2";
    while(c.length()!=1000){
        a = b;
        b = c;
        c = add(a,b);
        index++;
    }
    cout << index;
    return 0;
}