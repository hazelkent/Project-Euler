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
bool prime[2000000];
void seive(lli n){
	memset(prime, true, n);
	for(int i = 2; i*i <=n ; i++){
		if(prime[i]==true){
			for(int j = i*i; j<=n ; j+=i)
				prime[j] = false;
		}
	}
}
int main(){
	lli n;
	cin >> n;
	seive(n);
	lli sum =0;
	for(int i = 2 ; i < n ; i++){
		if(prime[i]==true)
			sum+=i;
	}
	cout << sum;
}
