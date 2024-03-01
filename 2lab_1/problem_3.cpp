#include "iostream"
#include "vector"
#include "set"
#include "map"


using namespace std;

class Student{
private:
    string name;
    long int id;
    string group;

public:

    Student(){
        cin>>name>>id>>group;
    }
    string get(){return group;}

};
int main(){
    vector<Student> student;
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        Student s;
        student.push_back(s);
    }
    map<string,int> groupcount;
    for(auto it:student){
        groupcount[it.get()]++;
    }
    for(auto it:groupcount){
        cout<<it.first<<": "<<it.second<<endl;
    }
//    set<string> groups;
//    for(auto it:student){
//        groups.insert(it.get());
//    }
//    for(auto it:groups){
//        int count=0;
//        for(auto it2:student){
//            if(it==it2.get()){
//                count++;
//            }
//        }
//        cout<<it<<": "<<count<<endl;
//    }
}