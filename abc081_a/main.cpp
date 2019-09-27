#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char *str = (char *)malloc(2);
    int cnt;
    cin >> str;
    for(int i = 0; i < 3; i++) {
        if (strncmp("1",&str[i],1)==0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}