def hello():
    print("Hello")

def ciao():
    print("Ciao")

print("This prints because it is not guarded by the if")

# This returns true iff it is run as the root file
if __name__ == "__main__":
    print("This doesn't print if imported")