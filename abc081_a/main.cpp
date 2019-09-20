#include<iostream>
using namespace std;
int main()
{
    char *str = (char *)malloc(3);
    int cnt;
    cin >> str;
    for(int i = 0; i < 3; i++) {
        if (&str[i] == "1") {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}