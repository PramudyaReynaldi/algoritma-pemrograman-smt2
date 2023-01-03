#include <stdio.h>
#include <string.h>
#include <cstring>
#include <string.h>
#include <stdio.h>

main() {


    char nama1[12],
    nama2[12],
    hobi[20],
    mixed[25];
    char title;
   
    strcpy(nama1,"Pramudya");
    strcpy(nama2,"Reynaldi");
    strcpy(hobi,"sepak bola");
    printf("Nama 1 = %s\n",nama1);
    printf("Nama 2 = %s\n",nama2);
    printf("hobi = %s\n",hobi);
    strcpy(mixed,nama1);
    strcat(mixed," ");
    strcat(mixed,nama2);
    printf("Nama Lengkap %s\n",mixed);
    gets(0);return(0);
   
}
      
