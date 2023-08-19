#include<iostream>

struct coord
{
    char a;
    char b;
};


int main(){
    
    coord test{12, 63};

    coord *test2 = &test;

    char v = test2->a;
    char w = test2->b;

// alternative

    char s = (*test2).a;
    char t = (*test2).b;

    return 0;
}