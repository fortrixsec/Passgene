#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 101

void usage(char *program_name) {
    printf("Usage: %s <length> <lowercase(y/n)> <uppercase(y/n)> <digits(y/n)> <symbols(y/n)>\n", program_name);
    exit(1);
}

int main(int argc, char *argv[]) {

    if(argc != 6)
        usage(argv[0]); 

    unsigned int length =  0;
    // char include_lower, include_upper, include_digit, include_special;
    
    length = atoi(argv[1]); // Convert the 2nd arg into an integer.
    if(length <= 8 || length >= LENGTH){
        printf("Length Must Be Betweem 8 and 100 !");
        return 1;
    }
    printf("Length %d\n", length);

    // char opt[5] = 'yY';
    
    char *include_lower = argv[2];
    char *include_upper = argv[3];
    char *include_digit = argv[4];
    char *include_special = argv[5];

    char charset[1000] = "";

    if(include_lower[0]  == 'y' || include_lower[0]  == 'Y' ) 
        strcat(charset, "abcdefghijklmnopqrstuvwxyz");
    if(include_upper[0]  == 'y' || include_upper[0]  == 'Y' ) 
        strcat(charset, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    if(include_digit[0]  == 'y' || include_digit[0]  == 'Y' ) 
        strcat(charset, "0123456789");
    if(include_special[0]  == 'y' || include_special[0]  == 'Y' ) 
        strcat(charset, "!@#$%^&*()-_=+[]{}|;:,.<>?");
    if (strlen(charset) == 0) {
        printf("No character set selected for password generation.\n");
        return 1;
    }

    srand(time(NULL));
    char password[LENGTH];
    for (unsigned int i = 0; i < length; i++) {
        password[i] = charset[rand() % strlen(charset)];
    }
    password[length] = '\0';

    printf("Generated Password: %s \n", password);

    return 0;
} 
