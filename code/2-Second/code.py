def vede(n, k):
    return (2**k) % n == 0
    
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
        print("\n\n")

    print(casi_in_cui_vede)
