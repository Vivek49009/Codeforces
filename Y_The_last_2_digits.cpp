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
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
}
// last 3 digits
void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll a3 = a % 1000;
    ll b3 = b % 1000;
    ll c3 = c % 1000;
    ll d3 = d % 1000;
    ll multiply = a3*b3*c3*d3;
    ll ans = multiply % 1000;
    if(ans < 10)
        cout<<"00"<<ans<<endl;
    else if(ans >= 10 && ans < 100){
        cout<<"0"<<ans<<endl;
    }
    else 
        cout<<ans<<endl;
}
int main(){
  kv();
  int t = 1;
  while(t--){solve();}
  return 0;
}