#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int s, int e, int x)
{
    int mid  = s + (e - s) / 2;
	while (s <= e) 
    {
		if (arr[mid] == x)
			return mid;

		else if (arr[mid] < x)
			s = mid + 1;

		else
			e = mid - 1;

        mid  = s + (e - s) / 2;
	}
	return 0;
}

int main(void)
{
    int n;
    cin >> n;
	int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
	int target;
    cin >> target;
    cout << binary_search(arr , 0 , n-1 , target);

    /*
	int result = binarySearch(arr, 0, n - 1, target);

	if(result)
    {
        cout << "Element is present";
    }

    else
    {
        cout << "Element is not present";
    }
*/

	return 0;
}
