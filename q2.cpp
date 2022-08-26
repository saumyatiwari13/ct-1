//Name: Saumya Tiwari
//Roll number: 2010991716
//Set: 04
//Q2

#include <bits/stdc++.h>
using namespace std;

bool areConsecutive(int arr[], int n) //Function to check if elements of array are consecutive
{
    
    sort(arr, arr + n); //Sorting the array
    
    // Checking the adjacent elements of the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool r;
    try
    {
        r = areConsecutive(arr, n);
    }
    catch (int error) //exception handling
    {
        cout << "Error: " << error << endl;
    }

    if (r == true)
        cout << "The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1];
    else
        cout << "The array does not contain consecutive integers as element " <<arr[i]<<" is repeated.";
    return 0;
}

