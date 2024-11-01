#include <stdio.h>
#include <stdlib.h>

 

int main()
{
    int a,b,c;
    
    
    
    printf("Masukan jam masuk : ");
    scanf("%d", &a);
    printf("Masukan jam keluar: ");
    scanf("%d", &b);
    //rumus
    c = b -a;
    
    //output
    printf("Lama bekerja : %i jam", c);
    
    return 0;
}