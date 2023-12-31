#include<iostream>
#include<vector>


int main(){
	//using lambda function to print items of vector...
	auto print = [](std::string s, auto v){
		std::cout << s << " " << '\n';
		for(auto x: v) std::cout << x << " \n";
		std::cout << '\n';
		
	};
	
	std::vector<int> a {3, 6, 9, 12};
	
	auto b = a;

	print("a", a); 
	print("b", b);
	if (a == b) std::cout <<" : " << "equal\n";

	a[0] = 21;
	print("a",a); print("b", b);
	if (a != b) std::cout <<" : " << "different\n";
	
	return 0;
}
