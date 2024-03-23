


if __name__ == "__main__":
    N = 66624478857659
    E = 17459243613

    e = 0
    n = 0
    y = 1
    for y in range(1024,4097):
        print("y {}".format(y))
        for z in range(1024,4097):
            #print("z {}".format(z))

            for w in range(1024,4097):
                #print("w {}".format(w))

                n = E*z + ((E*y - 1)/(E - 1) * (w + 1 /y))
                if n == N:
                    print("y {} z {} w {}".format(y,z,w))
                    break
        
