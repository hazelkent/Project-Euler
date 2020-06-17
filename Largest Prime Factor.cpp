/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli n;
    cin >> n;
    lli mx = 0;
    for(int i = 2; i*i <= n ; i++){
        while(n%i==0 && i!=n)
            n/=i;
    }
    cout << n;
}
