#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file_data.txt","w+");

    fprintf(fp,"Welcome to skill qode, Decode your skill hear...\n");
    fputs("You are entering luring c language now...\n ",fp);
    fputs("We are enjoying every thing...\n",fp);
    
    fclose(fp);

    return 0;

}

// r - open a text file to read mode
// w - open a text file to write mode
// a - open a text file to append mode