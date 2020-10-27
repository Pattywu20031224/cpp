#include<iostream>
using namespace std;
int board[1000][1000]={};
int R,C;
int Rs, Cs, Rd, Cd;
int main(){
	while(cin>>R>>C){
		cin>>Rs>>Cs>>Rd>>Cd;
		int n;
		for(cin>>n; n>0; n--){
			int r, c, l;
			cin>>r>>c>>l;
			board[r][c]=l;
		}
	}
	
	return 0;
}
