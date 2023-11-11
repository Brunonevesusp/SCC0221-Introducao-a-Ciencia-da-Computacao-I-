import codecs

int = int(input(""))

hex = format(int, 'x')

bytes_hex = bytes.fromhex(hex)

dec = bytes_hex.decode('utf-8', 'replace')

print( dec)
