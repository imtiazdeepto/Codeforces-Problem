// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;
int newYear(int year)
{
    int frist, second, third, fourth;
    while (true)
    {
        year++;
        frist = year % 10;
        second = year / 10 % 10;
        third = year / 100 % 10;
        fourth = year / 1000;
        if (frist != second and second != third and third != fourth and fourth != frist and third != frist and second != fourth)
        {
            return year;
        }
    }
}
int main()
{
    int year;
    cin >> year;
    cout << newYear(year) << endl;
}