#include <iostream>
#include <queue>
using namespace std;

class StackTwoQ {
    queue<int> q1, q2;

public:
    void push(int x) {
        
        q2.push(x);

        
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

       
        swap(q1, q2);
    }

    int pop() {
        if (q1.empty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int val = q1.front();
        q1.pop();
        return val;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    cout << "Stack using Two Queues:\n";
    StackTwoQ st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.pop() << endl; 
    cout << st.pop() << endl; 
    cout << st.pop() << endl; 
    return 0;
}
