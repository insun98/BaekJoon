def solution(clothes):
    answer = 0
    hash = {}
    
    for c, t in clothes:
        if t not in hash: 
            hash[t] = 2
        else:
            hash[t] += 1
            
    count = 1
    for i in hash.values(): 
        count *= i
    
    answer = count - 1
    
    return answer
 
