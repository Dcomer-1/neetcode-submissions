class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        #create a defaultdict / hashMap with the array 
        #iterate through each string and sort
        #append to 

        res = defaultdict(list)
        for s in strs:
            sortedStr = ''.join(sorted(s))
            res[sortedStr].append(s)
        return list(res.values())