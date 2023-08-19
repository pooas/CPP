#include<iostream>
#include<vector>
#include<array>
struct coord

{
    char a;
    char b;
};


std::vector<int> v{936,3,86,9,12};


int main(){
    
	
    coord test{120, 63};
	coord test3{12,9};
	coord *test4 = &test3;
    coord *test2 = &test;

	

	auto b1 = begin(v);
	auto e1 = end(v);


    char v = test2->a;
    char w = test2->b;

// alternative to define pointer


    char s = (*test2).a;
    char t = (*test2).b;
	

	std::cout << "Pointer is here...\n";
	
	std::cout << s << t << "  ::  " << v << w << "\n";

	std::cout << "The pinter address is ... " <<  test2 << "\n";
	std::cout << "The second pointer address is ... " << test4 << "\n";
    std::cout << *b1 << "  :  "  << *e1 <<"\n";
	return 0;
}
