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

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int temp1 = a+b+c;
    int temp2 = (a*b)+c;
    int temp3 = a+(b*c);
    int temp4 = a*b*c;
    int temp5 = a*(b+c);
    int temp6 = (a+b)*c;
    cout<<max({temp1,temp2,temp3,temp4,temp5,temp6});
}

int main(){
  kv();
  int t = 1;
  while(t--){
    solve();
  }
  return 0;
}