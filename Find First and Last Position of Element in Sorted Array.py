class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        a=[]
        for i,j in enumerate(nums):
            if j==target:
                a.append([j,i])
        a.sort(key=lambda x:x[1])
        if len(a)==0:
            return [-1,-1]
        else:
            return [a[0][1],a[-1][1]]
