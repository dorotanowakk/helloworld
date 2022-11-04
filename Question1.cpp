#include <iostream>

int main(){
    int var1;
    int var2;
    int mul_x;

    int *p1 = NULL, *p2 = NULL;

    std::cout << "Put numbers" << "\n";
    std::cin >> var1;
    std::cin >> var2;

    p1 = &var1;
    p2 = &var2;

    mul_x = *p1 * *p2;

    std::cout << "mul_x =\t" << mul_x << "\n";


    return 0;
}
