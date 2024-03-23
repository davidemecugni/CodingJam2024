e_f = 17459243613
n_f = 66624478857659

for x in range(1024, 4096):
    if x % 40 == 0:
        print("x")
    for y in range(1024, 4096):
        for w in range(1024, 4096):
            for z in range(1024, 4096):
                M = x * y - 1
                e = w * M + x
                d = z * M + y
                n = (e * d - 1) // M  # Note the integer division operator '//' in Python
                if n == n_f:
                    print("\nx:", x, ", y:", y, ", w:", w, ", z:", z, ", M:", M, ", e:", e, ", n:", n, ", d:", d)
print("\n")
