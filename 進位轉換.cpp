#include<iostream>
using namespace std;
int main(){
	int num;
	int arr[50];
	while(cin>>num && num>=0){
		if(num==0){
			cout<<"0 \n";
		}
		else{
			int i;
			int k=0;
			for(i=0; num>0; i++, num/=3){
				arr[i]=num%3;
				k++;
			}
			for(i=k-1; i>=0; i--){
				cout<<arr[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
