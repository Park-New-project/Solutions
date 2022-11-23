def solution(n, words):
    a = [1,1]
    li = []
    li.append(words[0])

    for i in words[1:]:
        a[0] += 1
        if a[0] > n:
            a[0] = 1
            a[1] += 1
        if i in li:
            break
        if li[-1][-1]!=i[0]:
            break
        li.append(i)
    else:
        a= [0,0]
    answer = a
    return answer