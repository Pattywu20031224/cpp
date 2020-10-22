#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, a;
	while(cin>>n){
		
	
	
	vector<int> angel(n+1), cnt(n+1);
	bool isvalid=true;
	
	for(int i=1; i<=n; i++){
		cin>>angel[i];
		cnt[angel[i]]++;
		if(cnt[angel[i]]>1){
			isvalid=false;
			break;
		}
	}
	if(!isvalid){
		cout<<"-1"<<endl;
	}else{
		int groups=0;
		for(int i=1; i<=n; i++){
			if(angel[i]>0){
				groups++;
				int na;
				for(int a=angel[i]; a!=0; a=na){
					na=angel[a];
					angel[a]=0;
				}
			}
		}
		cout<<groups<<endl;
	}
	
}
	return 0;
}
