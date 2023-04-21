// n=3;
//     1
// 	2	3	2
// 3	4	5	4	3
// 	2	3	2
// 		1
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int rowno=1;
	int up=1;
	// int sno=1;
	while(rowno<=tr){
//spaces 
int sp=1;
while(sp<=tr-rowno){
	cout<<"\t";
	sp=sp+1;
}
// upper stars=====
//increment part===
int i=1;
int sno=rowno;
while(i<=rowno){
	cout<<sno<<"\t";
	i=i+1;
	sno=sno+1;
}
sno=sno-2;
//decrementb
int s=1;
while(s<=rowno-1){
	cout<<sno<<"\t";
	s=s+1;
	sno=sno-1;
}
cout<<endl;
rowno=rowno+1;
}
//lower part=====
int rowno1=1;
int lp=tr-1;
while(rowno1<=lp){
//space s
int m=1;
while(m<=rowno1){
	cout<<"\t";
	m=m+1;
}
//star===
int k=1;
int sno1=lp-rowno1+1;
// increment====
while(k<=lp-rowno1+1){
	cout<<sno1<<"\t";
	k=k+1;
	sno1=sno1+1;
}
sno1=sno1-2;
//decrement======
int t=1;
while(t<=lp-rowno1){
	cout<<sno1<<"\t";
	t=t+1;
	sno1=sno1-1;
}
// while(k<=2*lp-(2*rowno1)+1){
// 	cout<<"&"<<"\t";
// 	k=k+1;
// }
cout<<endl;
rowno1=rowno1+1;

}

return 0;
}
