def solution(s):
    a =""
    for i in range(len(s)-1):
        if s[i] == ' ':
            a += s[i+1].upper()
        else :
            a += s[i+1].lower()

    answer = s[0].upper() + a
    return answer