class Solution: #week15-5.py
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串迴圈寫出來
        ans=0
        N=len(s)
        j=0#尾巴
        for i in range(N):#頭是i 先用python把字串的迴圈寫出來
            maxCost-=abs(ord(s[i])-ord(t[i]))#毛毛蟲的頭i吃葉子
            while maxCost<0:#預算不足，變負的
                maxCost+=abs(ord(s[j])-ord(t[j]))#尾巴j大出來
                j+=1 #尾巴j往右縮
            ans=max(ans,i-j+1) #頭i-尾j+1就是毛毛蟲的長度
        return ans