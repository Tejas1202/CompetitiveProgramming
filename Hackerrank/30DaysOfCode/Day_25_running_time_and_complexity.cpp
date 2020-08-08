// https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem
// Refernces: https://www.geeksforgeeks.org/primality-test-set-1-introduction-and-school-method/
//	    : https://en.wikipedia.org/wiki/Primality_test

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_testcases = 0;
    cin >> no_of_testcases;
    while (no_of_testcases-- > 0)
    {
        int input;
        cin >> input;
        if (input <= 1)
            cout << "Not prime";
        else if (input <= 3)
            cout << "Prime";
        else if (input % 2 == 0)
            cout << "Not prime";
        else 
        {
            bool is_prime = true;
            for (int i = 2; i*i <= input; i++)
            {
                if (input % i == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime)
                cout << "Prime";
            else
                cout << "Not prime";
        }
        cout << endl;
    }
    return 0;
}
