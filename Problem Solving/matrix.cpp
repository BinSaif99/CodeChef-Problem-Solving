#include <bits/stdc++.h>

using namespace std;

int sumOfSmallestRow(vector<vector<int>> matrix)
{
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        int min = matrix[i][0];
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int sumOfSmallestColumn(vector<vector<int>> matrix)
{
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        int min = matrix[0][i];
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[j][i] < min)
            {
                min = matrix[j][i];
            }
        }

        sum += min;
    }
    return sum;
}

int main(void)
{
    int r, c;

    cout << "Enter the number of rows: ";
    cin >> r;

    cout << "Enter the number of cols: ";
    cin >> c;

    vector<vector<int>> matrix = vector<vector<int>>(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int x;
            cout << "Enter the element(" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << sumOfSmallestRow(matrix) << endl;
    cout << sumOfSmallestColumn(matrix) << endl;
    return 0;
}
