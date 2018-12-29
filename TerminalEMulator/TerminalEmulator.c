#include <stdio.h>
#include <time.h>
#include <string.h>

int Terminal(char* username){
    printf("Hello, %s\n", username);
}

char CreateAccount(){
    FILE *fp;
    fp = fopen("account.txt", "w+");
    printf("Please Enter a Username: ");
    char createusername[225];
    scanf("%s", &createusername);
    fprintf(fp, "%s\n", createusername);
    printf("Please Enter a Password: ");
    char createpassword[225];
    scanf("%s", &createpassword);
    fprintf(fp, "%s\n", createpassword);
    fclose(fp);
    Terminal(&createusername);
}

void login(char* fileusername, char* filepassword){
    int i;
    FILE *fp;
    fp = fopen("account.txt", "r");
    char typeusername[225];
    char typepassword[225];
    printf("Username: ");
    scanf("%s", &typeusername);
    printf("Password: ");
    scanf("%s", &typepassword);
    if(strcmp(typeusername, fileusername) == 0 && strcmp(typepassword, filepassword) == 0){
        Terminal(&fileusername);
    } else {
        char bad[] = "BBBOOOO!!";
    }
    
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
        login(&buff, &buff2);
    }
    return 0;
}