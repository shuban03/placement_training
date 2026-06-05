#include <iostream>
#include <vector>
using namespace std;


class Stack{
    vector<int> v;

public:
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    bool empty(){
        return v.empty();
    }
    void display(){
        for(int i:v){
            cout<<i<<" ";
        }
    }

};

int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.display();
    cout<<endl;
    s.pop();
    s.push(10);
    s.display();
}