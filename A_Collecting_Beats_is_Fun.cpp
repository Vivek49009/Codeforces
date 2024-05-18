#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vll             vector<long long>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define no              cout<<"NO \n";
#define yes              cout<<"YES \n";

  
 
void kv()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int freq[10];
void solve(){
  int k;
  cin>>k;
  string str[4];
  for(int i=0; i<4; i++){
    cin>>str[i];
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      if(str[i][j] >= '0' && str[i][j] <= '9'){
        freq[str[i][j] - '0']++;
      }
    }
  }

  for(int i=1; i<=9; i++){
    if(freq[i] > 2*k){
      no
      return;
    }
  }
  yes
}

int main(){
  kv();
  int t = 1;
  while(t--){
    solve();
  }
  return 0;
}