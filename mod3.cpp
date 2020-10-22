#include<iostream>
using namespace std;
int main(){
	int arr[3]={0,0,0};
	int n, a;
	while(cin>>n){
		for(int i=0; i<n; i++){
			cin>>a;
			arr[a%3]++;
		}
		for(int i=0; i<3; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
		
	
	return 0;
}
