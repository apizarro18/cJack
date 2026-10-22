#include <card.h>

void set_card(Card* card, Rank rank, Suit suit){
    card->rank = rank;
    card->suit = suit;
}

Rank get_rank(Card* card){
    return card->rank;
}

Suit get_suit(Card* card){
    return card->suit;
}

const char* suit_to_string(Suit suit){
    switch(suit){
        case SUIT_CLUBS: return "Clubs";
        case SUIT_SPADES: return "Spades";
        case SUIT_HEARTS: return "Hearts";
        case SUIT_DIAMONDS: return "Diamonds";
        default: return "Unknown";
    }
}

const char* rank_to_string(Rank rank){
    switch(rank){
        case RANK_TWO: return "Two";
        case RANK_THREE: return "Three";
        case RANK_FOUR: return "Four";
        case RANK_FIVE: return "Five";
        case RANK_SIX: return "Six";
        case RANK_SEVEN: return "Seven";
        case RANK_EIGHT: return "Eight";
        case RANK_NINE: return "Nine";
        case RANK_TEN: return "Ten";
        case RANK_JACK: return "Jack";
        case RANK_QUEEN: return "Queen";
        case RANK_KING: return "King";
        case RANK_ACE: return "Ace";
        default: return "Unknown";
    }
}