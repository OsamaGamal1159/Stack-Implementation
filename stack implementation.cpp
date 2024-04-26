
#include <iostream>
using namespace std;
const int MX_SIZE=100;

class stack {
    int top;
    int item[MX_SIZE];


public:
    stack() {
        top = -1;
    }

    void push (int ele) {
        if (top >= MX_SIZE -1) {
            cout << "Sorry Stack Is Full";
        }else{
            top++;
            item[top] = ele;
        }
    }

     bool isEmpty() {
         return top < 0;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Is Empty";
        }else{
            top--;
        }
    }

    void getTop(int &stackTop){
        if(isEmpty()){
            cout << "Stack Empty";
        }else{
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }
    void print(){
        cout<<"[";
        for(int i = top; i >= 0; i--){
            cout<<item[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
};



int main() {

    return 0;
}
