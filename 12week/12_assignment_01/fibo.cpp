#include <iostream>
using namespace std;

int fibo(int i){
	if(i==0) return 0;
	else if(i==1 || i==2) return 1;
	else return fibo(i-1)+fibo(i-2);
}

int main(){
	int i;
	cin>>i;
	int val = fibo(i);
	cout << val << endl;
	return 0;
}
