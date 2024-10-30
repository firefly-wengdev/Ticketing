#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[20];
    int kode;
} Kota;

typedef struct {
    char kereta[29];
    char keberangkatan[29];
    char tujuan[29];
    int harga;
    int code;
    char kelas[29];
} Data;

typedef struct {
    char namaKereta[5][28];
} DaftarKereta;

DaftarKereta daftarKereta = {
    "Dharmawangsa",
    "Kertajati",
    "Blambangan",
    "Gajahwong",
    "Bangunkarta"
};

Kota kota[4] = {
    {"jakarta", 101},
    {"bandung", 202},
    {"semarang", 303},
    {"solo", 404}
};

Data data;

char inputKeberangkatan[20], inputTujuan[20];
int Kode, inputKelas, inputKereta;
float hargaBisnis = 1.2;

int Pesan() {
    printf ("\nkereta : %s", data.kereta);
    printf ("\ndari : %s", data.keberangkatan);
    printf ("\nke : %s", data.tujuan);
    printf ("\nharga : Rp.%d", data.harga);
    printf ("\nkode kereta : %d", data.code);
    printf ("\nkelas : %s", data.kelas);
}

int SemarangSolo() {
    printf ("\n1. %s\nPilih Kereta : ", daftarKereta.namaKereta[0]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
        strcpy(data.kereta, daftarKereta.namaKereta[0]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = 50000;
        data.code = 125;
        strcpy(data.kelas, "Ekonomi");
        Pesan();
    } else {
        printf ("gagal");
    }
}

int SemarangSoloBisnis() {
    printf ("\n1. %s\nPilih Kereta : ", daftarKereta.namaKereta[0]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
        strcpy(data.kereta, daftarKereta.namaKereta[0]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = hargaBisnis * 50000;
        data.code = 521;
        strcpy(data.kelas, "Bisnis");
        Pesan();
    } else {
        printf ("gagal");
    }
}

int BandungSolo() {
    printf ("\n1. %s\n2. %s\nPilih Kereta : ", daftarKereta.namaKereta[1], daftarKereta.namaKereta[2]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
        strcpy(data.kereta, daftarKereta.namaKereta[1]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = 60000;
        data.code = 601;
        strcpy(data.kelas, "Ekonomi");
        Pesan();
    } else if (inputKereta == 2) {
        printf ("berhasil 2");
        strcpy(data.kereta, daftarKereta.namaKereta[2]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = 65000;
        data.code = 605;
        strcpy(data.kelas, "Ekonomi");
        Pesan();
    } else {
        printf ("gagal");
    }
}

int BandungSoloBisnis() {
    printf ("\n1. %s\n2. %s\nPilih Kereta : ", daftarKereta.namaKereta[1], daftarKereta.namaKereta[2]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
        strcpy(data.kereta, daftarKereta.namaKereta[1]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = hargaBisnis * 60000;
        data.code = 106;
        strcpy(data.kelas, "Bisnis");
        Pesan();
    } else if (inputKereta == 2) {
        printf ("berhasil 22");
        strcpy(data.kereta, daftarKereta.namaKereta[2]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = hargaBisnis * 65000;
        data.code = 506;
        strcpy(data.kelas, "Bisnis");
        Pesan();
    } else {
        printf ("gagal");
    }
}

int BandungSemarang() {
    printf ("\n1. %s\n2. %s\n3. %s\n4. %s\nPilih Kereta : ", daftarKereta.namaKereta[0], daftarKereta.namaKereta[2], daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
        strcpy(data.kereta, daftarKereta.namaKereta[0]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = 80000;
        data.code = 346;
        strcpy(data.kelas, "Ekonomi");
        Pesan();
    } else if (inputKereta == 2) {
        printf ("berhasil 2");
        strcpy(data.kereta, daftarKereta.namaKereta[2]);
        strcpy(data.keberangkatan, inputKeberangkatan);
        strcpy(data.tujuan, inputTujuan);
        data.harga = hargaBisnis * 65000;
        data.code = 506;
        strcpy(data.kelas, "Bisnis");
        Pesan();
    } else if (inputKereta == 3) {
        printf ("berhasil 3");
    } else if (inputKereta == 4) {
        printf ("berhasil 4");
    } else {
        printf ("gagal");
    }
}

int BandungSemarangBisnis() {
    printf ("\n1. %s\n2. %s\n3. %s\n4. %s\nPilih Kereta : ", daftarKereta.namaKereta[0], daftarKereta.namaKereta[2], daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
    } else if (inputKereta == 2) {
        printf ("berhasil 22");
    } else if (inputKereta == 3) {
        printf ("berhasil 33");
    } else if (inputKereta == 4) {
        printf ("berhasil 44");
    } else {
        printf ("gagal");
    }
}

int JakartaSolo() {
    printf ("\n1. %s\nPilih Kereta : ", daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
        Data data;
        strcpy(data.kereta, daftarKereta.namaKereta[3]);
        printf ("%s", data.kereta);
    } else {
        printf ("gagal");
    }
}

int JakartaSoloBisnis() {
    printf ("\n1. %s\nPilih Kereta : ", daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
        Data data;
        strcpy(data.kereta, daftarKereta.namaKereta[3]);
        printf ("%s", data.kereta);
    } else {
        printf ("gagal");
    }
}

int JakartaSemarang() {
    printf ("\n1. %s\n2. %s\n3. %s\nPilih Kereta : ", daftarKereta.namaKereta[0], daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
    } else if (inputKereta == 2) {
        printf ("berhasil 2");
    } else if (inputKereta == 3) {
        printf ("berhasil 3");
    } else {
        printf ("gagal");
    }
}

int JakartaSemarangBisnis() {
    printf ("\n1. %s\n2. %s\n3. %s\nPilih Kereta : ", daftarKereta.namaKereta[0], daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
    } else if (inputKereta == 2) {
        printf ("berhasil 22");
    } else if (inputKereta == 3) {
        printf ("berhasil 33");
    } else {
        printf ("gagal");
    }
}

int JakartaBandung() {
    printf ("\n1. %s\n2. %s\nPilih Kereta : ", daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 1");
    } else if (inputKereta == 2) {
        printf ("berhasil 2");
    } else {
        printf ("gagal");
    }
}

int JakartaBandungBisnis() {
    printf ("\n1. %s\n2. %s\nPilih Kereta : ", daftarKereta.namaKereta[3], daftarKereta.namaKereta[4]);
    scanf ("%d", &inputKereta);
    if (inputKereta == 1) {
        printf ("berhasil 11");
    } else if (inputKereta == 2) {
        printf ("berhasil 22");
    } else {
        printf ("gagal");
    }
}

void Ekonomi() {
    printf ("list kelas ekonomi :\n");
    if (strcmp(inputKeberangkatan, "jakarta") == 0) {
        if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("jakarta to bandung");
            JakartaBandung();
        } else if (strcmp(inputTujuan, "semarang") == 0) {
            printf ("jakarta to semarang");
            JakartaSemarang();
        } else {
            printf ("jakarta to solo");
            JakartaSolo();
        }
    } else if (strcmp(inputKeberangkatan, "bandung") == 0) {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("bandung to jakarta");
            JakartaBandung();
        } else if (strcmp(inputTujuan, "semarang") == 0) {
            printf ("bandung to semarang");
            BandungSemarang();
        } else {
            printf ("bandung to solo");
            BandungSolo();
        }
    } else if (strcmp(inputKeberangkatan, "semarang") == 0) {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("semarang to jakarta");
            JakartaSemarang();
        } else if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("semarang to bandung");
            BandungSemarang();
        } else {
            printf ("semarang to solo");
            SemarangSolo();
        }
    } else {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("solo to jakarta");
            JakartaSolo();
        } else if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("solo to bandung");
            BandungSolo();
        } else {
            printf ("solo to semarang");
            SemarangSolo();
        }
    }
}

void Bisnis() {
    printf ("list kelas ekonomi :\n");
    if (strcmp(inputKeberangkatan, "jakarta") == 0) {
        if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("jakarta to bandung");
            JakartaBandungBisnis();
        } else if (strcmp(inputTujuan, "semarang") == 0) {
            printf ("jakarta to semarang");
            JakartaSemarangBisnis();
        } else {
            printf ("jakarta to solo");
            JakartaSoloBisnis();
        }
    } else if (strcmp(inputKeberangkatan, "bandung") == 0) {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("bandung to jakarta");
            JakartaBandungBisnis();
        } else if (strcmp(inputTujuan, "semarang") == 0) {
            printf ("bandung to semarang");
            BandungSemarangBisnis();
        } else {
            printf ("bandung to solo");
            BandungSoloBisnis();
        }
    } else if (strcmp(inputKeberangkatan, "semarang") == 0) {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("semarang to jakarta");
            JakartaSemarangBisnis();
        } else if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("semarang to bandung");
            BandungSemarangBisnis();
        } else {
            printf ("semarang to solo");
            SemarangSoloBisnis();
        }
    } else {
        if (strcmp(inputTujuan, "jakarta") == 0) {
            printf ("solo to jakarta");
            JakartaSoloBisnis();
        } else if (strcmp(inputTujuan, "bandung") == 0) {
            printf ("solo to bandung");
            BandungSoloBisnis();
        } else {
            printf ("solo to semarang");
            SemarangSoloBisnis();
        }
    }
}

