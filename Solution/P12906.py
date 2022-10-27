def solution(arr):
    n = arr[0]
    li=[]
    li.append(n)
    for i in range(1,len(arr)):
        if n != arr[i]:
            n = arr[i]
            li.append(n)
    answer= li
    return answer