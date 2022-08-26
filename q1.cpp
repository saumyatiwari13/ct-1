//Name: Saumya Tiwari
//Group: 20
//Roll number: 2010991716
//Set: 04
//Q1

#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
    unordered_set<int> set; // creating an empty set to store array elements

    // traversing the array elements from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(arr[i]) != set.end()) // if the element is found before, we update the minimum index
        {
            minIndex = i;
        }
    
    // if the element is found for the first time, we insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    if (minIndex == n) // invalid input
    {
        return -1;
    }
    return minIndex; // returns minimum index
}

int main()
{
    int n;
    cout<<"Enter length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array: ";
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }

    int minIndex;
    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else
    {
        cout << "The minimum index of the repeating element is -1"; //for invalid input
    }

    return 0;
}

