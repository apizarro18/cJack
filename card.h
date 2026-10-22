#ifndef CARD_H
#define CARD_H

#define RANK_STR_LEN 10
#define SUIT_STR_LEN 10

typedef enum{
    SUIT_CLUBS,
    SUIT_SPADES,
    SUIT_HEARTS,
    SUIT_DIAMONDS,
    SUIT_COUNT
}Suit;

typedef enum{
    RANK_TWO,
    RANK_THREE,
    RANK_FOUR,
    RANK_FIVE,
    RANK_SIX,
    RANK_SEVEN,
    RANK_EIGHT,
    RANK_NINE,
    RANK_TEN,
    RANK_JACK,
    RANK_QUEEN,
    RANK_KING,
    RANK_ACE,
    RANK_COUNT
}Rank;

typedef struct{
    Rank rank;
    Suit suit;
}Card;

void set_card(Card* card, Rank rank, Suit suit);
Rank get_rank(Card* card);
Suit get_suit(Card* card);
Suit suit_to_string(Suit suit);
Rank rank_to_string(Rank rank);

#endif