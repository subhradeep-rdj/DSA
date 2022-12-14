#include <bits/stdc++.h>
using namespace std;
void combination_sum(int n, int arr[], int index, int target, vector<int> &ds)
{

    if (index == n)
    {
        if (target == 0)
        {
            for (auto &&i : ds)
            {
                cout << i << ",";
            }
            cout << endl;
        }
        return;
    }

    if (arr[index] <= target)
    {

        ds.push_back(arr[index]);
        target -= arr[index];
        combination_sum(n, arr, index, target, ds);
        target += arr[index];
        ds.pop_back();
    }

    combination_sum(n, arr, index + 1, target, ds);
}
int main(int argc, char const *argv[])
{
    vector<int> ds;
    int arr[] = {2, 3, 5, 7};
    combination_sum(sizeof(arr) / sizeof(arr[0]), arr, 0, 7, ds);
    return 0;
}
