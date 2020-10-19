#include<iostream>
#include<string>
using namespace std;
int main(){
	int row, col;
	string line, prev;
	while(cin>>row>>col){
		
	
	
	getline(cin,line);
	prev.append(col, ' '); //col­ÓªÅ®æ 
	int hits=0;
	for(int i=0; i<row; i++){
		getline(cin, line);
		for(int j=0; j<col; j++){
			if(prev[j]==' ' && line[j]=='X'){
				hits++;
			}
		}
		prev=line;
	}
	cout<<hits<<endl;
}
	return 0;
}
