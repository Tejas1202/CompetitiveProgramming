#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
// https://www.hackerrank.com/challenges/30-review-loop/problem

#include <algorithm>
#include <string>
using namespace std;

void processString(string s);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_of_testcases;
    cin >> number_of_testcases;
    
    for (int i = 0; i < number_of_testcases; i++)
    {
        string input_string;
        cin >> input_string;
        processString(input_string);
    }
    return 0;
}

void processString(string s)
{
    int length = s.length();
    // + 1 to add null character at the end
    int array_length = length / 2 + 1;
    char* odd_indexed_chars = new char[array_length];
    for (int i = 0, j = 0; i < length; i++)
    {
        if (i % 2 == 0)
            cout << s[i];
        else
            odd_indexed_chars[j++] = s[i];
    }
    cout << " ";
    odd_indexed_chars[array_length - 1] = '\0';
    cout << odd_indexed_chars << endl;
}