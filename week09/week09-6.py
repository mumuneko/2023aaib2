class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        ans=0
        M,N=len(grid),len(grid[0])
        for i in range(M):
            if grid[i][0]==1:ans+=1 #左邊邊界
            if grid[i][N-1]==1:ans+=1#右邊邊界
        for j in range(N):
            if grid[0][j]==1:ans+=1#上邊邊界
            if grid[M-1][j]==1:ans+=1#下邊邊界

        for i in range(M):#左手i
            for j in range(N):#右手i
                if i+1<M and grid[i][j]+grid[i+1][j]==1:ans+=1
                if j+1<N and grid[i][j]+grid[i][j+1]==1:ans+=1
        return ans