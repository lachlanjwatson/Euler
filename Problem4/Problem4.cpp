#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int biggest = 0;
    for(int i = 999; i > 0; i--) {
        for(int j = 999; j > 0; j--) {
            long int original = i*j;
            long int toBeDivided = original;
            long int reversed = 0, remainder;
            while (toBeDivided != 0) {
                remainder = toBeDivided % 10;
                reversed = reversed*10 + remainder;
                toBeDivided /= 10;
            }
            if (original == reversed) {
                if (original > biggest) {
                    biggest = original;
                }
            }
        }
    }
    cout << biggest;
    return 0;
}

