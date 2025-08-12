#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int i;
    float a[5], b[5], c[5], d[5];
    cout << "\n=============== GAUSS-JORDAN 4X4 ================\n\n Coloque los datos de la matriz dejando espacios\n\n   | A1 | A2 | A3 | A4 | A5 |\n   | B1 | B2 | B3 | B4 | B5 |\n   | C1 | C2 | C3 | C4 | C5 |\n   | D1 | D2 | D3 | D4 | D5 |\n\n   A1 B1 C1 D1   A2 B2 C2 D2   A3 B3 C3 D3   A4 B4 C4 D5: ";
    for (i = 0; i < 5; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    float pivotA1 = a[0], pivotB1 = b[0], pivotC1 = c[0], pivotD1 = d[0];
    for (i = 0; i < 5; i++) {
        a[i] /= pivotA1;
        b[i] = b[i] - (a[i] * pivotB1);
        c[i] = c[i] - (a[i] * pivotC1);
        d[i] = d[i] - (a[i] * pivotD1);
    }
    float pivotA2 = a[1], pivotB2 = b[1], pivotC2 = c[1], pivotD2 = d[1];
    for (i = 0; i < 5; i++) {
        b[i] /= pivotB2;
        c[i] = c[i] - (b[i] * pivotC2);
        a[i] = a[i] - (b[i] * pivotA2);
        d[i] = d[i] - (b[i] * pivotD2);
    }
    float pivotA3 = a[2], pivotB3 = b[2], pivotC3 = c[2], pivotD3 = d[2];
    for (i = 0; i < 5; i++) {
        c[i] /= pivotC3;
        a[i] = a[i] - (c[i] * pivotA3);
        b[i] = b[i] - (c[i] * pivotB3);
        d[i] = d[i] - (c[i] * pivotD3);
    }
    float pivotA4 = a[3], pivotB4 = b[3], pivotC4 = c[3], pivotD4 = d[3];
    for (i = 0; i < 5; i++) {
        d[i] /= pivotD4;
        a[i] = a[i] - (d[i] * pivotA4);
        b[i] = b[i] - (d[i] * pivotB4);
        c[i] = c[i] - (d[i] * pivotC4);
    }
    cout << "\n   | 1 | 0 | 0 | 0 | " << a[4] << " |\n   | 0 | 1 | 0 | 0 | " << b[4] << " |\n   | 0 | 0 | 1 | 0 | " << c[4] << " |\n   | 0 | 0 | 0 | 1 | " << d[4] << " |\n";
}
    // 1 2 -1 3 2 -1 3 -2 -1 2 3 1 1 3 -2 1 0 7 17 -2
    // 1 3 2 1 -2 4 -3 1 2 -1 2 -3 -3 1 -1 -2 15 -6 17 -7
    // 1 2 3 1 1 -1 2 -3 1 3 -1 2 1 -4 5 -4 10 9 13 -3
    // -3 4 2 7 2 -2 4 -3 -4 -2 1 2 1 3 -5 -9 -9 -27 18 -4
    // 3 -5 -3 -4 6 4 8 10 -2 5 2 3 9 -6 -3 9 6 5 3 9
