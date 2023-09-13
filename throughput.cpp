#include<iostream>
#include<chrono>

void simProcess(){
	
	for(int i{0}; i < 10000000000; ++i){
		
		double result = i * i * i*1390*i ;
		std::cout << result << '\n';

	}

}

int main(){
	
	auto start = std::chrono::high_resolution_clock::now();
	simProcess();

        auto end = std::chrono::high_resolution_clock::now();    // Calculate the elapsed time
							 // 
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    // Calculate throughput (in items per second)
        int totalItems = 1000000;
        double throughput = totalItems / (duration / 1000.0);

    // Print the throughput
        std::cout << "Throughput: " << throughput << " items/second" << std::endl;	
	return 0;
}
