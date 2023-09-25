import cmath.sqrt
N = input()
factors = []
for i in range(2,sqrt(N)+1):
     while( N%i == 0) :
           N/=i
           factors.append(i)
if N > 2:
     factors.append(N)
if factors.size() != 2:
     print("No Answer")
else:
     print(factors[0],factors[1])
