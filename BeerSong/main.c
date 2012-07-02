//
//  main.c
//  BeerSong
//
//  Created by Xochitl Perez on 18/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
void singTheSong(int numberOfBottles){
    if(numberOfBottles==0){
        printf("There are simply no more bottles of beer on the wall.\n");
    }
    else{
        printf("%d bottles of beer in the wall. %d bottles of beer.\n",numberOfBottles, numberOfBottles );
        int oneFewer =numberOfBottles-1;
        printf("Take one down, pass it around, %d bottles of beert on the wall.\n",oneFewer);
        singTheSong(oneFewer);//this function is call itself!!!
        printf("Put a bottle in the recycling, %d empety bottles in the bin.\n", numberOfBottles);
    }
}

int main (int argc, const char * argv[])
{
    singTheSong(99);
    return 0;
}

