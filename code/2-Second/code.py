# Per x pulcini:
# 1 pulcino) un numero dispari di cambi
# 2 pulcini) Tre
def vede(n, k):
    if k == 0:
        return False
    return (2**n - 1) % k == 0
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
