from itertools import permutations
def solution(numbers):
    answer =[]
    list_num = []
    for i in range(len(numbers)):
        list_num.extend(permutations(numbers,i+1))
        list_int = [int(''.join(i)) for i in list_num]

    def sosu(n):
        if n < 2:
            return False
        for i in range(2, n//2+1):
            if n % i ==0:
                return False
        return True

    for i in list_int:
        if sosu(i):
            answer.append(i)
    return len(set(answer))
