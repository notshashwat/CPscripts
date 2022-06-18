#include <bits/stdc++.h>
#include <math.h>

using namespace std;


#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,x,n) for(ll i = x; i<n; i++)
#define BIT(n,x) (n&(1<<x))>>x //lsb is 0th bit

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;



int main() {



//PURPOSE : Generate a file that contains test cases of common patterns
//TNA pattern: 

freopen("input.txt", "w", stdin);

cout<<20<<"\n";
cout<<3<<"\n";
cout<<1<<" "<<1<<" "<<1<<"\n";
cout<<5<<"\n";
cout<<6<<" "<<2<<" "<<8<<" "<<5<<" "<<1<<"\n";



FOR(i,0,18){
    int n=rand()%8;
    n=n<4?n+4:n;
    cout<<n<<"\n";
    FOR(j,0,n){
            cout<<rand()%10<<" \n"[j==n-1];
    }
}


}

