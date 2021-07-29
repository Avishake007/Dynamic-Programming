#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll fibo[n+1];
	fibo[0]=0;
	fibo[1]=1;
	//Tabulation
	for(int i=2;i<=n;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	cout<<"Fibonacci of "<<n<<" : "<<fibo[n]<<"\n";
}