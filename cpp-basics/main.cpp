#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string lines[n];

    for (int i=0; i<n; i++) {
        string linei;
        cin >> linei;
        lines[i] = linei;
    }

    for (int i=0; i<n; i++) {
        cout << lines[i] << endl;
    }

    return 0;
}
