#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define in(x) cin>>x; 
#define ou(x) cout<<x<<" "
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int mod = 1'000'000'007;
const int N = 3e5;

vi v[N];
int a[N];

/* ========== YOUR CODE HERE ========= */

void solution() {
    string s = "1a2";
    string temp;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&& s[i]<='z') ||(s[i]>=48 &&s[i]<=57)){
            temp +=s[i];
        }
    }
    int flag =1;
    int j=temp.size()-1;
    for(int i=0;i<=temp.size()/2;i++)
    {
        if(temp[j]!=temp[i]){
            flag = 0;
            break;
        }else{
            j--;
        }
    }
    cout<<flag<<endl;
   
}
/* ========== YOUR CODE HERE ========= */

int main() {
    int t = 1;
    in(t);
    while(t--) {
        solution();
    }

    return 0;
}