/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair 
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    int n,k,mod=1e9+7;
    cin>>n>>k;
    vector<vector<int>> dp(n+1,vector<int>(k+1,0));    vector<int> a(n);
  for (int&v : a) cin >> v;
    dp[0][0]=1;
    // forn(i,0,n) cin>>a[i];
    forn(i,1,n+1){
        forn(j,0,k+1){
            dp[i][j]=dp[i-1][j];
            if(j-a[i-1]>=0){
                (dp[i][j] += dp[i][j-a[i-1]]) %= mod;
            }
        }
    }
    cout<<dp[n][k]; 
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}