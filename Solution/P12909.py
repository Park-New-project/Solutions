def solution(s):
    n=0
    a=True
    for i in s:
        if i =="(":
            n+=1

        if i ==")":
            n-=1
        if n<0:
            a = False
            break
    else:
        if n!=0:
            a = False
    answer = a
    return answer