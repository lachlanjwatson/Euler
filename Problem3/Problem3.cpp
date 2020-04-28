#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long int num = 600851475143;
    while (num % 2 == 0) {
        cout << 2 << endl;
        num = num / 2;
    }
    for(int i = 3; i <= sqrt(num); i = i+2 ) {
        while(num % i == 0) {
            cout << i << " ";
            num = num / i;
        }
    }
    if (num > 2) {
        cout << num << " ";
    }
    return 0;
}