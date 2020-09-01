#include <iostream>
#include <vector>
using namespace std;

vector<vector<unsigned long long>> Fib(long& n)
{
    vector<vector<unsigned long long>> f;
    f.resize(50, vector<unsigned long long>(n));
    f[0][0] = 0;    f[1][0] = 1;
    int i, j;
    for (i = 2; i < n; i++)
        for (j = 0; j < 50; j++)
        {
            f[i][j] = f[i - 1][j] + f[i - 2][j];
        }
    
    return f;
}

int main()
{
    long n;
    cin >> n;
    int s;    
    ++n;
    vector<vector<unsigned long long>> f;
    f.resize(50, vector<unsigned long long>(n));
    f = Fib(n);
    //for (auto i = f.begin(); i != f.end(); ++i)
/*    for (auto i : f)
    {
        cout << i << " ";
    }       
*/
    for (int i = 0; i < 50; i++)
    {
        cout << f.at(n).at(i);
    }
    
    cout << endl;
    return 0;
}