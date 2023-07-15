# O(n)
def fib(n, memo):
    if memo[n] is not None:
        return memo[n]
    if n == 1 or n == 2:
        result = 1
    else:
        result = fib(n-1, memo) + fib(n-2, memo)
    memo[n] = result
    return result


memo = [None] * (100 + 1)
print(fib(99, memo))
