#include<iostream>

void foo(std::vector<int> w, int x){
	w[0] = x;
}


int main(){

	std::vector<int> v;
	v.push_back(3);
	v.push_back(6);

	foo(v, 8);

	std::cout << *v << " \n";

	int i = 4;
	for(int j =0; j < i; j++){
		if (j > 2){
			int k = j *2;
		}
	}
	

	return 0;
}
