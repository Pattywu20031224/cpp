#include<iostream>
using namespace std;
int main(){
	int r,c;
	while(cin>>r>>c){
		int map[r][c];
		int rs,rd,cs,cd;
		cin>>rs>>cs>>rd>>cd;
		int n, ri, ci, li;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>ri>>ci>>li;
			map[ri][ci]=li;
		}
		
	}
	return 0;
}
