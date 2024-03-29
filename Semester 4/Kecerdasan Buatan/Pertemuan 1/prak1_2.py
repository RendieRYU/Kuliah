from kanren.facts import Relation, facts
from kanren.core import var, run
father = Relation()
facts(father, ("Homer", "Bart"),
 ("Homer", "Lisa"),
 ("Abe", "Homer"))
x = var()
output = run(1, x, father(x, "Homer"))
print("\nNama ayah Bart : ", output[0])
