#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    const int oneBoxCount = 15;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        int calcX = x * 1;  
        int calcY = y * 4;  
        int totalSquares = calcX + calcY;

        int needBox = 0;

        if (x == 0 && y == 0)
        {
            needBox = 0;
        }
        else if (y >= 2)
        {
            // Initial boxes from y
            needBox = (y + 1) / 2; 
            int totalSqCount = needBox * oneBoxCount;

            if (totalSquares > totalSqCount)
            {
                int extraSq = totalSquares - totalSqCount;
                needBox += (extraSq + oneBoxCount - 1) / oneBoxCount; // ceil(extraSq / oneBoxCount)
            }
        }
        else
        {
            // No special rule for y, just fit everything in boxes
            needBox = (totalSquares + oneBoxCount - 1) / oneBoxCount; // ceil(totalSquares / oneBoxCount)
        }

        cout << needBox << endl;
    }

    return 0;
}
