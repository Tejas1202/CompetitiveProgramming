// https://www.hackerrank.com/challenges/30-scope/problem
// Note: The algorithm written here takes O(n^2) time, however going through the editorial other possible solutions were: 
//       1. Sort the array using Array.Sort() in any language, e.g C++ sort takes O(nlogn) time, and then just find the diff between last and first element
//	 2. Iterate through the elements once and find max and min and then do the difference, hence O(n) time
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;
  
public:
    int maximumDifference;

	// Add your code here
    Difference(vector<int> elements)
    {
        this->elements = elements;
        this->maximumDifference = 0;
    }

    void computeDifference()
    {
	int size = elements.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int diff = abs(elements[i] - elements[j]);
                if (diff > maximumDifference)
                {
                    maximumDifference = diff;
                }
            }
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}