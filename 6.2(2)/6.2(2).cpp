// рекурсія
#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

int sumOddIndicesRecursive(const int a[], int size, int index = 0) {
    if (index >= size) {
        return 0;
    }
    if (a[index] % 2 != 0) {
        return index + sumOddIndicesRecursive(a, size, index + 1);
    }
    else {
        return sumOddIndicesRecursive(a, size, index + 1);
    }
}

int main() {
    int n;

    cout << " Numbers  " << MAX_SIZE << " = ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << " n <= " << MAX_SIZE << "!!!" << endl;
        return 1;
    }

    int a[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        cout << "Enter №" << i << " = ";
        cin >> a[i];
    }

    int result = sumOddIndicesRecursive(a, n);
    cout << "Sum = " << result << endl;

    return 0;
}
