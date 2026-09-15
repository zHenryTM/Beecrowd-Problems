while True:
    T = int(input())
    
    if T == 0:
        break
    
    for i in range(T):
        N = int(input())
        
        if N % 2 == 1:
            P = 2 * N - 1
        else:
            P = 2 * N - 2
            
        print(P)