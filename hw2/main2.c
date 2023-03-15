#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    FILE*fp;
    FILE*fp1;
    

    
    char arr_read[200];
    fp = fopen("main2.c","rb+");
    fseek(fp,0,SEEK_SET);
    fread(arr_read,sizeof(char),200,fp);

    fp1 = fopen("main2.txt","w+");
    fprintf (fp1,arr_read);
    fclose (fp);
    fclose (fp1);
    return 0;
}
