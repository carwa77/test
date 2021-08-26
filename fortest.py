fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break

try:
    inp = float(input("skriv ett heltal under 10 "))
    if inp < 10:
        print("rätt")
    elif inp > 10:
        print("Större")
except:
    print("fel du skrev inte ett tal")