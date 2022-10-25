def solution(nums):
  def isPrime(s):
    for i in range(2,s):
      if s % i == 0:
        return False
    return True

  cnt = 0
  for i0 in range(len(nums)):
    for i1 in range(i0+1,len(nums)):
      for i2 in range(i1+1,len(nums)):
        sum = nums[i0]+nums[i1]+nums[i2]
        if isPrime(sum):
          cnt+=1

  answer = cnt
  return answer

solution2 = '''
  def solution(nums):
  from itertools import combinations
  
  cnt = 0
  sums = list(map(sum,combinations(nums,3)))

  for s in sums:
    for i in range(2,s):
      if s % i == 0:
        break
    else:
      cnt += 1
  answer = cnt
  return answer
  '''