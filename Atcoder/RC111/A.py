pw = {}

def power(x, y, p) : 
    res = 1     # Initialize result 
  
    # Update x if it is more 
    # than or equal to p 
#    x = x % p  
      
    if (x == 0) : 
        return 0
  
    while (y > 0) : 
          
        # If y is odd, multiply 
        # x with result 
        if ((y & 1) == 1) : 
            res = (res * x) # % p 
  
        # y must be even now 
        y = y >> 1      # y = y/2 
        x = (x * x) # % p 
          
    return res 


def solve(n,m):

    if n in pw:
        return pw[n]

    if n == 1:
        calc = (10/m)%m
        pw[n] = calc
        return calc

    tcalc1 = solve(n//2, m)
    tcalc2 = solve((n - n//2), m)
    
    ans = ((tcalc1%m)*(tcalc2%m))%m
    pw[n] = ans;

    return ans;


n,m = map(int, input().split(' '))

ans = 10/m
a2 = power(10, n-1, m)

ans = ((ans*a2)%m)

print(int(ans))
