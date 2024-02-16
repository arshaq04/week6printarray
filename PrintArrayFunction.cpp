#include <iostream>
#include <vector>

using namespace std;

void print_array(int arrayF[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arrayF[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}
    
int main() {
    int numbers[] = {1, 2, 3};    
    print_array(numbers, 3);
    // will produce the output: [1, 2, 3]
    
    return 0;
}