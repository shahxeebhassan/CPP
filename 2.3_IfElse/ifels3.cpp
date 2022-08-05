// Find min and max of 2 num
// Bare minded
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n1, n2, max_no, min_no;
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;
    max_no = INT_MIN;
    min_no = INT_MAX;
    max_no = max(n1, n2);
    cout << max_no<<" is greatest" << endl;
    min_no = min(n1,n2);
    cout<<min_no<<" is smallest\n";
    return 0;
}