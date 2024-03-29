from kanren.facts import Relation, facts
from kanren.core import var, run

# Relasi parent
parent = Relation()
facts(parent, ("Slamet", "Amin"),
              ("Slamet", "Anang"),
              ("Amin", "Badu"),
              ("Amin", "Budi"),
              ("Anang", "Didi"),
              ("Anang", "Dadi"))

# Relasi grandfather
grandfather = Relation()
facts(grandfather, ("Slamet", "Badu"),
                   ("Slamet", "Budi"),
                   ("Slamet", "Didi"),
                   ("Slamet", "Dadi"))

# Relasi uncle
uncle = Relation()
facts(uncle, ("Amin", "Didi"),
             ("Amin", "Dadi"),
             ("Anang", "Badu"),
             ("Anang", "Budi"))

x = var()

kakek = "Slamet"
cucu = run(4, x, grandfather(kakek, x))
print("\nNama cucu dari " + kakek + ": ")
for item in cucu:
    print(item)

ayah = "Anang"
anak = run(2, x, parent(ayah, x))
print("\nNama anak " + ayah + ": ")
for item in anak:
    print(item)

paman = "Amin"
ponakan = run(2, x, uncle(paman, x))
print("\nNama ponakan " + paman + ": ")
for item in ponakan:
    print(item)

paman2 = "Anang"
ponakan2 = run(2, x, uncle(paman2, x))
print("\nNama ponakan " + paman2 + ": ")
for item in ponakan2:
    print(item)