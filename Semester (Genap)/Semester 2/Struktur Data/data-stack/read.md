### Organisasi Data

Sebuah proses bagaimana mengatur bagaimana suatu data `dimasukkan` / `disimpan` dan `dikeluarkan` / `diambil` dari memori atau media penyimpanan

### Bentuk atau Teknik Organisasi Data

- Stack (Tumpukan)
- Queue (Antrian)
- Tree (Struktur Pohon)
- Graph

### Stack (Tumpukan)

- Suatu susunan koleksi data dimana data dapat ditambahkan dan dihapus selalu dilakukan pada bagian akhir data, yang disebut dengan top of stack
- Stack bersifat `LIFO` (*Last In First Out*)
- Benda yang terakhir masuk ke dalam stack akan menjadi yang pertama keluar dari stack

Ilustrasi nya:

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">No.</th>
         <th scope="col">Benda Yang Dimasukan</th>
         <th scope="col">Hasil Tumpukan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>1</td>
         <td>TV</td>
         <td>TV</td>
      </tr>
      <tr>
         <td>2</td>
         <td>VCD</td>
         <td>TV, VCD</td>
      </tr>
      <tr>
         <td>3</td>
         <td>Compo</td>
         <td>TV, VCD, Compo</td>
      </tr>
   </tbody>
</table>

### Operasi Stack

- `Push` : Digunakan untuk menambah item pada stack pada tumpukan paling atas
- `Pop` : Digunakan untuk mengambil item pada stack pada tumpukan paling atas
- `Clear` : Digunakan untuk mengosongkan stack
- `isEmpty` : Fungsi yang digunakan untuk mengecek apakah stack sudah kosong
- `isFull` : Fungsi yang digunakan untuk mengecek apakah stack sudah penuh

Ilustrasi nya:

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">In</th>
         <th scope="col">Out</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>1</td>
         <td>4</td>
      </tr>
      <tr>
         <td>2</td>
         <td>3</td>
      </tr>
      <tr>
         <td>3</td>
         <td>2</td>
      </tr>
      <tr>
         <td>4</td>
         <td>1</td>
      </tr>
   </tbody>
</table>

### Stack with Array of Struct

- Definisikan `Stack` dengan menggunakan suatu struct
- Definisikan konstanta `MAX_STACK` untuk menyimpan maksimum isi stack
- Elemen struct Stack adalah `array data` dan `top` untuk menandakan posisi teratas
- Buatlah variable `tumpuk` sebagai implementasi dari struct `Stack`
- Deklarasikan operasi-operasi atau function di atas dan buat implementasinya

### Program Stack

- Contoh deklarasi `MAX_STACK`

```cpp
#define MAX_STACK 10
```

- Contoh deklarasi STACK dengan struct dan array data

```cpp
struct Stacks {
   int top;
   string data[MAX];
};
```

- Deklarasi atau buat variable dari struct

```cpp
Stacks Stack;
```

### Inisialisasi Stack

- Pada mulanya isi `top` dengan -1, karena array dalam bahasa `C` atau `CPP` dimulai dari 0, yang berarti bahwa data stack adalah kosong!

- `Top` adalah suatu variable penanda dalam Stack yang menunjukkan elemen teratas data Stack sekarang. `Top Of Stack` akan selalu bergerak hingga mencapai MAX of STACK yang menyebabkan stack PENUH!

- Code Function `initIalize`

```cpp
void initIalize() {
   Stack.top = -1;
}
```

Ilustrasi Stack pada saat inisialisasi:

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Data Struct atau Stacks.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td></td>
      </tr>
      <tr>
         <td>3</td>
         <td></td>
      </tr>
      <tr>
         <td>2</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td></td>
      </tr>
   </tbody>
</table>

### Fungsi isFull

- Untuk memeriksa apakah stack sudah penuh?
- Dengan cara memeriksa `top of stack`, jika sudah sama dengan `MAX_STACK - 1` maka `full`, jika belum (masih `lebih kecil` dari `MAX_STACK - 1`) maka belum full
- Code Function `isFull`

```cpp
bool isFull() {
   return Stack.top == MAX - 1;
}
```

Ilustrasi Stack pada kondisi Full

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td>Printer</td>
         <td>MAX_STACK & Top</td>
      </tr>
      <tr>
         <td>8</td>
         <td>Komp</td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td>Oven</td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td>Mixer</td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td>Setrika</td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td>Kulkas</td>
         <td></td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td></td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

### Fungsi isEmpty

- Untuk memeriksa apakah data Stack masih kosong?
- Dengan cara memeriksa `top of stack`, jika masih `-1` maka berarti data Stack masih kosong!
- Code Function `isEmpty`

```cpp
bool isEmpty() {
   return Stack.top == -1;
}
```

