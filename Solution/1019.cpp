#include <iostream>
using namespace std;
 
long long start, finish, temp;
int answer[10];
 
void sol(int n) {
  for (int j = n; j > 0; j/=10) {
    answer[j%10] += temp;
  }
}
 
int main(int argc, char const *argv[]) {
  // freopen("input.txt", "r", stdin);
  start = 1;
  temp = 1;
  cin >> finish;
 
  while (start <= finish) {
    while (start % 10 != 0 && start <= finish) {
      sol(start);
      start++;
    }
 
    if (start > finish) {
      break;
    }
 
    while (finish % 10 != 9 && start <= finish) {
      sol(finish);
      finish--;
    }
 
    long long cnt = (finish/10) - (start/10) + 1;
    for (size_t i = 0; i < 10; i++) {
      answer[i] += cnt * temp;
    }
 
    start /= 10;
    finish /= 10;
    temp *= 10LL;
  }
 
  for (int i = 0; i < 10; i++) {
    cout << answer[i] << " ";
  }
  cout << "\n";
  return 0;
}