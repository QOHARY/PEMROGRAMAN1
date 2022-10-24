I = int (input(""))
H = I / 84600
J = I / 3600 % 24
M = I / 60 % 60
D = I % 60
if I < 3600 :
    print(f"{int (J)} : {int (M)} : {int(D)}")
elif I >= 3600 and I < 84600:
    print("{:.0f}:{:.0f}:{}".format(J,M,D))
elif I >= 84600 :
    print("{:.0f} hari {:.0f}:{:.0f}:{}".format(H,J,M,D))