int pilihKelas() {
    int cek = 0;
    printf ("1. ekonomi\n2. bisnis");
    while (cek <= 3) {
        printf ("\npilih 1/2 : ");
        scanf ("%d", &inputKelas);
        getchar();
        if (inputKelas == 1) {
            printf ("ekonomi\n");
            Ekonomi();
            return 0;
        } else if (inputKelas == 2) {
            printf ("bisnis");
            Bisnis();
            return 0;
        } else {
            cek++;
            printf ("maaf");
        }
    }
    printf ("\nsesi habis, anda dikeluarkan");
    return 0;
}

int Tujuan() {
    int cek = 0;
    while (cek <= 3){
        printf ("\nmasukkan kota tujuan : ");
        scanf ("%s", inputTujuan);
        getchar();
        for (int i = 0; i < 4; i++) {
            if (strcmp(inputTujuan, inputKeberangkatan) == 0) {
                break;
            } else if (strcmp(inputTujuan, kota[i].nama) == 0) {
                pilihKelas();
                return 0;
            }
        }
        cek++;
        if (strcmp(inputTujuan, inputKeberangkatan) == 0) {
                printf ("kota tidak boleh sama");
        } else {
            printf ("kota tidak tersedia");
        }
    }
    printf ("\nsesi habis, anda dikeluarkan");
    return 0;
}

int main(){
    int cek = 0;
    while (cek <= 3) {
        printf ("masukkan kota keberangkatan: ");
        scanf ("%s", inputKeberangkatan);
        getchar();
        for (int i = 0; i < 4; i++) {
            if (strcmp(inputKeberangkatan, kota[i].nama) == 0) {
                printf ("%s", kota[i].nama);
                Kode, kota[i].kode;
                printf ("%d\n", kota[i].kode);
                Tujuan();
                return 0;
            }
        }
        cek++;
        printf ("kota tidak tersedia\n");
    }
    printf ("sesi habis, anda dikeluarkan");
    return 0; 
}