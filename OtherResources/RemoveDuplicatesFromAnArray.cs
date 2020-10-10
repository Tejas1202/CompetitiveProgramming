// https://javarevisited.blogspot.com/2014/01/how-to-remove-duplicates-from-array-java-without-collection-API.html
// https://javarevisited.blogspot.com/2012/12/how-to-remove-duplicates-elements-from-ArrayList-Java.html
// Find and remove duplicates (Can do via using built in Dictionary too)

using System;
using System.Collections.Generic;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[] { 2, 3, 5, 0, 2, 7, 5, 3, 8 };

            int max = array.Max();
            int[] hashSet = new int[max + 1];

            for (int i = 0; i < array.Length; i++)
            {
                hashSet[array[i]]++;
            }

            var list = new List<int>();

            for (int i = 0; i <= max; i++)
            {
                if (hashSet[i] > 0)
                    list.Add(i);
            }

            array = list.ToArray();
            foreach (var elem in array)
                Console.WriteLine(elem);
        }
    }
}
