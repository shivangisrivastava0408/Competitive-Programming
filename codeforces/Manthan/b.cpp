/*
 ____________________________________________________________
|                                                            |
|                   Author: ay2306                           |
|____________________________________________________________|

*/
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
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define MAXN 25
using namespace std;

ll readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
 
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
 
	if (ch == '-') minus = true; else result = ch-'0';
 
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
 
	if (minus)
		return -result;
	else
		return result;
 
}



int main(){
	ll n,s,sum = 0;
	n = readInt();
	s = readInt();
	ll *arr = new ll[n];
	loop(i,0,n)arr[i]=readInt();
	sort(arr,arr+n);
	int i = 0;
	int j;
	if(arr[0] >= s){
		j = 0;
	}else if(arr[n-1] < s){
		j = n-1;
	}else{
		for(i = 0;i < n; ++i){
			if(arr[i] == s){
				j = i;
				break;
			}
			if(arr[i] > s && i < n/2){
				j = i-1;
				break;
			}
			if(arr[i] > s && i > n/2){
				j = i;
				break;
			}
			
		}
	}
	if(j >= n/2){
		while(j>=n/2)sum+=abs(s-arr[j--]);
	}
	else if(j <= n/2){
		while(j<=n/2)sum+=abs(s-arr[j++]);
	}
	cout << sum;
    return 0;
}