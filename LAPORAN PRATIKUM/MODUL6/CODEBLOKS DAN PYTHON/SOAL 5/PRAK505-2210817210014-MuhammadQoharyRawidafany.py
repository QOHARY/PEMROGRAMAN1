def biodata(tahunlahir,namaku,asal) :
    tahunlahir = int (tahunlahir)
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya : ",namaku)
    print("Umur saya : ",tahun_sekarang - tahunlahir)
    print("Saya Adalah Angkatan : ",tahun_sekarang)
    print("Asal Saya dari : ",asal)
tahunlahir = int (input(""))
namaku = input("")
asal = input("")
biodata(tahunlahir,namaku,asal)