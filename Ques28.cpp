// Implement a queue using two stacks.
#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> s1, s2;

public:
    // Enqueue (push element to the end)
    void enqueue(int value) {
        s1.push(value);
        cout << value << " enqueued to queue." << endl;
    }

    // Dequeue (pop element from the front)
    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        // If s2 is empty, transfer from s1
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << s2.top() << " dequeued from queue." << endl;
        s2.pop();
    }

    // Peek front element
    void peek() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Front element is: " << s2.top() << endl;
    }

    // Display queue
    void display() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        stack<int> temp1 = s1;
        stack<int> temp2 = s2;

        // Print s2 in top to bottom order
        while (!temp2.empty()) {
            cout << temp2.top() << " ";
            temp2.pop();
        }

        // Print s1 in reverse
        stack<int> tempReverse;
        while (!temp1.empty()) {
            tempReverse.push(temp1.top());
            temp1.pop();
        }
        while (!tempReverse.empty()) {
            cout << tempReverse.top() << " ";
            tempReverse.pop();
        }

        cout << endl;
    }
};

int main() {
    QueueUsingStacks q;
    int choice, value;

    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
