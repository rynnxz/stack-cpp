#include <iostream>
using namespace std;

#define MAX 10 // Mendefinisikan ukuran maksimal stack

class Stack {
    int top; // Menyimpan indeks elemen teratas
    int a[MAX]; // Array untuk menyimpan elemen stack

public:
    Stack() { top = -1; } // Constructor untuk inisialisasi stack
    bool push(int x);
    int pop();
    void display();
    bool isEmpty();
};

// Fungsi untuk menambahkan elemen ke stack
bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

// Fungsi untuk menghapus elemen teratas dari stack
int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

// Fungsi untuk menampilkan semua elemen dalam stack
void Stack::display() {
    if (top < 0) {
        cout << "Stack is Empty" << endl;
        return;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
}

// Fungsi untuk memeriksa apakah stack kosong
bool Stack::isEmpty() {
    return (top < 0);
}

// Fungsi utama untuk menjalankan program
int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << s.pop() << " popped from stack\n";
    s.display();

    return 0;
}