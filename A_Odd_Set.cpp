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
#define no              cout<<"No \n";
#define yes              cout<<"Yes \n";

  
 
void kv()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n, even = 0, odd = 0;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        if(a[i] % 2 == 0)
            even++;
        else 
            odd++;
    }
    if(even == odd){
        yes
        return;
    }
    else{
        no
        return;
    }

}
int main(){
  kv();
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}