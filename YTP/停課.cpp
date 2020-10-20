#include<iostream>
#include<vector>
using namespace std;
struct Class{
	int count;
	int positive;
};
struct School{
	int count;
	int positive;
	vector<Class> classes;
};
int main(){
	int ns, susp_students=0;
	cin>>ns;
	vector<School> school(ns);
	for(int i=0; i<ns; i++){
		int nc;
		int total_susp=0, susp_schools=0, total_students;
		cin>>nc;
		school[i].classes.resize(nc);
		for(int j=0; j<nc; j++){
			cin>>school[i].classes[j].count;
			school[i].count += school[i].classes[j].count;
			for(int k=0; k<school[i].classes[j].count; k++){
				int r;
				cin>>r;
				if (r==11){
					school[i].classes[j].positive ++;
					school[i].positive++;
				}		
			}
			if(school[i].classes[j].positive>0){
				susp_students += school[i].classses[j].count;
			}
		}
		if(school[i].positive>=2){
			susp_students=school[i].count;
			susp_schools++;
		}
		total_susp += susp_students;
		total_students += school[i].count;
	}
	if(susp_schools*3 >= ns){
		total_susp = total_students;
	}
	cout<< total_susp<<endl;
	return 0;
}
