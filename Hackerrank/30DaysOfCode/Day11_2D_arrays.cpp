// https://www.hackerrank.com/challenges/30-2d-arrays/problem
// References: http://www.cplusplus.com/doc/tutorial/arrays/

#include <iostream>
#include <vector>
using namespace std;

int MaxElementsInHourGlass = 7;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    // As elements are ranging from -9 to 9, hence taking minimum integer
    int max_hourglass_sum = INT16_MIN;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int hourglass_sum = 0;
            int counter = 0;
            for (int h = -1; h < 2; h++)
            {
                // Condition check for out of bounds row
                if (i + h < 0 || i + h > 5)
                    break;

                for (int w = -1; w < 2; w++)
                {
                    // Condition check for out of bounds column
                    if (j + w < 0 || j + w > 5)
                        break;

                    // Avoid neighbour elements of centre element in hourglass
                    if (h == 0 && w != 0)
                        continue;

                    hourglass_sum += arr[i + h][j + w];
                    counter++;
                }
            }
            if (hourglass_sum > max_hourglass_sum && counter == MaxElementsInHourGlass)
            {
                max_hourglass_sum = hourglass_sum;
            }
        }
    }
    cout << max_hourglass_sum;

    return 0;
}

void featured_solution_in_editorial(vector<vector<int>> arr)
{
    int sum = -10000;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            // [00] [01] [02]
            //      [11]
            // [20] [21] [22]

            int currentSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                + arr[i + 1][j + 1]
                + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (currentSum > sum) {
                sum = currentSum;
            }
        }
    }
    cout << sum;
}