// https://www.geeksforgeeks.org/find-common-elements-three-sorted-arrays/
// Find common element in three sorted arrays

using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr1 = { 1, 5, 10, 20, 40, 80 };
            int[] arr2 = { 6, 7, 20, 80, 100 };
            int[] arr3 = { 3, 4, 15, 20, 30, 70, 80, 120 };

            int i = 0, j = 0, k = 0;

            while (i < arr1.Length)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
                {
                    Console.WriteLine(arr1[i]);
                    i++; j++; k++;
                }
                else
                {
                    if (arr1[i] < arr2[j])
                        i++;
                    else if (arr2[j] < arr3[k])
                        j++;
                    // We reach here when x > y and z < y i.e. z is smallest
                    else
                        k++;
                }
            }

        }
    }
}