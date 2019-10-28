#include <iostream>
#include <numeric>

using namespace std;


// 問題文
// たこ焼きフェスティバル (たこフェス) の季節がやってきました！

// 今年のたこフェスでは N 個のたこ焼きがふるまわれる予定です。このうち i 個目のたこ焼きのおいしさは di です。
// ところで、おいしさが x と y であるたこ焼きを一緒に食べると、体力が x × y 回復することが一般に知られています。
// たこフェスでふるまわれる N 個のたこ焼きから、2 個を選ぶ方法はN×(N−1) / 2通り考えられます。そのそれぞれについて、一緒に食べたときの体力の回復量を求めて、その総和を出力してください。

int main()
{
    int n;
    cin >> n;

    char *str = (char *)malloc(n);
    cin >> str;

    const size_t size = sizeof(str) / sizeof(str[0]);
    int sum = std::accumulate(str, str + size, 0);
    cout << sum;
    return 0;
}