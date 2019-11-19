#include<vector>
#include<iostream>
using namespace std;

int main(){
	vector<int> v ;
	v.push_back(21);
	v.push_back(32);
	v.push_back(43);

	for(vector<int>::size_type i=0; i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << "v.front()" << v.front() << endl;
	cout << "v.end()" << v.back() << endl;

	for(vector<int>::iterator it = v.begin(); it < v.end();it ++){
		if(*it == 32){
			v.erase(it);
		}
	}
	cout << v[1];

	return 0;
}
