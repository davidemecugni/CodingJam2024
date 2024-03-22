# Per x pulcini:
# 1 pulcino) un numero dispari di cambi
# 2 pulcini) 3 o 7 o 11 o 3+(4*n)
# 3 pulcini) 7
# 4 pulcini) o 47

def n_dispari(n):
    return (n-1)*2 + 1

def vede(n, k):
    if k == 0:
        return False
    return (2**n - 1) % k == 0

    return k % n_dispari(n) == 0
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
