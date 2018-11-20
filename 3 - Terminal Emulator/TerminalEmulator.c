#include <stdio.h>
#include <time.h>

int main(){
    struct Account{ //Creates the account setup and login
        char username[20];
        char password[50];
        char FullName[50];
    };
    FILE *fp;
    char buff[225];
    char buff2[225]
    fp = fopen("account.txt", "r");
    fscanf(fp, "%s", buff);
    fscanf(fp, "%s", buff2);
    if(
    
}