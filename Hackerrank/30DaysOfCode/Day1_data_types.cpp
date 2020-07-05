// https://www.hackerrank.com/challenges/30-data-types/problem

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// <string> header for using getline function and <iomanip> for setprecision function
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int j = 0;
    double e = 0.0;
    string t;

    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> e;
    // ws to consume the whitespace or newline between the end of a token and the beginning of next line (which failing to add reads "")
    getline(cin >> ws, t);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(2) << d + e << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + t << endl;
    return 0;
}