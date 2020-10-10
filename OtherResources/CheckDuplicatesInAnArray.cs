// https://javarevisited.blogspot.com/2012/02/how-to-check-or-detect-duplicate.html
// Find Duplicates in an array

using System;
using System.Linq;
using System.Collections.Generic;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[] { 2, 5, 6, 3, 9 , 2, 6};
            Dictionary<int, int> dictionary = new Dictionary<int, int>();
            
            foreach(var element in array)
            {
                if (dictionary.ContainsKey(element))
                    dictionary[element]++;
                else
                    dictionary.Add(element, 1);
            }

            var duplicatesList = dictionary.Where(x => x.Value > 1).ToList();

            foreach(var duplicate in duplicatesList)
                Console.WriteLine(duplicate.Key);
        }
    }
}