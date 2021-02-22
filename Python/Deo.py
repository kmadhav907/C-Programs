# A Dynamic Programming based Python3 program to  
# find minimum of coins to make a given change V 
Max = 10**9
  
# m is size of coins array (number of  
# different coins) 
def minCoins(coins, m, V): 
      
    # table[i] will be storing the minimum  
    # number of coins required for i value.  
    # So table[V] will have result 
    table = [0 for i in range(V + 1)] 
  
    # Base case (If given value V is 0) 
    table[0] = 0
  
    # Initialize all table values as Infinite 
    for i in range(1, V + 1): 
        table[i] = Max
  
    # Compute minimum coins required  
    # for all values from 1 to V 
    for i in range(1, V + 1): 
          
        # Go through all coins smaller than i 
        for j in range(m): 
            if (coins[j] <= i): 
                sub_res = table[i - coins[j]] 
                if (sub_res != Max and 
                    sub_res + 1 < table[i]): 
                    table[i] = sub_res + 1
    return table[V] if table[V]!=Max else -1

# Driver Code 
if __name__ == "__main__": 
    tc = int(input())
    while(tc!=0):
        
         
        V = int(input())
        m = int(input())
        coins = list(map(int, input().split(" ")))
         
        print((minCoins(coins, m, V)))
    
        tc -= 1 
    