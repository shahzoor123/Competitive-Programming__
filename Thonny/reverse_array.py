def print_all_subarrays(arr):
    n = len(arr)
    cursum = 0
    maxi = float('-inf')
    for i in range(0,n):
        cursum += arr[i]
        maxi = max(maxi,cursum)
        if cursum < 0:
            cursum = 0
    print(maxi)        
        
        
  
            
              
          

            
            
array1 = [1,2,3,-2,5]

print_all_subarrays(array1)



















# def maxSubArraySum(arr,N):
#     maxsum = 0
#     cursum = 0
#     final = 0
#     for i in arr:
#         if i < 0:
#             final = max(arr)
#             return final
#         if i > 0:
#             final += i
#         if i < 0:
#             final = final + i
#     print(final)  
# 
# array1 = [1,2,3,-2,5]
# maxSubArraySum(array1,5)

