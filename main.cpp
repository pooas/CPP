#include<iostream>

struct coord
{
    char a;
    char b;
};


int main(){
    
    coord test{120, 63};

    coord *test2 = &test;

    char v = test2->a;
    char w = test2->b;

// alternative to define pointer


    char s = (*test2).a;
    char t = (*test2).b;
	
	std::cout << "Pointer is here...\n";
	std::cout << s << t << "  ::  " << v << w << "\n";
    return 0;
}
