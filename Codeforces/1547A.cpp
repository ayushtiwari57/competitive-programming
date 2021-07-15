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


void solution(){

    // This is the main code
    int xa,ya,xb,yb,xc,yc;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    // cout<<xa<<" "<<ya<<" "<<xb<<" "<<yb<<" "<<xc<<" "<<yc<<endl;
    if(xa==xb || ya==yb){
        if(ya==yb){ 
            if(xc>=min(xa,xb) && xc<=max(xa,xb)) cout<<abs(xa-xb)+abs(ya-yb)+2<<endl;
            else cout<<abs(xa-xb)+abs(ya-yb);
        }
        else{
            if(yc>=min(ya,yb) && yc<=max(ya,yb)) cout<<abs(xa-xb)+abs(ya-yb)+2<<endl;
            else cout<<abs(xa-xb)+abs(ya-yb)<<endl;
        }
    }
    else cout<<abs(xa-xb)+abs(ya-yb)<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}