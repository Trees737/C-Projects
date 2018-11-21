#include <stdio.h>
#include <time.h>
#include <string.h>

char CreateAccount(){
    
}

int main(){
    FILE *fp;
    char buff[225];
    char buff2[225];
    fp = fopen("account.txt", "r");
    fscanf(fp, "%s", buff);
    fscanf(fp, "%s", buff2);
    fclose(fp);
    if(strcmp(buff, "") == 0 && strcmp(buff2, "") == 0){
        char yesno[5];
        printf("It seems that there are no accounts right now.\nWould you like to create one? Y/N: ");
        scanf("%s", &yesno);
        if(strcmp(yesno, "Y") == 0 || strcmp(yesno, "y") == 0){
            CreateAccount();
        } else {
            return 0;
        }
    } else {
        Login(&buff, &buff2);
    }
    return 0;
}