### Fungsi pushData

- Untuk memasukkan elemen ke dalam Stack. Data yang diinputkan
**selalu** menjadi elemen teratas Stack (yang ditunjuk oleh ToS)
- Jika data belum penuh:
   - Tambah satu (increment) nilai `top of stack` lebih dahulu setiap kali
   ada penambahan ke dalam array data Stack.
   - Isikan data baru ke Stack berdasarkan index `top of stack` yang telah
   di-increment sebelumnya.
- Jika tidak, outpukan `Penuh`
- Code Function `pushData`

```cpp
void pushData() {

  if ( !isFull() ) {
  
    Stack.top++;
  
    cout << endl;
    cout << "- Pengisian Data" << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃" << COLOR_YELLOW << " Masukan Data: " << COLOR_RESET;
    cin.ignore();
    getline(cin, Stack.data[Stack.top]);
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;
    printStack();
  
  } else {
  
    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK PENUH !" << COLOR_RESET " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━┛" << endl;
  
  }

}
```

Ilustrasi Stack pada kondisi `pushData`

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td></td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td>Mula-mula Stack.top = 3</td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

> Misalkan, `Radio` hendak masuk

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td></td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td>Radio</td>
         <td>Stack.top++ (Stack.top = Stack.top + 1) = 4</td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td></td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

### Fungsi popData

- Untuk mengambil data Stack yang terletak paling atas
(data yang ditunjuk oleh ToS).
- **Tampilkan terlebih dahulu** nilai elemen teratas stack
dengan mengakses index-nya sesuai dengan `Top of Stack` baru
dilakukan `decrement` nilai `Top of Stack` nya sehingga
jumlah elemen stack berkurang.
- Code Function `popData`

```cpp
void popData() {

  if ( !isEmpty() ) {
  
    cout << endl;
    cout << "- Penghapusan Data" << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
    cout << "┃ Data: '" << COLOR_GREEN << Stack.data[Stack.top] << COLOR_RESET << "' Berhasil dihapus dari stack!" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << endl;
    Stack.top--;
    printStack();
  
  } else {
  
    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK KOSONG !" << COLOR_RESET << " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━┛" << endl;
  
  }

}
```

Ilustrasi Stack pada kondisi `popData`

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td></td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td>Radio</td>
         <td>Sekarang Stack.top = 4</td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td></td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

> Misalkan elemen Radio (teratas) hendak dihapus

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td></td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td></td>
         <td>Elemen Radio hilang</td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td>Stack.top-- (Stack.top = Stack.top - 1) = 3</td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

### Fungsi printStack

- Untuk menampilkan semua elemen-elemen data Stack
- Dengan cara me-loop semua nilai array secara **terbalik**, karena
kita harus mengakses dari index array tertinggi terlebih dahulu baru ke
index yang lebih kecil!
- Code Function `printStack`

```cpp
void printStack() {

  if ( !isEmpty() ) {

    cout << endl;
    cout << "- Menampilakan Data" << endl;  
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ id ┃         Data Value          ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

    for ( int i = Stack.top; i >= 0; i-- ) {

      cout << "┃ " << COLOR_YELLOW << setw(2) << left << i << COLOR_RESET << " ┃ " << setw(24) << Stack.data[i] << "    ┃" << endl;

    }

    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl;

  } else {

    cout << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━┓" << endl;
    cout << "┃ " << COLOR_YELLOW << "! STACK KOSONG !" << COLOR_RESET << " ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━┛" << endl;

  }

}
```

Ilustrasi Stack pada kondisi `printStack`

<table class="table table-dark table-striped table-bordered">
   <thead>
      <tr>
         <th scope="col">Index</th>
         <th scope="col">Value Struct.data[10]</th>
         <th scope="col">Keterangan</th>
      </tr>
   </thead>
   <tbody>
      <tr>
         <td>9</td>
         <td></td>
         <td>MAX_STACK</td>
      </tr>
      <tr>
         <td>8</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>7</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>6</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>5</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>4</td>
         <td></td>
         <td></td>
      </tr>
      <tr>
         <td>3</td>
         <td>DVD</td>
         <td>Stack.top</td>
      </tr>
      <tr>
         <td>2</td>
         <td>Compo</td>
         <td></td>
      </tr>
      <tr>
         <td>1</td>
         <td>VCD</td>
         <td></td>
      </tr>
      <tr>
         <td>0</td>
         <td>TV</td>
         <td></td>
      </tr>
   </tbody>
</table>

> Jika kita ingin menampilkan elemen stack, kita harus
membaca elemen array dari index yang ada isinya tertinggi,
yaitu dari Atas ke Bawah
>
> Sehingga kita akan menampilkan elemen:
> `DVD`, `Compo`, `VCD` dan `TV`