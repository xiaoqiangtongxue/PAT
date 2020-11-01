#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
double Dart(int n)
{
    int k = 0;
    double x = 0.0, y = 0.0;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        x = rand() / double(RAND_MAX);
        y = x;
        if (x * x + y * y <= 1)
            k++;
    }
    return double(k) / double(n) * 4;
}
int main()
{
    int n;
     cin >> n;
     cout << Dart(n);
    return 0;
}