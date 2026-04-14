def two_sum(target,list1):
    j = 0
    for i in list1:
        j += 1
        add = i+list1[j]
        if add == target:
            print(list1.index(i),list1.index(list1[j]))
        
    
    
    
list1 = [2,7,11,15]    
two_sum(9,list1)    