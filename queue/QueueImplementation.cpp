#include <bits/stdc++.h>

using namespace std;

struct Queue {
    int front, rear, size;
    int * queue;
    Queue(int c) {
            front = rear = 0;
            size = c;
            queue = new int;
        }

        ~Queue() {
            delete[] queue;
        }

    // to insert an element in the queue
    void enqueue(int element) {
        if (size == rear) {
            cout << "Queue is full" << endl;
            return;
        } else {
            cout << "Element inserted" << endl;
            queue[rear] = element;
            rear++;
        }
        return;
    }

    // function to delete an element from the queue
    void dequeue() {
        // to check if the queue is empty
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        // shift all the elements from index 1 till the last element to the left by 1
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            cout << "Element deleted" << endl;
            // decrement the rear
            rear--;
        }
        return;
    }

    // function to print the elements of the queue
    void printQueue() {
        // to check if queue is empty
        if (front == rear) {
            cout << "Queue is Empty" << endl;
            return;
        }

        // traverse front to rear and print elements
        cout << "The queue is: ";
        for (int i = front; i < rear - 1; i++) {
            cout << queue[i] << " <-- ";
        }
        cout << queue[rear - 1] << endl;
        return;
    }

    // print the front of the queue
    void getFront() {
        // to check if the queue is empty
        if (front == rear) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Front element is: " << queue[front] << endl;
        return;
    }
};

// Driver code
int main() {
    // To create a queue of size 5
    Queue queue(5);

    // print the queue elements
    queue.printQueue();

    // inserting elements in the queue
    queue.enqueue(7);
    queue.enqueue(4);
    queue.enqueue(9);
    queue.enqueue(6);

    // print the queue elements
    queue.printQueue();

    // insert the element in the queue
    queue.enqueue(1);

    // print the queue elements
    queue.printQueue();

    // deletion of the front element from the queue
    queue.dequeue();

    // print the queue elements
    queue.printQueue();

    // deletion of the front element from the queue
    queue.dequeue();

    // print Queue elements
    queue.printQueue();

    // print the front element of the queue
    queue.getFront();

    return 0;
}