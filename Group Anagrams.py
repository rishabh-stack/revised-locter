class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        a= {}
        b=[]
        for i in strs:
            if ''.join(sorted(i)) not in a:
                 a[''.join(sorted(i))]=[]
        for i in strs:
            a[''.join(sorted(i))].append(i)
        for i in a.values():
            b.append(i)
        return b
