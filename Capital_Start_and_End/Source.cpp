#include<iostream>
using namespace std;

void change(int i, int s, string x)
{
    while (i < s)
    {
        char* p = &x[i];
        if ((*p >= 97 && *p <= 122) && (i == 0 || i == s - 1))
        {
            *p = *p - 32;
        }
        if ((*p >= 65 && *p <= 90) && (i != 0 && i != s - 1))
        {
            *p = *p + 32;
        }
        cout << *p;
        i++;
    }
}
int main()
{
START:
    string x;
    int s, i = 0, t = 0;
    cout << "Enter number: ";
    cin >> x;
    s = x.size();
    while (t < s)
    {
        char* p1 = &x[t];
        if (*p1 < 65 || (*p1 > 90 && *p1 < 97) || *p1 > 122)
        {
            cout << "Enter letter only." << endl;
            system("pause");
            system("CLS");
            goto START;
        }
        t++;
    }
    change(i, s, x);

    return 0;
}