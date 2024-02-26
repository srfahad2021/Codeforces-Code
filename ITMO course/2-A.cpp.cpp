/*
     IUBAT - International University of Business Agriculture and Technology	
                         Md. Shojibur Rahman Fahad
             Department of computer science and engineering 
*/
#include"bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional>  
using namespace std;
using namespace __gnu_pbds;  
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll>vll;
typedef vector<pair<int, int>> vpii;
typedef pair<int,int> pii;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>  ordered_set;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl '\n'
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(arr) arr.begin(), arr.end()
#define r_all(arr) arr.rbegin(), arr.rend()
#define unique_and_sort(vec, size) sort(all(vec)),vec.resize(size=unique(all(vec))-vec.begin());
#define refresh() cin.ignore();

const ld max_d = 0.000001;

bool func(ld x, ld c){
	ld a = x*x + sqrt(x);
	// cout<<a-c<<nl;
	return a-c>=max_d;
}

int main(){
	fast();

	ld c; cin>>c;
	
	ld lo=0.0;
	ld hi=1e9;
	while(hi-lo>max_d){
		ld mid=(hi+lo)/2;
		if(func(mid,c)) hi=mid;
		else lo=mid;
	}
	cout<<setprecision(8);
	if(func(lo, c)) cout<<lo<<nl;
	else cout<<hi<<nl;
	// cout<<hi<<nl;
	
	// cout<<func(n,c);
	
	
}

