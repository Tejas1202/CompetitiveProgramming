// https://www.java67.com/2014/02/how-to-find-largest-and-smallest-number-array-in-java.html
// Find largest and smallest in an array

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[] { 1, 4, 6, 8, 10, 16, 25, 17};

            int smallest = array[0];
            int largest = array[0];
            foreach(var element in array)
            {
                if (element > largest)
                    largest = element;
                else if (element < smallest)
                    smallest = element;
            }
        }
    }
}