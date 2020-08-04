// https://www.hackerrank.com/challenges/30-sorting/problem
// https://en.wikipedia.org/wiki/Sorting_algorithm

#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    // Write Your Code Here
    int totalSwaps = 0;
    for (int i = 0; i < n; i++)
    {
        int numberOfSwaps = 0;

        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                numberOfSwaps++;
                totalSwaps++; 
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0)
            break;
    }

    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;

    return 0;
}