#include <iostream>
using namespace std;

class Timer{
public:
    int seconds,minuts,hours;
    Timer(){
        cin>>hours>>minuts>>seconds;
    }
    void Time_fixer(){
        while(seconds>=60){
            seconds-=60;
            minuts++;
        }
        while (minuts>=60){
            minuts-=60;
            hours++;
        }
        while(hours>=24){
            hours-=24;
        }
        cout<<hours<<":"<<minuts<<":"<<seconds;
    }

};



int main() {
      Timer t1;
      t1.Time_fixer();
}
