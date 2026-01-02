// Simple voting system
#include <stdio.h>

int main(){
    int votes[3];
    
    for(int i = 0; i < 3; i++){
        printf("\nEnter Candidate %d vote here: ", i + 1);
        scanf("%d", &votes[i]);
    }
    
    int candidate1Votes = votes[0], candidate2Votes = votes[1], candidate3Votes = votes[2];
    
    printf("\nCandidate 1: %d \nCandidate 2: %d \nCandidate 3: %d", candidate1Votes, candidate2Votes, candidate3Votes);
}