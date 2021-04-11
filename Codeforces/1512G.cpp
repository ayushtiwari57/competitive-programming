/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"


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
int dp[10000002],ans[10000002];
void solution(){

    // This is the main code
    int n;
    cin>>n;
    // cout<<sum(2)<<endl;
    cout<<ans[n]<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    forn(i,1,10000002){
        ans[i]=-1;
        for(int j=i;j<=10000001;j+=i) dp[j]+=i;
    }
    rforn(i,10000000,1){
        if(dp[i]<=10000000) ans[dp[i]]=i;
    }
    int t=1;
    cin>>t;
    
    // cout<<dp[6]<<endl;
    while (t--)
    {
        solution();
    }
    return 0;
}