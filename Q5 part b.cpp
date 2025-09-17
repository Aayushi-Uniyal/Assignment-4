#include <iostream>
#include <queue>
using namespace std;

class StackOneQ {
    queue<int> q;

public:
    void push(int x) {
        int size = q.size();
        q.push(x);
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int val = q.front();
        q.pop();
        return val;
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    cout << "\nStack using One Queue:\n";
    StackOneQ st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.pop() << endl; 
    cout << st.pop() << endl; 
    cout << st.pop() << endl; 
    return 0;
}
