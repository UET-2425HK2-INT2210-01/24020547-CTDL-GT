// 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = nullptr;
    }
};

class stack {
public:
    node* head;
    int size = 0;
    stack() {
        head = nullptr;
    }
    void push(int data) {
        node* newnode = new node(data);
        if (head == nullptr) {
            head = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
        ++size;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        else {
            node* tmp = head;
            head = head->next;
            delete tmp;
        }
        --size;
    }
    void print() {
        node* p = head;
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    stack q;
    while (t--) {
        string s;
        cin >> s;
        if (s == "push") {
            int n;
            cin >> n;
            q.push(n);
        }
        if (s == "pop") {
            q.pop();
        }
    }
    q.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
