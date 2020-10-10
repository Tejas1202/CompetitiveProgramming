// https://www.geeksforgeeks.org/find-the-missing-number/
// Find missing element in 1 to N
// Doesn't work if the array contains more than one missing elements or duplicates

using System;

namespace ConsoleApp1
{
    class Program
    { 
        static void Main(string[] args)
        {
            int numberOfTestCases = int.Parse(Console.ReadLine());
            for (int i = 0; i < numberOfTestCases; i++)
            {
                int size = int.Parse(Console.ReadLine());
                string[] input = Console.ReadLine().Split(' ');
                var array = new int[input.Length];
                var actualSum = 0;
                for (int j = 0; j < input.Length; j++)
                {
                    array[j] = int.Parse(input[j]);
                    actualSum += array[j];
                }

                int expectedSum = size * (size + 1) / 2;
                Console.WriteLine(expectedSum - actualSum);
            }
        }
    }
}
