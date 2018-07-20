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

string multiply(string a, int b){
    deque<int> s;
    string ans = "";
    // cout << a << " " << b << endl;
    int carry = 0;
    for(int i = a.length()-1; i >= 0; --i){
        int d = (int(a[i]-'0')*b)+carry;
        // cout << d << endl;
        s.push_front(d%10);
        carry = d/10;
        // cout << carry << endl;
    }
    while(carry){
        s.push_front(carry%10);
        carry/=10;
    }
    // cout << s.size() << endl;
    for(int i = 0; i < s.size(); ++i){
        ans+=(char(s[i]+'0'));
    }
    return ans;
}

string addZero(string a, int k){
    for(int i = 0; i < k; ++i)a+="0";
    return a;
}

string multiply(string a1,string b1){
    int k = 0;
    string ans = "0";
    for(int i = b1.length()-1; i >= 0; --i){
        string b = multiply(a1,int(b1[i]-'0'));
        // cout << b << endl;
        b = addZero(b,k);
        // cout << b << endl;
        ++k;
        ans = add(ans,b);
    }
    return ans;
}

string dp[150][150];

int main(){
    int k,l;
    for(int i = 0; i < 150; i++)for(int j = 0; j < 150; ++j)dp[i][j] = "1";
    k = 2;
    for(string i = "2"; i != "101"; ++k){
        l = 1;
        for(string j = "1"; j != "101"; ++l){
            dp[k][l] = multiply(i,dp[k][l-1]);     
            // cout << dp[k][l] << endl;
            j = add(j,"1");
        }
        i = add(i,"1");
        cout << i << endl;
    }
    S<string> ans;
    for(int i = 2; i < 101; i++)for(int j = 2; j < 101; ++j)ans.insert(dp[i][j]);
    // for(auto i: ans){
    //     cout << i << " ";
    // }
    cout  << endl << ans.size();
    // cout << multipl?y("9","3");
}