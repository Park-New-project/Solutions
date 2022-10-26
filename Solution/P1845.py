def solution(nums):
  snum = set(nums)
  lsn = len(snum)
  if lsn > int(len(nums)/2):
    lsn = int(len(nums)/2)
  answer = lsn
  return answer