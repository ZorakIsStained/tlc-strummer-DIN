//
//  patterns.h
//  
//
//  Created by Johan Berglund on 2017-05-14.
//
//

#ifndef patterns_h
#define patterns_h

// Patterns from Janost O2, https://janostman.wordpress.com/the-o2-source-code/
// GU BG2 BD CL CW MA CY QU
const unsigned char pattern[16][16] PROGMEM =
{{
    B00101100,      //Hard rock
    B00000000,
    B00000100,
    B00000000,
    B00101110,
    B00000000,
    B00100100,
    B00000000,
    B00101100,
    B00000000,
    B00000100,
    B00000000,
    B00101110,
    B00000000,
    B00000100,
    B00000000
},{
    B00100100,      //Disco
    B00000000,
    B00000100,
    B00010100,
    B00100110,
    B00000000,
    B00000001,
    B00000100,
    B00100100,
    B00000000,
    B00000100,
    B00000100,
    B01100110,
    B00000100,
    B01000001,
    B00000000
},{
    B01000001,      //Reggae
    B00000100,
    B10000000,
    B00000000,
    B00010110,
    B00000000,
    B10010000,
    B00000000,
    B00100000,
    B00000000,
    B10010000,
    B00000000,
    B00000110,
    B00000000,
    B10000100,
    B00000000
},{
    B00100100,      //Rock
    B00000000,
    B00000100,
    B00000000,
    B00000110,
    B00000000,
    B00100100,
    B00000000,
    B00100100,
    B00000000,
    B00000100,
    B00000000,
    B00000110,
    B00000000,
    B00000110,
    B00000000
},{
    B10110101,      //Samba
    B00010100,
    B10000100,
    B00010100,
    B10110100,
    B00000100,
    B01000100,
    B10010100,
    B00100100,
    B10010100,
    B01000100,
    B10010100,
    B10110101,
    B00000100,
    B10010100,
    B00000100
},{
    B00100110,      //Rumba
    B00000100,
    B00000001,
    B00110100,
    B00100100,
    B00000001,
    B00010110,
    B00000100,
    B00100100,
    B00000100,
    B00010001,
    B00100100,
    B00110100,
    B00000100,
    B01000001,
    B00000100
},{
    B00100100,      //Cha-Cha
    B00000000,
    B00000000,
    B00000000,
    B00000110,
    B00000000,
    B01000000,
    B00000000,
    B00100100,
    B00000000,
    B00000010,
    B00000000,
    B01000101,
    B00000000,
    B00000010,
    B00000000
},{
    B00100100,      //Swing
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000000,
    B00000000,
    B00000100,
    B00000100,
    B00000000,
    B00000000,
    B00000000,
    B00000100,
    B00000000,
    B00000000,
    B00000100
},{
    B00100001,      //Bossa Nova
    B00000100,
    B00000100,
    B00100100,
    B00100001,
    B00000100,
    B01000100,
    B00000100,
    B00100001,
    B00000100,
    B00000100,
    B00100000,
    B00100001,
    B01000101,
    B00000100,
    B00000100
},{
    B00100110,      //Beguine
    B00000000,
    B00000001,
    B00000000,
    B00000100,
    B00000000,
    B01100110,
    B00000000,
    B00100100,
    B00000000,
    B01000100,
    B00000100,
    B00100110,
    B00000000,
    B00000100,
    B00000000
},{
    B10100000,      //Synthpop
    B00000000,
    B10100010,
    B00000000,
    B00100000,
    B00000000,
    B00100110,
    B00000100,
    B01100000,
    B00000000,
    B01100110,
    B00000100,
    B00100000,
    B00000000,
    B00100010,
    B10001000
},{
    B00100000,      //Boogie
    B00000000,
    B00100100,
    B00000110,
    B00000000,
    B00100100,
    B00100100,
    B00000000,
    B00100100,
    B00000110,
    B00000000,
    B00100100,
    // end
    B11111111,
    B11111111,
    B11111111,
    B11111111
},{
    B00100100,      //Waltz
    B00000000,
    B00000000,
    B00000000,
    B00010010,
    B00000000,
    B00000000,
    B00000000,
    B00010010,
    B00000000,
    B00000000,
    B00000000,
    // end
    B11111111,
    B11111111,
    B11111111,
    B11111111
},{
    B00100110,      //Jazz rock
    B00000000,
    B00000100,
    B00000000,
    B00000110,
    B00000000,
    B00000100,
    B00000000,
    B00000110,
    B00000000,
    B01100000,
    B00000000,
    // end
    B11111111,
    B11111111,
    B11111111,
    B11111111
},{
    B00100100,     //Slow rock
    B00000000,
    B00000100,
    B00000000,
    B00000100,
    B00000000,
    B00000110,
    B00000000,
    B00000100,
    B00000000,
    B00100100,
    B00000000,
    // end
    B11111111,
    B11111111,
    B11111111,
    B11111111
},{
    B00100101,      //Oxygene
    B00001100,
    B00000100,
    B00101110,
    B00000100,
    B00010100,
    B00100101,
    B00000100,
    B00000100,
    B00101100,
    B00000100,
    B11100100,
    // end
    B11111111,
    B11111111,
    B11111111,
    B11111111
}};


