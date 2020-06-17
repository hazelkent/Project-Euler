#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
	int n;
	cin >> n;
	lli upper =0;
	for(int i = 1 ; i<=n ; i++){
		upper*=10;
		upper+=9;
	}
	lli mx = 0,lower = 1+upper/10;
	for(int i = upper;i>= lower ; i--){
		for(int j = i ; j >= lower ; j--){
			lli prod = i*j;
			if(prod < mx)
				break;
			lli rev = 0, x = prod;
			while(x!=0){
				rev = rev*10 + x%10;
				x/=10;
			}
			if(rev==prod && prod >mx)
				mx = prod;
		}
	}
		cout << mx;
}
