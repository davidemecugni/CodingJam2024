# Per x pulcini:
# 1 pulcino) un numero dispari di cambi
# 2 pulcini) 3 o 7 o 11 o 3+(4*n)
# 3 pulcini) 7  7+()
# 4 pulcini) 15 o 47
# 5 pulcini) 2^n-1

def n_dispari(n):
    return (n-1)*2 + 1

def vede(n, k):
    num = (2**n - 1)
    if (k - num) == 0 or k == 0:
        return False
    

    if (k - n) % (2**n) == 0:
        return True      
        
    return False

if __name__ == "__main__":
    #code/2-Second/input_2.txt
    with open("code/2-Second/given.txt") as f: 
        s = f.read()
        s = s.split("\n")
    ss = []
    for line in s:
        l = line.split(" ")
        ll = [int(x) for x in l]
        ss.append(ll)
    s = ss
    casi_in_cui_vede = 0
    for caso in s:
        print(caso[0], caso[1])
        if vede(caso[0], caso[1]):
            print("Vede")
            casi_in_cui_vede += 1
        else:
            print("Non vede")
        print("\n")

    print(f"Risposta finale: {casi_in_cui_vede}")

#7879 non è