//Rhythmic chord gating patterns
byte gatePattern[16][16] {
    {0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0},  //Hard rock... nah
    {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},  //Disco
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0},  //Reggae
    {0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0},  //Rock
    {1,0,1,0,1,0,0,1,0,1,0,1,1,0,1,0},  //Samba
    {0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0},  //Rumba
    {1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0},  //Cha-Cha
    {1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},  //Swing
    {0,0,1,0,0,1,0,0,1,0,0,1,0,1,0,0},  //Bossa Nova
    {1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0},  //Beguine
    {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0},  //Synthpop
    {1,0,1,0,0,1,1,0,1,0,0,1,0,0,0,0},  //Boogie
    {0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},  //Waltz
    {1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0},  //Jazz rock
    {1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0},  //Slow rock
    {0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0}   //Oxygene
};

//Bassline patterns (-1 for silent, otherwise note number in chord)
int bassPattern[16][16] {
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 2,-1},  //Hard rock... nah
    { 0,-1, 0,-1, 3,-1, 3,-1, 0,-1, 0,-1, 3,-1, 3,-1},  //Disco
    { 0,-1,-1,-1,-1,-1, 2,-1, 2,-1, 2,-1, 2,-1, 2,-1},  //Reggae
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 2,-1},  //Rock
    { 0,-1,-1,-1,-1,-1, 0,-1, 1,-1,-1,-1, 2,-1,-1,-1},  //Samba
    { 0,-1,-1,-1,-1,-1, 3,-1, 3,-1, 3,-1, 2,-1, 2,-1},  //Rumba
    { 0,-1,-1,-1,-1,-1, 0,-1, 2,-1,-1,-1, 2,-1,-1,-1},  //Cha-Cha
    { 0,-1,-1,-1,-1,-1, 1,-1,-1,-1,-1,-1,-1,-1,-1,-1},  //Swing
    { 0,-1, 0,-1,-1,-1, 3,-1, 3,-1, 3,-1, 2,-1, 1,-1},  //Bossa Nova
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1,-1,-1},  //Beguine
    {-1,-1, 0,-1,-1,-1, 0,-1,-1,-1, 0,-1,-1,-1, 0,-1},  //Synthpop
    { 0,-1,-1,-1,-1,-1,-1,-1, 2,-1,-1, 3,-1,-1,-1,-1},  //Boogie
    { 0,-1,-1,-1, 2,-1,-1,-1, 2,-1,-1,-1,-1,-1,-1,-1},  //Waltz
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 2,-1},  //Jazz rock
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 2,-1},  //Slow rock
    { 0,-1,-1,-1,-1,-1, 1,-1, 2,-1,-1,-1, 1,-1, 2,-1}   //Oxygene
};

#endif /* patterns_h */