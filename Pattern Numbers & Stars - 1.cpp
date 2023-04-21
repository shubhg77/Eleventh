// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *   n=5;
// 1 2 * * * * *
// 1 * * * * * * *

#include<iostream>
using namespace std;
int main() {
	int rowno=1;
	int tr;
	cin>>tr;
 while(rowno<=tr){
//====numbers===
int i=1;
while(i<=tr-(rowno-1)){
	cout<<i<<" ";
	i=i+1;
}
/// ===stars==
if(rowno>=2){
	int k=1;
	  while(k<=(2*rowno-2)-1){
		cout<<"*"<<" ";
		k=k+1;
	  }
	}


cout<<endl;
rowno=rowno+1;
 }



	return 0;
}
