#include<iostream>
#include<fstream>


int main() {

    std::ofstream os {"fstreamtext.txt"};

    if(os.good()){
        for(int i = 1; i <= 6; ++i){

            os << i << " " << i*i << '\n';
        }
    }


}
