def solution(brown, yellow):
    import math
    w = ((brown + 4) / 2 + math.sqrt((brown+4)**2 /4 - 4 * (brown + yellow))) / 2
    h = ((brown + 4) / 2 - math.sqrt((brown+4)**2 /4 - 4 * (brown + yellow))) / 2
    answer = [int(w),int(h)]
    return answer

solution2 = '''
def solution(brown, yellow):
    w = (brown / 2) + 1
    h = 1
    while w >= h:
        if (w - 2) * (h - 2) == yellow:
            return [w, h]
        w -= 1
        h += 1
    '''

solution3='''
#약수로 푸는 방법
def solution(brown, yellow):
    for i in range(1,yellow+1):
            if yellow%i == 0:
                if i+(yellow//i)+4 == (brown+4)//2:
                    return [max(i+2,yellow//i+2),min(i+2,yellow//i+2)]
'''