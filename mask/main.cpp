#include<iostream>
using namespace std;
int main(){
    int num;
    while(cin>>num && num>0){
        int a;
        if(num%7==0){
            a=num/7 - 1;
        }else
            a=num/7;
        if(a==0){
            cout<<"5";
        }else{
            cout<<5*(a+1);
        }
        cout<<endl;
    }
    return 0;
}
