// https://www.hackerrank.com/challenges/30-nested-logic/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // Actual day, month and year
    int da, ma, ya;
    // Expected day, month and year
    int de, me, ye;

    cin >> da >> ma >> ya;
    cin >> de >> me >> ye;

    if (ya > ye)
        cout << "10000";
    else if (ma > me && ya == ye)
        cout << 500 * (ma - me);
    else if (da > de && ma == me && ya == ye)
        cout << 15 * (da - de);
    else
        cout << 0;

    return 0;
}