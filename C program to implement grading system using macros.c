#include <stdio.h>
#define A_PLUS_UPPER_LIMIT 80
#define A_UPPER_LIMIT 70
#define A_MINUS_UPPER_LIMIT 60
#define B_UPPER_LIMIT 50
#define C_UPPER_LIMIT 40
#define D_UPPER_LIMIT 33
#define A_PLUS_GRADE "A+"
#define A_GRADE "A"
#define A_MINUS_GRADE "A-"
#define B_GRADE "B"
#define C_GRADE "C"
#define D_GRADE "D"
#define F_GRADE "F"
#define GRADE(score) \
    ((score) >= A_PLUS_UPPER_LIMIT ? A_PLUS_GRADE : \
    (score) >= A_UPPER_LIMIT ? A_GRADE : \
    (score) >= A_MINUS_UPPER_LIMIT ? A_MINUS_GRADE : \
    (score) >= B_UPPER_LIMIT ? B_GRADE : \
    (score) >= C_UPPER_LIMIT ? C_GRADE : \
    (score) >= D_UPPER_LIMIT ? D_GRADE : F_GRADE)

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    } else {
        printf("The student's grade is: %s\n", GRADE(score));
    }
    return 0;
}
