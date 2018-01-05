#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

using namespace std;

int main(int argc, char ** args) {
    int repetitions = 0;
    try{
        repetitions = stoi(args[1]);
    }catch(exception e){
        cout << args[0] << endl;
        cout << "Input code: ./timerwithTime 3" << endl;
        return 1;
    }

    auto startTime = chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(startTime);
    cout << ctime(&start_time);

    for(auto i = 0; i < repetitions; i++){
        bool finished = false;
    while(!finished) {
        auto currentTime = chrono::system_clock::now();
        double elapsedTime = chrono::system_clock::to_time_t(currentTime)-chrono::system_clock::to_time_t(startTime);
        if(elapsedTime >= 60){
            std::time_t end_time = std::chrono::system_clock::to_time_t(currentTime);
            cout << ctime(&end_time);
            cout << (i+1) << " minutes gone." << endl;
            finished = true;
        }
    }
    startTime = chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(startTime);

    }
}