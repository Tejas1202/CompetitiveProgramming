// https://www.geeksforgeeks.org/quick-sort/
// https://javarevisited.blogspot.com/2014/08/quicksort-sorting-algorithm-in-java-in-place-example.html
// QuickSort algorithm to sort an integer array taking pivot as last element here

using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 6, 5, 3, 1, 8, 7, 2, 4 };
            PrintArray(arr);

            QuickSort(arr, 0, arr.Length - 1);

            //Sorted Array
            PrintArray(arr);
        }

        static void QuickSort(int[] arr, int low, int high)
        {
            if (low < high)
            {
                int partitioningIndex = Partition(arr, low, high);

                QuickSort(arr, low, partitioningIndex - 1);
                QuickSort(arr, partitioningIndex + 1, high);
            }
        }

        static int Partition(int [] arr, int low, int high)
        {
            // Taking the last element as our pivot
            int pivot = arr[high];

            int i = low - 1;

            for (int j = low; j <= high - 1; j++)
            {
                if (arr[j] < pivot)
                {
                    i++;
                    Swap(arr, i, j);
                }
            }

            Swap(arr, i + 1, high);

            return i + 1;
        }

        static void Swap(int[] arr, int i, int j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        static void PrintArray(int[] arr)
        {
            foreach(var element in arr)
            {
                Console.Write(element + " ");
            }
            Console.WriteLine();
        }
    }
}