# Valori pubblici
e = 17459243613
n = 66624478857659

# Messaggio criptato
messaggio_criptato = [
35784176028369,
63561241316534,
40946911928892,
56405696498538,
38978109180990,
16444276162313,
38053979586003,
57562671757853
]

# Decodifica del messaggio
messaggio_decodificato = ""
for c in messaggio_criptato:
    m = pow(c, e, n)
    # Conversione del numero m in byte
    # print(m)
    byte_string = m.to_bytes((m.bit_length() + 7) // 8, byteorder='big')
    # Rimozione dei byte aggiuntivi
    # byte_string = byte_string.rstrip(b'\x00')
    # Aggiunta dei caratteri decodificati al messaggio
    # print(byte_string)
    print("".join([format(byte, '02x') for byte in byte_string]))
    #messaggio_decodificato += byte_string.decode('utf-8')

print(messaggio_decodificato)
