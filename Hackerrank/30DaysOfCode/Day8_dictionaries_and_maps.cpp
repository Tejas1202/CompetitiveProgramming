// https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

// References:
// https://blog.udacity.com/2020/03/c-maps-explained.html
// https://docs.oracle.com/javase/tutorial/java/concepts/interface.html
// https://docs.microsoft.com/en-us/dotnet/api/system.collections.generic.dictionary-2?redirectedfrom=MSDN&view=netcore-3.1

#include <iostream>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_of_entries;
    cin >> number_of_entries;
    map<string, string> phone_book;

    for (int i = 0; i < number_of_entries; i++)
    {
        string name;
        string number;
        cin >> name >> number;
        phone_book[name] = number;
    }

    string name;
    while (cin >> name)
    {
        if (phone_book.find(name) == phone_book.end())
        {
            cout << "Not found" << endl;
            continue;
        }
        cout << name << "=" << phone_book[name] << endl;
    }
}