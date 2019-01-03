#include<conio.h>
#include<stdio.h>
int main (void)
{
    int c[5]={1,2,3,4,5};
    int d[5];
    int i=0, j=0;
    printf("Nilai Array yang akan di tampilkan\n");
    for (i=4; i>=0; i--)
    {
        d[i]=c[j];
        printf ("%d", c[j]);
        j++;}
        printf ("\n");
        printf ("Posisi terbalik dari Array A adalah\n");
       for (i=0; i<5; i++){
        printf("%d", d[i]);
       }
       printf ("\n");
       return 0;

}
