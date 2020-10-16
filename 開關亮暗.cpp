#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	while (cin>>n && n>0){
		int q=sqrt(n);
		if(q*q==n){
			cout<<"yes";
		}
		else
		cout<<"no";
		cout<<endl;
		
	}
	return 0;
}
