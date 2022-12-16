def solution(array, commands):
    answer = []
    for x in range(len(commands)):
        i, j, k = commands[x][0], commands[x][1], commands[x][2]
        split_arr = array[i-1:j]
        split_arr = sorted(split_arr)
        answer.append(split_arr[k-1])
    return answer
