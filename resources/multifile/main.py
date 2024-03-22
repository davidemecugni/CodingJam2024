import functions
from functions import ciao

functions.hello()
ciao()

# This returns true iff it is run as the root file
if __name__ == "__main__":
    print("This is printed because it's the main")
