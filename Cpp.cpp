#include <iostream>

int main()
{
    std::cout << "Enter an integer:\n\nN=";
    int N{};
    std::cin >> N;
    std::cout << "N^2=" << N*N << "\n\n";
    int M{};
    int i{ 10 };
    do { M = N * N % i; i=10*i; } while (M < N);
    if (M==N)
        std::cout << N << " is a valid number!\n";
    else
        std::cout << N << " is not a valid number.\n";

    return 0;
}