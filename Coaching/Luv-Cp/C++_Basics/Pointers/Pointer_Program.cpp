#include <iostream>
using namespace std;
#include <time.h> 



 void shuffle( int wDeck[][13] ) 
{ 
  int row, column, card; 
 
  for ( card = 1; card <= 52; card++){ 
    do{ 
        row = rand() % 4; 
        column = rand() % 13; 
    } while( wDeck [ row ][ column ] != 0 ); 
        wDeck[ row ][ column ] = card; 
    } 
 } 



void deal( const int wDeck[][ 13 ], const char *wFace[], const char *wSuit[]) 
{ 
    int card, row, column; 
    for ( card = 1; card <= 52; card++ ) 
        for( row = 0; row <= 3; row++) 
            for( column = 0; column <= 12; column++) 
                if( wDeck[ row ][ column ] == card ) 
                    cout << card << ".  " <<wFace[ column ] << " of " << wSuit [row ] << '\n'; 
 
} 


int main() {

    const char *suite[4] = {"Hearts", "Diamond", "Clubs", "Spades",};

    const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six","Seven", "Eight", "Nine", "Ten", "Jack", "Queen" , "King"};

    int deck[4][13] = {0};
    srand(time(0));
    shuffle(deck);
    deal(deck,face,suite);





    return 0;
    
}

