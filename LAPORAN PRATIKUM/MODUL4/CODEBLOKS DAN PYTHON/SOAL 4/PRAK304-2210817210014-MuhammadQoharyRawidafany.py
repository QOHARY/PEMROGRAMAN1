I = int (input(""))
if I >= 1 and I < 10 :
    print("Satuan")
elif I >= 10 and I < 19 :
    print("Belasan")
elif I >= 20 and I < 99 :
    print("Puluhan")
elif I == 0 :
    print("Nol")
else :
    print("Anda Menginput Melebihi Limit Bilangan")