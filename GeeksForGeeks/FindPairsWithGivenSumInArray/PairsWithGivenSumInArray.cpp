// https://www.geeksforgeeks.org/print-all-pairs-with-given-sum/
// Using map
// Assumption: All the numbers are positive

#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    cin >> n;
    cin >> k;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        int remainder = k - arr[i];

        if (remainder < 0)
            continue;

        if (hash.find(remainder) != hash.end())
            count += hash[remainder];

        if (hash.find(arr[i]) != hash.end())
            hash[arr[i]]++;
        else
            hash[arr[i]] = 1;
    }

    cout << count << endl;

    return 0;
}	