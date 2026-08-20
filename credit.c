// Importing libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Hint of functions
void verify_card(long card_number);


int main(void){
    long card = get_long("Number:");
    verify_card(card);
}
// Function to verify card type (Masterdcard, Visa, ect..)

void verify_card(long card_number){
// Finding the number of digit in the card
    long digit_number = card_number;
    int bin;
    int number_of_digit = 0;
    do{
        number_of_digit++;
        digit_number = digit_number / 10;
    }while(digit_number > 100);
    number_of_digit++;
    int second_dig = digit_number % 10;
    bin = digit_number / 10;
    number_of_digit++;
    int first_dig = bin % 10;



//

    long card2 = card_number;
    long card1 = card_number;
    int place;
    int digit = 0;
    card1 = card1 / 10;
    int result = 0;
    do{
        place = card1 % 10;
        card1 = card1 / 100;
        digit = place*2;
        int first_digit = digit % 10;
        int second_digit = digit / 10;
        result += first_digit + second_digit;
        }while(card1 > 0);
//
    int place2;
    int result2 = 0;
        do{
            place2 = card2 % 10;
            card2 = card2/100;
            result2 += place2;
        }while(card2 > 0);
//
    int final_result = result + result2;
//
    if (final_result % 10 == 0){
        if (number_of_digit == 15 && first_dig == 3 && (second_dig == 4 || second_dig == 7)){
            printf("AMEX\n");
        }
        else if (number_of_digit == 16 && first_dig == 5 && (second_dig > 0 && second_dig <= 5)){
            printf("MASTERCARD\n");
        }
        else if (number_of_digit == 13 && first_dig == 4){
            printf("VISA\n");
        }
        else if (number_of_digit == 16 && first_dig == 4){
            printf("VISA\n");
        }
        else {
            printf("INVALID\n");
        }
        }
    else {
        printf("INVALID\n");
    }

    }


