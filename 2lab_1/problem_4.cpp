#include "iostream"
using namespace std;

class Animal{
protected:
    int energy=50;
public:
    Animal(){}
    Animal(int energy_){
        this->energy=energy_;
    }
    void sleep(){
        cout<<"I`m sleeping"<<endl;
        energy++;
    }
    void eat(){
        cout<<"I`m eating"<<endl;
        energy++;
    }
    int get(){return energy;}

};
class Dog:public Animal{
private:
    string name;
public:
    Dog(string name_){
       this->name=name_;
    }
    void bark(){
        energy--;
    }
    void run(){
        energy-=3;
    }
};
int main(){
    Dog dog1("Max");
    for(int i=4;i<9;i++){
        dog1.sleep();
        dog1.run();
    }
    dog1.eat();
    dog1.bark();
    cout<<dog1.get()<<endl;
    return 0;
}