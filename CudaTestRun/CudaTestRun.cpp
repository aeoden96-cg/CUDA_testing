// CudaTestRun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cuda_kernel.cuh"

int main()
{
    // Initialize arrays A, B, and C.
    double A[3] = { 5,8,3 };
    double B[3] = { 7,6,4 };
    double C[3];

    // Sum array elements across ( C[0] = A[0] + B[0] ) into array C using CUDA.
    kernel(A, B, C, 3);

    // Print out result.
    std::cout << "C = ";
    for (double i : C)
        std::cout << i << ", ";
    std::cout << "\n";

}

