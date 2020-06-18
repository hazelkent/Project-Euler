#include <bits/stdc++.h>
#include <string>
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
bool isPrime(int n){
	if(n==2)
		return true;
	else{
		if(n%2==0)
			return false;
		for(int i = 3, end = sqrt(n) ; i<= end ; i+=2){
			if(n%i==0)
				return false;
		}
			return true;
	}
}
int main(){
	int n;
	cin >> n;
	int hld;
	for(int i =2, cnt =0; ; i++){
		if(isPrime(i)==true)
			cnt++;
		if(cnt==n){
			hld = i;
			break;
		}
	}
	cout << hld;
}
