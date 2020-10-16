#include<iostream>
#include<string>
#include<cctype>
#include<set>  //check if it appears again
#include<map> //�������Y 
using namespace std;
int main(){
	string word;
	set<string> dic;
	while(!cin.eof()){
		auto ch=cin.get(); //auto: �۰ʱ��ɫ��A 
		if(isalpha(ch)){
			//isdigit()
			//isalnum() �r���[�Ʀr 
			//isupper()
			//islower()
			word.append(1, tolower(ch)); 
		}else{
			if(word != ""){
				dic.insert(word);
				word="";
			}
		}
	}
	for(auto w: dic){
		cout<<w<<'\n';
	}
	return 0;
}