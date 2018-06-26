#include <bits/stdc++.h>
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

class SEGMENT_TREE{
ll *arr;
ll n;
ll *tree;
ll treeheight;
ll *BIT;
public:
  SEGMENT_TREE(ll *A, ll n){
    this->arr = A;
    this->n = n;
    ll tmp = this->n;
    ll count = 0;
    while(tmp){
        count+=tmp;
        tmp/=2;
    }
    this->tree = (ll*)calloc(count*2,sizeof(ll));
    this->treeheight = 0;
  }
  void build_sum_tree(ll node, ll start, ll end);
  void update_sum_tree(ll node, ll start, ll end, ll index, ll value);
  ll query_sum_tree(ll node, ll start, ll end, ll left_index, ll right_index);
  void build_product_tree(ll node, ll start, ll end);
  void update_product_tree(ll node, ll start, ll end, ll index, ll value);
  ll query_product_tree(ll node, ll start, ll end, ll left_index, ll right_index);;
  void display_tree();
  void display_array();
};

void SEGMENT_TREE::build_sum_tree(ll node, ll start, ll end){
  if(node > treeheight)treeheight=node;
  if(start == end){
    tree[node] = arr[start];
  }else{
    ll mid = start + (end-start)/2;
    build_sum_tree(2*node,start,mid);
    build_sum_tree(2*node+1,mid+1,end);
    tree[node] = tree[2*node] + tree[2*node+1];
  }
}

void SEGMENT_TREE::update_sum_tree(ll node, ll start, ll end, ll index, ll value){
  if(start == end){
    arr[index] = value;
    tree[node] = value;
  }else{
    ll mid = start + (end-start)/2;
    if(start <= index && index <= mid)update_sum_tree(2*node,start,mid,index,value);
    else update_sum_tree(2*node+1,mid+1,end,index,value);
    tree[node] = tree[2*node] + tree[2*node+1];
  }
}

ll SEGMENT_TREE::query_sum_tree(ll node, ll start, ll end, ll left_index, ll right_index){
  if(right_index < start || left_index > end)return 0;
  if(left_index <= start &&  right_index >= end)return tree[node];
  //If case is none of the above then,
  ll mid = start + (end-start)/2;
  ll p1 = query_sum_tree(2*node,start,mid,left_index,right_index);
  ll p2 = query_sum_tree(2*node+1,mid+1,end,left_index,right_index);
  return p1 + p2;
}


void SEGMENT_TREE::build_product_tree(ll node, ll start, ll end){
  if(node > treeheight)treeheight=node;
  if(start == end){
    tree[node] = arr[start];
  }else{
    ll mid = start + (end-start)/2;
    build_sum_tree(2*node,start,mid);
    build_sum_tree(2*node+1,mid+1,end);
    tree[node] = tree[2*node] * tree[2*node+1];
  }
}

void SEGMENT_TREE::update_product_tree(ll node, ll start, ll end, ll index, ll value){
  if(start == end){
    arr[index] = value;
    tree[node] = value;
  }else{
    ll mid = start + (end-start)/2;
    if(start <= index && index <= mid)update_sum_tree(2*node,start,mid,index,value);
    else update_sum_tree(2*node+1,mid+1,end,index,value);
    tree[node] = tree[2*node] * tree[2*node+1];
  }
}

ll SEGMENT_TREE::query_product_tree(ll node, ll start, ll end, ll left_index, ll right_index){
  if(right_index < start || left_index > end)return 0;
  if(left_index <= start &&  right_index >= end)return tree[node];
  //If case is none of the above then,
  ll mid = start + (end-start)/2;
  ll p1 = query_sum_tree(2*node,start,mid,left_index,right_index);
  ll p2 = query_sum_tree(2*node+1,mid+1,end,left_index,right_index);
  return p1 * p2;
}

void SEGMENT_TREE::display_tree(){
  for(ll i = 1; i <= treeheight; ++i){
    cout << tree[i] << " ";
    if(i%20 == 0)cout << endl;
  }
}


int main(){
    
    return 0;
}