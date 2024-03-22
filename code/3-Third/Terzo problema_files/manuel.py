import time

if __name__ == "__main__":
    r = 1000000000  #Numero di giri
    k = 100
    P = [2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 2, 2, 7, 4, 2, 3, 2, 8, 12, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 2, 4, 2, 3, 4, 2, 1, 2, 1, 3, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2, 5, 17, 9, 7, 4, 2, 3, 8, 8, 2]
    
    index = 0
    grams_of_pancetta = 0
    t=0
    for i in range(r):
        n_pulcini = 0
        
        while n_pulcini <= k:
            
            n_pulcini += P[index]
            index += 1
            if index >= len(P):
                index = 0
            

        if index == 0:
            index = len(P) - 1
            n_pulcini -= P[index]    
        else:
            index -= 1
            n_pulcini -= P[index]
      
        

        grams_of_pancetta += n_pulcini
       
        if i % 1000000 == 0:
            print(time.time() - t)
            t = time.time()

    print(grams_of_pancetta)

    