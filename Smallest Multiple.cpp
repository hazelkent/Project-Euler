#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli gcd(lli a, lli b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}
lli lcm(lli a, lli b){
	return (a*b) /(gcd(a,b));
}
int main(){
	lli n;
	cin >>n;
	lli res =1;
	for(lli i =2 ; i<= n; i++)
		res = lcm(res, i);
	cout << res;
}
