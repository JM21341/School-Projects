// Password Strength Checker
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    retry: 
        char password[40];
        bool isMoreThan8Characters = false;
        bool isUpperCase = false;
        bool isLowerCase = false;
        bool isDigit = false;
        bool hasSpecialChar = false;
        
        printf("\nPassword: ");
        scanf("%s", password);
    
    if(strlen(password) >= 8){
        isMoreThan8Characters = true;
        
        for(int i=0; i <= strlen(password); i++){
            char ch = password[i];
            
            if(isupper(ch)){
                isUpperCase = true;
            } else if(islower(ch)){
                isLowerCase = true;
            } else if(isdigit(ch)){
                isDigit = true;
            } else if(ch == '&' || ch == '_' || ch == '-' || ch == '@' || ch == '*'){
                hasSpecialChar = true;
            }
        }
    }
    
    if(isMoreThan8Characters == true && isUpperCase == true && isLowerCase == true && isDigit == true && hasSpecialChar == true){
        printf("\nYour password is complete!");
    } else{
        printf("\nYour password must be 8 or more characters long, must have digits and must contain special characters (&, *, _). Please try again!\n\n");
        goto retry;
    }
}