
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// Function to perform operations on List
void listOperations()
{
    list<int> l;
    int n, value, pos, key;

    cout << "\n--- LIST OPERATIONS ---\n";

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid number of elements.\n";
        return;
    }

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        l.push_back(value);
    }

    cout << "Original List: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Insertion
    cout << "Enter position for insertion (0 to "
         << l.size() << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if (pos >= 0 && pos <= (int)l.size())
    {
        auto it = l.begin();
        advance(it, pos);
        l.insert(it, value);

        cout << "List after insertion: ";
        for (int x : l)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid insertion position.\n";
    }

    // Deletion
    cout << "Enter position to delete (0 to "
         << l.size() - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos < (int)l.size())
    {
        auto it = l.begin();
        advance(it, pos);
        l.erase(it);

        cout << "List after deletion: ";
        for (int x : l)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid deletion position.\n";
    }

    // Searching
    cout << "Enter element to search: ";
    cin >> key;

    auto found = find(l.begin(), l.end(), key);

    if (found != l.end())
        cout << "Element found in List.\n";
    else
        cout << "Element not found in List.\n";

    // Sorting
    l.sort();

    cout << "List after sorting: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Reversing
    l.reverse();

    cout << "List after reversing: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    cout << "Size of List: " << l.size() << endl;
}

// Function to perform operations on Vector
void vectorOperations()
{
    vector<int> v;
    int n, value, pos, key;

    cout << "\n--- VECTOR OPERATIONS ---\n";

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid number of elements.\n";
        return;
    }

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    cout << "Original Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Insertion
    cout << "Enter position for insertion (0 to "
         << v.size() << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if (pos >= 0 && pos <= (int)v.size())
    {
        v.insert(v.begin() + pos, value);

        cout << "Vector after insertion: ";
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid insertion position.\n";
    }

    // Deletion
    cout << "Enter position to delete (0 to "
         << v.size() - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos < (int)v.size())
    {
        v.erase(v.begin() + pos);

        cout << "Vector after deletion: ";
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << "Invalid deletion position.\n";
    }

    // Searching
    cout << "Enter element to search: ";
    cin >> key;

    auto found = find(v.begin(), v.end(), key);

    if (found != v.end())
        cout << "Element found in Vector.\n";
    else
        cout << "Element not found in Vector.\n";

    // Sorting
    sort(v.begin(), v.end());

    cout << "Vector after sorting: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Reversing
    reverse(v.begin(), v.end());

    cout << "Vector after reversing: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    cout << "Size of Vector: " << v.size() << endl;
    cout << "Capacity of Vector: " << v.capacity() << endl;
}

int main()
{
    listOperations();
    vectorOperations();

    return 0;
}
