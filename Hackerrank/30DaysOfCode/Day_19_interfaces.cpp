// https://www.hackerrank.com/challenges/30-interfaces/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;
        // n / 2 as if n = 20, then the max divisor it'll have is 10
        for (int i = 1, j = n / 2; i <= j; i++)
        {
            if (n % i == 0)
                sum += i;
        }
        // As the number is also divisible by itself
        sum += n;

        
        return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}