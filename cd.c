#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"



int main(int argc, char *argv[])
{
  //mengecek banyaknya paramater yang akan dieksekusi
  if(argc < 2) //terpenuhi jika command cd dipanggil tidak terdapat destinasi path yang dituju
  {
    printf(1, "cd need arguments [path destination]\n");
    exit();
  }

  //mengecek isi dari argv[1] apakah ada atau tidaknya path yg dituju
  if(chdir(argv[1]) < 0) //jika mengeluarkan nilai negatif, maka muncul pesan error
  {
    printf(1, "Failed to change directory to *s!\n", argv[1]);
  }
  exit(); // jika kondisi diatas tidak ada yg terpenuhi maka cd di eksekusi dan program exit

}
