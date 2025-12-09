# print(ord('A'))
# print(chr(65))

napis = input("Podaj napis")

i= 0
while i < len(napis):
    
    if chr(ord(napis[i]) + 3) > 'Z':
        print(chr(ord(napis[i]) + 3 -26))
    else:
        print(chr(ord(napis[i]) + 3))
        
    i+=1
