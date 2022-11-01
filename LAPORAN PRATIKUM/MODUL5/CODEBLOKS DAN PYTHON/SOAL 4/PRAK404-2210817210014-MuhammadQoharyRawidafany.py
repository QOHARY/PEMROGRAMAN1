while True :
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    n0 = int (input("Masukan Pilihan : "))
    if n0==5 :
        print('Terima kasih, telah menggunakan kalkulator Qohary');break
    elif n0>5 or n0<=0 :
        print("Input anda salah, silahkan coba lagi");continue
    else :
        n1 = float(input("Masukan Pilihan : "))
        n2 = float(input("Masukan Pilihan : "))
        if n0==1 :
            print('Hasil pertambahan antara %.2f dengan %.2f adalah %.2f'%(n1,n2,n1+n2))
        elif n0==2 :
            print('Hasil pengurangan antara %.2f dengan %.2f adalah %.2f'%(n1,n2,n1-n2))
        elif n0==3 :
            print('Hasil perkalian antara %.2f dengan %.2f adalah %.2f'%(n1,n2,n1*n2))
        elif n0==4 :
            print('Hasil perkalian antara %.2f dengan %.2f adalah %.2f'%(n1,n2,n1/n2))