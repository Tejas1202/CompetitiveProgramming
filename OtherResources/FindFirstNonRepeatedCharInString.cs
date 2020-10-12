// https://javarevisited.blogspot.com/2014/03/3-ways-to-find-first-non-repeated-character-String-programming-problem.html
// Find first non repeated character in a string

using System;
using System.Collections.Generic;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> testCases = new List<string> { "abcdefghija", "swiss", "tenet" };

            foreach (var testCase in testCases)
            {
                Console.WriteLine(FindFirstNonRepeatedCharacter(testCase));
            }
        }

        // O(n) time using one extra space for list as it maintains insertion order (standard space vs time tradeoff)
        // Can do it in O(2n) times if we don't want to use extra space by iterating and comparing original string with dictionary OR
        // can simply iterate through dictionary picking up the first element whose count is one (as here Dictionary is also maintaining Insertion order)
        public static char FindFirstNonRepeatedCharacter(string s)
        {
            Dictionary<char, int> keyValuePairs = new Dictionary<char, int>();
            List<char> nonRepeatedCharacters = new List<char>();

            foreach (var character in s)
            {
                if (keyValuePairs.ContainsKey(character))
                {
                    keyValuePairs[character]++;
                    nonRepeatedCharacters.RemoveAll(c => c == character);
                }
                else
                {
                    keyValuePairs.Add(character, 1);
                    nonRepeatedCharacters.Add(character);
                }
            }

            return nonRepeatedCharacters[0];
        }
    }
}
