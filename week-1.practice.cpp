//! Running Sum of an Array
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n ;
//     cin >> n ;
//     vector<int> arr(n);
//     vector<int> prefixArray(n);
//     for (auto &&i : arr)
//     {
//         cin >> i ;
//     }
//     int sum = 0 ;
//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//          prefixArray[i] = sum+arr[i];
//         sum +=arr[i];
//         cout << prefixArray[i] << " ";
//     }

//     return 0;
// }

//! Equilibrium Index
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (auto &&i : arr)
//     {
//         cin >> i;
//     }

//     for (size_t i = 0; i < n; i++)
//     {
//         int sumOfLeft = 0, sumOfRight = 0;

//         //  i এর উপরে depend করে right side loop
//     for (size_t j = i + 1; j < n; j++)
//         {
//             sumOfRight += arr[j];
//         }

//         //  i এর উপরে depend করে left side loop
//          for (size_t k = 0; k < i; k++)
//         {
//             sumOfLeft += arr[k];
//         }

//          if (sumOfLeft == sumOfRight)
//         {
//             cout  << i << endl;
//         }
//     }

//     return 0;
// }

// !Equilibrium Index using prefix sum .
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     int totalSum =0,leftSum = 0;
//     for (auto &&i : arr)
//     {
//         cin >> i;
//         totalSum+=i;
//     }

//     for (size_t i = 0; i < n; i++)
//     {
//         /* code */
//         totalSum -= arr[i] ;// now totalSum is right sum. টোটাল থেকে arr[i] বাদ দিলেই rightSum থাকে

//         if (totalSum == leftSum)
//         {
//             /* code */
//             cout << i << endl  ;
//         }
//         leftSum += arr[i];

//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &&i : arr)
    {
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        int left = 0;
        int right = arr.size() - 1;
        bool isFound = false;
        int givenValue;
        cin >> givenValue;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            /* code */
            if (arr[mid] == givenValue)
            {
                /* code */
                isFound = true;
                break;
            }
            else if (arr[mid] < givenValue)
            {
                /* code */
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (isFound)
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
