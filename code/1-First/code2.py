

# Python3 program to check for
# balanced brackets.
 
# function to check if
# brackets are balanced
 
points = {"(":7,")":7,"[":42,"]":42,"{":1337,"}":1337,"<":64880, ">":64880}
def areBracketsBalanced(expr):
    stack = []
 
    # Traversing the Expression
    for char in expr:
        if char in ["(", "{", "[", "<"]:
            # Push the element in the stack
            stack.append(char)
        else:
 
            # IF current character is not opening
            # bracket, then it must be closing.
            # So stack cannot be empty at this point.
            if not stack:
                return False
            current_char = stack.pop()
            if current_char == '(':
                if char != ")":
                    return ")"
            if current_char == '{':
                if char != "}":
                    return "}"
            if current_char == '[':
                if char != "]":
                    return "["
            if current_char == '<':
                if char != ">":
                    return "<"
 
    # Check Empty Stack
    if stack:
        return True
    return True
 
 
# Driver Code
if __name__ == "__main__":
    with open("code/1-First/input_1.txt") as f: 
        s = f.read()
        s = s.split("\n")
    total = 0
    for line in s:
        expr = line
        # Function call
        ret = areBracketsBalanced(expr)
        if ret != True:
            total += points[ret]
        print(ret)
    print("res\n\n")
    print(total)
    
    #1315520