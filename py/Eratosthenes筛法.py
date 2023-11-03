def sieve_of_eratosthenes(n):
    """
    Generates a list of all prime numbers up to n using the sieve of Eratosthenes algorithm.
    """
    primes = [True] * (n + 1) # Initialize all numbers as potential primes
    primes[0], primes[1] = False, False # 0 and 1 are not prime

    for i in range(2, int(n**0.5) + 1): # Iterate up to the square root of n
        if primes[i]: # If i is a prime
            for j in range(i**2, n+1, i): # Mark all multiples of i as non-prime
                primes[j] = False

    return [num for num in range(2, n+1) if primes[num]] # Return a list of prime numbers

# Example usage
print(sieve_of_eratosthenes(100)) 