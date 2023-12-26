#include <iostream>

int main() {
    
    auto task = [] (std::string name) {
        std::cout << name;
    };
    
    task("Warren Hurt \n");
    
    int numberToFive = [] (int x) { return x * 5; } (5);
    
    std::cout << numberToFive;
    
    return 0;
    
}
