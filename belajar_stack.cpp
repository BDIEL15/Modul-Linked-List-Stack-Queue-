#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elemen ke stack
    s.push(10);   // stack: [10]
    s.push(20);   // stack: [10, 20]
    s.push(30);   // stack: [10, 20, 30] ← top

    cout << "Top: " << s.top() << endl;  // Output: 30
    cout << "Size: " << s.size() << endl; // Output: 3

    s.pop();  // Hapus 30, stack: [10, 20]
    cout << "Setelah pop, top: " << s.top() << endl; // 20

    // Traversal stack (sambil menghapus)
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    // Output: 20 10

    return 0;
}