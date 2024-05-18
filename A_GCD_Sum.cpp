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

ll getsum(ll tmp){
    ll sum = 0;
    while(tmp>0){
        sum += tmp % 10;
        tmp /= 10;
    }
    return sum;
}
void solve(ll num){
    ll tmp = num;
    ll sumD = getsum(tmp);
    ll gcd = __gcd(num,sumD);

    if(gcd > 1){
        cout<<num<<endl;
        return;
    }

    else
        solve(++num);
}
int main(){
  kv();
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    solve(n);}
  return 0;
}