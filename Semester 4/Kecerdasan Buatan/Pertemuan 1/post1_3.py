from kanren.facts import Relation, facts
from kanren.core import var, run, conde, eq

parent = Relation()
facts(parent, ("Slamet", "Amin"),
              ("Slamet", "Anang"),
              ("Amin", "Badu"),
              ("Amin", "Budi"),
              ("Anang", "Didi"),
              ("Anang", "Dadi"))

x = var()
y = var()
z = var()


def grandchild(x, y):
    return conde((parent(x, z), parent(z, y)))

def children(x, y):
    return parent(x, y)

def uncle(x, y):
    return conde((parent(z, y), parent(z, x), eq(x, y) == False))

kakek = "Slamet"
cucu = run(5, x, grandchild(kakek, x))
print("\nNama cucu " + kakek + ": ")
for item in cucu:
    print(item)

ayah = "Anang"
anak = run(2, x, children(ayah, x))
print("\nNama anak " + ayah + ": ")
for item in anak:
    print(item)

paman = "Amin"
ponakan = run(2, x, uncle(paman, x))
print("\nNama ponakan " + paman + ":")
for item in ponakan:
    print(item)

paman2 = "Anang"
ponakan2 = run(2, x, uncle(paman2, x))
print("\nNama ponakan " + paman2 + ":")
for item in ponakan2:
    print(item)