// constraints
// input 
// 4 
// 6
// output: 12
#include<iostream>
using namespace std;
int main() {
int n1,n2;
cin>>n1>>n2;
int gr;
int gcd;
int i=1;
if(n1>n2){
	gr=n2;
}
else if(n1==n2){
	gr=n2;
}
else{
	gr=n1;
}
while(i<=gr){
if(n1%i==0 and n2%i==0){
	gcd=i;
}
i=i+1;
}
int p = n1*n2;
int lcm = p/gcd;
cout<<lcm;




	return 0;
}
