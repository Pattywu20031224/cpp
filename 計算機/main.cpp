#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int missing;
    int ans;
    int i;

    string input;
    cin>>input;
        if(input[2]==','){
            missing=1;
        }else if(input[4]==','){
            missing=2;
        }else{
            missing=3;
        }

        if(input[0]==1){
            if(missing==1){
                cout<<"missing a"<<"q1"<<endl;
                cout<<sqrt(input[5]*input[5]-input[3]*input[3]);
            }
            if(missing==2){
                cout<<"missing b"<<"q1"<<endl;
                cout<<sqrt(input[5]*input[5]-input[2]*input[2]);
            }
            if(missing==3){
                cout<<"missing c"<<"q1"<<endl;
                cout<<sqrt((input[2]*input[2])+(input[4]*input[4]));
            }
        }
        if(input[0]==2){
            if(missing==1){
                cout<<"missing a"<<"q2"<<endl;
                ans=input[5]/2 + input[3];
            }
            if(missing==2){
                cout<<"missing b"<<"q2"<<endl;
                ans=input[2]- input[5]/2 ;
            }
            if(missing==3){
                cout<<"missing c"<<"q2"<<endl;
                ans=(input[2]-input[4])*2;
            }
        }
        if(input[0]==3){
            if(missing==1){
                cout<<"missing a"<<"q3"<<endl;
                ans=input[5]/input[3];
            }
            if(missing==2){
                cout<<"missing b"<<"q3"<<endl;
                ans=input[5]/input[2];
            }
            if(missing==3){
                cout<<"missing c"<<"q3"<<endl;
                ans=input[2]*input[4];
            }
        }
    return 0;
}
