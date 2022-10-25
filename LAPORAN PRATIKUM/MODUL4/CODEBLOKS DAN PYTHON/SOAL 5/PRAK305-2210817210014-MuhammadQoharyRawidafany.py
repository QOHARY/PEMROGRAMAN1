for ulangi in range (0,5):
    I = int (input(""))
    H = I / 84600
    J = I / 3600 % 24
    M = I / 60 % 60
    D = I % 60
    if I < 3600 :
        print("{:02d}:{:02d}:{:02d}".format(int(J),int(M),int(D)))
    elif I >= 3600 and I < 84600:
        print("{:02d}:{:02d}:{:02d}".format(int(J),int(M),int(D)))
    elif I >= 84600 :
         print("{} hari {:02d}:{:02d}:{:02d}".format(int(H),int(J),int(M),int(D)))