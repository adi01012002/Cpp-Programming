#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> c = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> g = {0, 1, 0, 1, 0, 1, 0, 1};
    int min = 3;
    int sum = 0;
    for (int i = 0; i < min; i++)
    {
        // if (g[i] == 1)
        //     sum += c[i];
        // OR
        sum += c[i] * g[i];
    }
    int i = 1;
    int j = min;
    int maxSum = sum;
    int maxIdx = 0;
    while (j < c.size())
    {
        // if (g[j] == 1)
        //     sum += c[j];
        // if (g[i - 1] == 1)
        //     sum -= c[i - 1];
        // OR

        sum = sum + c[j] * g[j] - c[i - 1] * g[i - 1];

        if (sum > maxSum)
        {
            maxSum = sum;
            maxIdx = i;
        }
        cout << sum << " ";
        i++;
        j++;
    }
    cout << endl;
    cout << maxSum << " " << maxIdx;
    for (int i = maxIdx; i < maxIdx + min; i++)
    {
        g[i] = 0;
    }
    int sasum = 0;
    for (int i = 0; i < c.size(); i++)
    {
        if (g[i] == 0)
            sasum += c[i];
    }
    cout << endl;
    cout << sasum;
}