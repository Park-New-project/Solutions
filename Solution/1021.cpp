#include <iostream>
#include <deque>
using namespace std;
deque<int> deq;


int main() {
    int N, M, input, index, count, left,right;
    deque<int>::iterator it;

    cin >> N >> M;


    //1~N으로 큐 채우기(위치값)
    for (int i = 1; i <= N; i++) {
        deq.push_back(i);
    }
    count = 0;

    for (int i = 0; i < M; i++) {
        cin >> input;
        //입력받은 값이 맨 앞에 있을 경우 바로 출력 (연산횟수포함X)
        if (deq.front() == input) {
            deq.pop_front();
        }
        else {
            index = 1;
            for (it = deq.begin(); it < deq.end(); it++) {
                if (*it == input) {
                    break;
                }
                index++;
            }
            left = index - 1;
            right = deq.size() - index + 1;
            if (left >= right) {
                for (int j = 0; j < right; j++) {
                    deq.push_front(deq.back());
                    deq.pop_back();
                }
                count += right;
                deq.pop_front();
            }
            else if (left <= right) {
                //오른쪽으로 데이터 보내기
                for (int j = 0; j < left; j++) {
                    deq.push_back(deq.front());
                    deq.pop_front();
                }
                count += left;
                deq.pop_front();
            }
        }
    }
    cout << count << endl;
    return 0;
}
