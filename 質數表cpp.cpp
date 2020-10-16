#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
vector<int> prime={2,3,5,7,11};

bool isprime(int n){
	int e=sqrt(n);
	for(int i=0; prime[i]<=e; i++){
		if(n % prime[i]==0){
			return false;
		}
	}
	return true;
}

int main(){
	for(int n=13; n<=1000000; n+=2){
		if(isprime(n)){
			prime.push_back(n);
		}
	}
	for(int i=0; i<prime.size(); i++){
		cout<<prime[i]<<",";
	}
	return 0;
} 
