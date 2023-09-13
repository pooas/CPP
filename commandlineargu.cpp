#include<iostream>


int main(int const argc, char const*const* argv){

    if(argc < 3){
        std::cerr << "Usage  : " << argv[0] << "<word> <times> \n";
        return EXIT_FAILURE;
    }

    auto name = std::string(argv[1]);
    int nameCount = atoi(argv[2]);

    for(int i; i < nameCount; ++i)
        std::cout << name << "\n";
    std::cout << '\n';

}