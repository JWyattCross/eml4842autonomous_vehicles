def fib2(n):  # return Fibonacci series up to n
    #"""Return a list containing the Fibonacci series up to n."""
    result = []
    a, b = 0, 1
    while a < n:
        result.append(a)    # see below
        a, b = b, a+b
    return result

def main():
    #""" Main entry point of the app """
    print("hello world")
    print(fib2(230))


if __name__ == "__main__":
    #""" This is executed when run from the command line """
    main()
