N=int(input('請輸入N:'))
#以前是用for 迴圈寫，今天用函式呼叫函式寫
def func(n):
  if n==1:return 1#終止條件，像數學歸納法N-1成立
  return n*func(n-1)#函式呼叫函式，把大問題改成小問題
ans=func(N)
print(ans)