#include<bits/stdc++.h>
using namespace std;

#define endl             '\n'
#define ff              first
#define ss              second
#define int             long long
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
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
}
void solve(){
    int n,k;
    cin>>n>>k;
    int t[n];
    for(int i = 0; i < n; i++){
        cin>>t[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(t[i] % k == 0)
            ans++;
    }
    cout<<ans<<endl;

}
signed main(){
  kv();
  int t=1;
  //cin>>t;
  while(t--){
    solve();
    }
  return 0;
}