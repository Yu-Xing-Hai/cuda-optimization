#include <iostream>
#include <cuda_runtime.h>
using namespace std;

__global__ void hello_world(void) {
	printf("GPU: Hello World!\n");
}

int main() {
	cout << "CPU: Hello World!\n" << endl;
	hello_world <<<1, 10>>>() ;
	cudaDeviceReset();
	return 0;
}