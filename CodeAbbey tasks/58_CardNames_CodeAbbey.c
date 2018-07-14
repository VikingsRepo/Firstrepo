#include <stdio.h>

const char suits[4][10]  = {"Clubs", "Spades", "Diamonds", "Hearts"};
const char ranks[13][10] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

int main(void)
{
    unsigned int N, i, card_val;
    unsigned int suit_val, rank_val;

    scanf("%d\n", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &card_val);
        suit_val = card_val / 13;
        rank_val = card_val % 13;
        printf("%s-of-%s ", ranks[rank_val], suits[suit_val]);
    }

    return 0;
}