// https://www.geeksforgeeks.org/binary-search/
// Binary Search on a sorted array using iterative and recursive approach

using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            // Using Iterative Binary Search
            Console.WriteLine(BinarySearch(arr, 8));
            Console.WriteLine(BinarySearch(arr, 4));
            Console.WriteLine(BinarySearch(arr, 11));
            Console.WriteLine(BinarySearch(arr, 0));

            // Using Recursive Binary Search
            Console.WriteLine(RecursiveBinarySearch(arr, 0, arr.Length - 1, 8));
            Console.WriteLine(RecursiveBinarySearch(arr, 0, arr.Length - 1, 4));
            Console.WriteLine(RecursiveBinarySearch(arr, 0, arr.Length - 1, 11));
            Console.WriteLine(RecursiveBinarySearch(arr, 0, arr.Length - 1, 0));
        }

        static bool BinarySearch(int[] arr, int n)
        {
            int low = 0;
            int high = arr.Length - 1;

            int mid = 0;

            while (low <= high)
            {
                mid = low + (high - low) / 2;

                if (arr[mid] == n)
                    return true;
                else if (arr[mid] < n)
                    low = mid + 1;
                else
                    high = mid - 1;
            }

            return false;
        }

        static bool RecursiveBinarySearch(int[] arr, int low, int high, int n)
        {
            if (low <= high) 
            { 
                int mid = low + (high - low) / 2;

                if (arr[mid] == n)
                    return true;
                else if (arr[mid] < n)
                    return RecursiveBinarySearch(arr, mid + 1, high, n);
                else
                    return RecursiveBinarySearch(arr, low, mid - 1, n);
            }

            return false;
        }
    }
}