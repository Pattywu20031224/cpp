#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	while(cin>>n && n>=0){
		vector<int> d;
		if(n==0){
			cout<<"0\n";
		}else{
			while(n>0){
				d.insert(d.begin(), n%3);
				n/=3; 
			}
			for(int i=0; i<d.size(); i++){
				cout<<d[i];
			}
			cout<<"\n";
		}
	}
	return 0;
} 
