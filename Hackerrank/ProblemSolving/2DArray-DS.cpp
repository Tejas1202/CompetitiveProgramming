// https://www.hackerrank.com/challenges/2d-array/problem

#include <iostream>
#include <vector>
using namespace std;

int hourglassSum(vector<vector<int>> arr);

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

    int result = hourglassSum(arr);

    cout << result << endl;

    return 0;
}

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    // As minimum sum can be -9 * 7 = -63
    int maxSum = -63;

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            int sum = 0;
            // No of elements added to become an hourglass sum
            int hourGlass = 0;
            for (int h = -1; h < 2; h++)
            {
                if (i + h < 0 || i + h > 5)
                    continue;
                else
                {
                    for (int w = -1; w < 2; w++)
                    {
                        if ((w + j < 0 || w + j > 5) || (h == 0 && w != 0))
                            continue;
                        else
                        {
                            sum += arr[i + h][j + w];
                            hourGlass++;
                        }
                    }
                }
            }
            if (hourGlass == 7 && maxSum < sum)
                maxSum = sum;
        }
    }

    return maxSum;
}