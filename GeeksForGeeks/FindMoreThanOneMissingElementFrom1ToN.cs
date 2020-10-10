// https://www.geeksforgeeks.org/find-four-missing-numbers-array-containing-elements-1-n/
// Find more than one missing element in an array with 1 to N unique elements

using System;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        // O(n) time and O(n) space
        static void Main(string[] args)
        {
            int[] array = new int[] { 2, 5, 6, 3, 9 };
            var max = array.Max();
            var helperArray = new int[max + 1];

            foreach (var element in array)
            {
                helperArray[element]++;
            }

            for (int i = 1; i < helperArray.Length; i++)
            {
                if (helperArray[i] == 0)
                    Console.WriteLine(i);
            }
        }
    }
}
