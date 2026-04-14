def recursive_binary_search(list, target):
    if len(list) == 0:
        return 
    else:
        midpoint = (len(list)) // 2

        if list[midpoint] == target:
            return True
        else:
            if list[midpoint] < target:
                return recursive_binary_search(list[midpoint+1:],target)
            else:
                return recursive_binary_search(list[:midpoint] , target)

def verify(result):
    print("Target found: " , result)
    
    

list1 = [1,2,3,4,5,6,7,8,9,10]

target = 10

result = recursive_binary_search(list1, target)

verify(result)            
         