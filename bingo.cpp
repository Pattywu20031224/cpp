#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int rcnt[5]={},
	ccnt[5]={},
	dcnt[2]={};
int board [5][5]={};
bool visited[5][5]={};

struct P{
	int num;
	int lines;
};

bool operator<(const P &a, const P &b){
	
	if(a.lines == b.lines){
		return a.num<b.num;
	}
	return a.lines>b.lines;
	
} 


int count_lines(int r, int c){
	int lines=0;
	if(rcnt[r]==4)
		lines++;
	if(ccnt[c]==4)
		lines++;
	if(r==c && dcnt[0]==4){
		lines ++; 
	}
	if(r+c == 4 && dcnt[1]==4){
		lines ++;
	}
	return lines;
}
int main(){
	int r, c, n;
	for(r=0; r<5; r++){
		for(c=0; c<5; c++){
			cin>>board[r][c];
		}
	}
	while(cin>>n && n!=-1){
		for(r=0; r<5; r++){
			for(c=0; c<5; c++){
				if(board[r][c]==n){
					visited[r][c]=true;
					rcnt[r]++;
					ccnt[c]++;
					if(r==c){
						dcnt[0]++;
					}
					if(r+c==4){
						dcnt[1]++;
					}
					r=100;
					break;
				}
			}
		}
	}
	vector <P> result;
	for(r=0; r<5; r++){
		for(c=0; c<5; c++){
			if(!visited[r][c]){
				result.push_back({board[r][c], count_lines(r, c)});
			}
		}
	}
	sort(result.begin(), result.end());
	
	cout<<result[0].num<<endl;
	
	return 0;
}
