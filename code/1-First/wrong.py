points = {"(":7,")":7,"[":42,"]":42,"{":1337,"}":1337,"<":64880, ">":64880}
counted = {"(":0, "[":0, "{":0, "<":0}

def reset():
    return {"(":0, "[":0, "{":0, "<":0}
if __name__ == "__main__":
    with open("code/1-First/input_1.txt") as f: 
        s = f.read()
        s = s.split("\n")
    total_points = 0
    for line in s:
        counted = reset()
        for char in line:
            if char == '(':
                counted["("] += 1
            elif char == '[':
                counted["["] += 1
            elif char == '{':
                counted["{"] += 1
            elif char == '<':
                counted["<"] += 1
            elif char == ')':
                counted["("] -= 1
            elif char == ']':
                counted["["] -= 1
            elif char == '}':
                counted["{"] -= 1
            elif char == '>':
                rcounted["<"] -= 1
            else:
                return None
