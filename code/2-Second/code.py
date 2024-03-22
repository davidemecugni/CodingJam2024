def reset():
    return {"(":0, "[":0, "{":0, "<":0}
if __name__ == "__main__":
    with open("code/2-Second/input_2.txt") as f: 
        s = f.read()
        s = s.split("\n")
    ss = []
    for line in s:
        l = line.split(" ")
        ll = [int(x) for x in l]
        ss.append(ll)
    s = ss
    print(s)
