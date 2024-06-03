def hitungDeret(i):
    if i == 0:
        return 1
    else:
        sukuBerikutnya = 1/(i*1)
    return sukuBerikutnya + hitungDeret(i-1)
    
print(hitungDeret(5))