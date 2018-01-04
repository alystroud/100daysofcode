#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int main(void) {
    auto startTime = chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(startTime);
    cout << ctime(&start_time);

    bool finished = false;
    while(!finished) {
        auto currentTime = chrono::system_clock::now();
        double elapsedTime = chrono::system_clock::to_time_t(currentTime)-chrono::system_clock::to_time_t(startTime);
        if(elapsedTime >= 60){
            std::time_t end_time = std::chrono::system_clock::to_time_t(currentTime);
            cout << ctime(&end_time);
            finished = true;
        }
    }
}