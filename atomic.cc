#include <thread>
#include <atomic>
#include <iostream>
#include <unistd.h>

using namespace std;

std::atomic_flag lock = ATOMIC_FLAG_INIT;

void f(int n) {
    while(lock.test_and_set(std::memory_order_acquire))
        cout << "Waiting from thread" << n << endl;
    cout << "Thread " << n << "  starts working" << endl;
}

void g(int n) {
    cout << "thread " << n << "is going to start" << endl;
    lock.clear();
    cout << "thread " << n << " starts working" << endl;
}

int main() {
    lock.test_and_set();
    thread t1(f,1);
    thread t2(g,2);

    t1.join();
    usleep(1000);
    t2.join();
}
