#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int i;
    float a[4], b[4], c[4];
    cout << "\n=============== GAUSS-JORDAN 3X3 ================\n\n Coloque los datos de la matriz dejando espacios\n\n   | A1 | A2 | A3 | A4 |\n   | B1 | B2 | B3 | B4 |\n   | C1 | C2 | C3 | C4 |\n\n   A1 B1 C1   A2 B2 C2   A3 B3 C3   A4 B4 C4: ";
    for (i = 0; i < 4; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    float pivotA1 = a[0], pivotB1 = b[0], pivotC1 = c[0];
    for (i = 0; i < 4; i++) {
        a[i] /= pivotA1;
        b[i] = b[i] - (a[i] * pivotB1);
        c[i] = c[i] - (a[i] * pivotC1);
    }
    float pivotA2 = a[1], pivotB2 = b[1], pivotC2 = c[1];
    for (i = 0; i < 4; i++) {
        b[i] /= pivotB2;
        c[i] = c[i] - (b[i] * pivotC2);
        a[i] = a[i] - (b[i] * pivotA2);
    }
    float pivotA3 = a[2], pivotB3 = b[2], pivotC3 = c[2];
    for (i = 0; i < 4; i++) {
        c[i] /= pivotC3;
        a[i] = a[i] - (c[i] * pivotA3);
        b[i] = b[i] - (c[i] * pivotB3);
    }
    cout << "\n   | 1 | 0 | 0 | " << a[3] << " |\n   | 0 | 1 | 0 | " << b[3] << " |\n   | 0 | 0 | 1 | " << c[3] << " |\n\n";
}
    // 2 3 -1   -1 1 2   1 -2 5   2 9 -5                2 1 -1
    // 1 2 3    -2 -1 5  -3 7 5   3 -4 6                2 1 -1
    // 1 1 2    -1 1 2   3 1 -1   13 11 7               2 4 5
    // 3 1 4    2 -1 5   -1 2 1   -7 3 0                -2 1 3
    // 2 -3 -2  1 -1 1   -1 2 2   8 -11 -3              2 3 -1
