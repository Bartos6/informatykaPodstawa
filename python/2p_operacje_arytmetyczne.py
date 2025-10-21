#####ZADANIE kalkulator
a = int(input("Podaj a: "))
b = int(input("Podaj b: "))

# 1 sposob
print("Suma:", a+b)
print("Roznica:", a-b)

# 2 sposob
suma = a + b
print("Suma:", suma)
roznica = a - b
print("Roznica:", roznica)

#Wypisanie całego działania
print(a, "*", b, "=", a*b)
print(a, "/", b, "=", a/b)
print(a, "//", b, "=", a//b)
print(a, "%", b, "=", a%b)

#extra
print(a, ":", b, "=", a//b, "r.", a%b)


#####ZADANIE Pole trójkąta 
a = int(input("Podaj a: "))
h = int(input("Podaj h: "))

print("Pole trojkata: ", a*h/2)

#####ZADANIE Zamiana temperatur
c = int(input("Podaj c: "))

print("Temperatura w Fahrenheitach: ", 9/5 * c + 32)

