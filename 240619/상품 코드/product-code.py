class Product:
    def __init__(self, name, code):
        self.name = name
        self.code = code
        print(f"product {code} is {name}")
product1 = Product("codetree", 50)
n = input().split(" ")
product2 = Product(n[0], n[1])