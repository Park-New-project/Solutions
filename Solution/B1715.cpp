#include <cstdio>
#include <vector>
#include <queue>
struct cmp {
    bool operator() (int i, int j) {
        return i > j;
    }
};
int main() {
    int n, res = 0;
    std::priority_queue < int, std::vector < int >, cmp > pq;
    scanf("%d", &n);
    for (int i = n; i--; ) {
        int m;
        scanf("%d", &m);
        pq.push(m);
    }
    for (; pq.size() > 1; ) {
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();
        res += t1 + t2;
        pq.push(t1 + t2);
    }
    printf("%d", res);
    return 0;
}