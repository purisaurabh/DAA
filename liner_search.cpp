#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many element is store in the array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Which element you have find : ";
    cin >> target;

    bool flag = false;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == target)
        flag = true;
    } 

    if(flag)
    {
        cout << "Element is found";
    }

    else
    {
        cout << "Element is not found ";
    }
}