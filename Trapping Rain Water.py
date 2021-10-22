class Solution:
    def trap(self, height: List[int]) -> int:
        a=[]
        a.append(height[0])
        b=[]
        b.append(height[len(height)-1])
        c=0
        for i in range(1,len(height)):
            a.append(max(a[i-1],height[i]))
        
        for j in range(len(height)-2,-1,-1):
            b.append(max(b[-1],height[j]))
        b=b[::-1]
        for i in range(len(height)):
            c+= min(a[i],b[i])-height[i]
         
        return c
