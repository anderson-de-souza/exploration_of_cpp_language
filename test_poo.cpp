#include <iostream>

class Animal {
    private:
        std::string name;
    public:
        Animal(std::string name) {
            (*this).name = name;
        }
        std::string getname() {
            return name;
        }
};

int main() {
    std::cout << "Hello, World!";
    return 0;
}