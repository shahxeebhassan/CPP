// input day number,,month and calculate remaining days of month
#include <iostream>
using namespace std;
int main()
{
    int day, month, total_days, days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "Enter the day:" << endl;
    cin >> day;
    total_days = day;
    cout << "Enter the month:" << endl;
    cin >> month;
    for (int i = 0; i < month - 1; i++)
    {
        total_days += days_per_month[i];
    }
    cout << "The number of days till this date are " << total_days << endl;

    return 0;
}