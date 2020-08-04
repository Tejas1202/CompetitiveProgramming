// https://www.hackerrank.com/challenges/30-binary-numbers/problem
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    stack<int> stack;
    while (n > 0)
    {
        int remainder = n % 2;
        n /= 2;
        stack.push(remainder);
    }

    int max_consecutive_ones = 0;
    bool was_last_index_one = false;
    int temp_consecutive_ones = 0;
    // Creating a variable for stack size as it's value will alter inside iterations when we pop
    int stack_size = stack.size();
    for (int i = 0; i < stack_size; i++)
    {
        if (stack.top() == 1)
        {
            temp_consecutive_ones = was_last_index_one ? temp_consecutive_ones + 1 : 1;

            if (temp_consecutive_ones > max_consecutive_ones)
            {
                max_consecutive_ones = temp_consecutive_ones;
            }
            was_last_index_one = true;
        }
        else
        {
            temp_consecutive_ones = 0;
            was_last_index_one = false;
        }
        stack.pop();
    }

    cout << max_consecutive_ones;
    return 0;
}