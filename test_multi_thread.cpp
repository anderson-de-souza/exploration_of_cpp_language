#include <iostream>
#include <thread>
#include <stdlib.h>

using namespace std;

void task(string name, int time) {
    int count = 0;
    do {
        printf("%s: %d \n", name.c_str(), count);
        count++;
    } while (count <= time);
}

int main() {
    thread asynchronized_task(task, "B", 100);
    task("A", 100);
    asynchronized_task.join();
    return 0;
}