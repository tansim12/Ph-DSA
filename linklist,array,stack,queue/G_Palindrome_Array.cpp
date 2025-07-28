#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    int firstIndex = 0;
    int LastIndex = n-1;
    bool isPalindrome = true;

    while (firstIndex <= LastIndex)
    {
       if (arr[firstIndex] != arr[LastIndex])
            {
                /* code */
                isPalindrome= false;
                break;
            }

            firstIndex++;
            LastIndex--;
    }

    if (isPalindrome == 1)
    {
        /* code */
        cout << "YES";
    }else {
        
        cout << "NO";
    }
    
    
    
    return 0;
}