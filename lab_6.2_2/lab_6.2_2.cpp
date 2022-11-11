#include <iostream>
#include <time.h>
using namespace std;

void Show(int* a, const int n, int i)
{
    a[i] = -100 + rand() % (-100 - 100) + 1;
    if (i < n - 1)
        Show(a, n, i + 1);
}

void Print(int* a, const int n, int i)
{
    cout << a[i] << " ";
    if (i < n - 1)
        Print(a, n, i + 1);
    else
        cout << endl;
}

int IFirst(int* a, const int n, int &max, int i)
{
    if (a[i] % 2 != 0)
    {
        max = a[i];
        return i; 
    } 

    if (i < n - 1)
        return IFirst(a, n, max, i + 1);
    else
        return -1;
}
int Max(int* a, const int n, int max, int i)
{
    if (a[i] > max && a[i] % 2 != 0)
        max = a[i];
    if (i < n - 1)
        return Max(a, n, max, i + 1);
    else
        return max;
}

int main()
{
    srand((unsigned)time(NULL)); 
    const int n = 20;
    int a[n];
    Show(a, n, 0);
    cout << "a {"; Print(a, n, 0); cout << "}" << endl;
    int max; 
    int imax = IFirst(a, n, max, 0);
    cout << "Max = " << Max(a, n, max, imax + 1) << endl;
    return 0;

}