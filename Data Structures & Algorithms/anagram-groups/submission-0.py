class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        newDict = defaultdict(list)
        rand = []
        for s in strs:
            sortedS = ''.join(sorted(s))
            newDict[sortedS].append(s)
        
        return list(newDict.values())