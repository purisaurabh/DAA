#include <bits/stdc++.h>
using namespace std;

const bool compare(vector <float> &v1, vector<float>&v2)
{
    return v1[1] > v2[1];
}

int main()
{
    int n;
    cout << "Number of items : ";
    cin >> n;

    int capacity;
    cout << "Enter the number of capacity : ";
    cin >> capacity;

    float profit[n];
    float weight[n];
    float arr[n];

    for(int i = 0 ; i <n ; i++)
    {
        arr[i] = 0;
    }



    for(int i = 0 ; i < n ; i++)
    {   
        cout << "Item no : " <<  i + 1 << endl;
        cout << "Profit is : ";
        cin >> profit[i];
        cout << "Weight is : ";
        cin >> weight[i];
    }

    vector<vector<float>>pw (n , vector<float>(2 , 0));

    for(int i = 0 ; i < n ; i++)
    {
        pw[i][0] = i;
        pw[i][1] = profit[i]/weight[i];
    }

    sort(pw.begin() , pw.end() , compare);

    int max_profit = 0;

    int i = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(capacity > weight[int(pw[i][0])])
        {
            capacity -= weight[int(pw[i][0])];
            max_profit += profit[int(pw[i][0])];
            arr[i] = 1;
        }

        else
        {
            break;
        }
    }


    if(capacity > 0 && i < n)
    {
        float rem = capacity / weight[int(pw[i][0])];
        max_profit += (rem * profit[int(pw[i][0])]);
        arr[i] = rem;
    }

    cout << "maximum profit is : " << max_profit << endl;
    cout << "[";
    for(int i = 0 ; i < n ; i++)
    {
            cout << arr[i];
            if(i != n-1)
            {
                cout<<",";
            }
    }

    cout << "]";

}