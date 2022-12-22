def solution(n, lost, reserve):
    set_a = set(lost) - set(reserve)
    set_b = set(reserve) - set(lost)

    for b in set_b:
        if b - 1 in set_a:
            set_a.remove(b - 1)

        elif b + 1 in set_a:
            set_a.remove(b + 1)
    return n - len(set_a)