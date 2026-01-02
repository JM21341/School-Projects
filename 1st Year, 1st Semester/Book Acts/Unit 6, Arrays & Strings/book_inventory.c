// Book inventory system
#include <stdio.h>
#include <string.h>

int main(){
    char titles[10][50] = {"Title1", "Title2", "Title3","Title4", "Title5", "Title6", "Title7", "Title8", "Title9", "Title10"};
    char title[50];
    int x = 0;
    
    printf("\nEnter title here: ");
    scanf("%s", title);
    
    for(int i = 0; i < 10; i++){
        printf("\n[%d] %s", i + 1, titles[i]);
        if(strcmp(title, titles[i]) == 0){
            x = i;
        }
    }
    
    printf("\n\nThe title you're looking for is at [%d]", x + 1);
}