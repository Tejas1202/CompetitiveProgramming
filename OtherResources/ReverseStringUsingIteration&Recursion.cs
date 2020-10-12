// https://javarevisited.blogspot.com/2012/01/how-to-reverse-string-in-java-using.html
// https://www.geeksforgeeks.org/different-ways-to-convert-char-array-to-string-in-c-sharp/
// Reverse string using iteration and recursion

using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> testCases = new List<string> { "abcdefghija", "swiss", "archer" };

            foreach (var testCase in testCases)
            {
                Console.WriteLine(ReverseString(testCase));
                PrintStringUsingRecursion(testCase);
                Console.WriteLine();
            }
        }

        private static string ReverseString(string s)
        {
            //var reversedString = s.Reverse();
            var reverseArray = new char[s.Length];
            for (int i = s.Length - 1, j = 0; i >=0; i--, j++)
            {
                reverseArray[j] = s[i];
            }

            string reversedString = new string(reverseArray);

            return reversedString;
        }

        private static void PrintStringUsingRecursion(string s)
        {
            if (string.IsNullOrWhiteSpace(s) || s.Length <= 1)
                Console.Write(s);
            else
            {
                Console.Write(s[s.Length - 1]);
                PrintStringUsingRecursion(s.Substring(0, s.Length - 1));
            }
        }
    }
}