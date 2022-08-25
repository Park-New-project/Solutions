#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    int X;
    cin >> X;
    
    //1일 경우
    if (X == 1)
    {
         cout << 1 << "/" << 1 << "\n";
         return 0;
    }

    int sum = 1; //대각선에 속한 분수들의 분모 + 분자
    long long cnt = 0;
    int num = 1;

    while (1)
    {
        sum++;
        cnt += num;
        if (cnt >= X)
            break;
        num++;
    }

    int child = 1, parent = 1;

    if (sum % 2)
        child = sum - 1;
    else
        parent = sum - 1;

    while (1)
    {
        if (cnt == X)
            break;
        if (sum % 2)
        {
            parent++;
            child--;
        }
        else
        {
            child++;
            parent--;
        }
        cnt--;
    }
    cout << child << "/" << parent << "\n";
    return 0;
}