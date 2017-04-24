//
//  main.c
//  FizzBuzz
//
//  Created by swcl on 2017-04-24.
//  Copyright © 2017 Shreve LaFramenta. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i;
    for(i=1; i<101; i++)                            //print numbers 1 to 100
    {
        if(i%3==0 && i%5==0){printf("FizzBuzz\n");}   //For numbers which are multiples of both 3 and 5 print "FizzBuzz"
            else{
                if(i%5==0){printf("Buzz\n");}         //for the multiples of 5, print "Buzz"
                    else{
                        if(i%3==0){printf("Fizz\n");} //For the multiples of 3, print "Fizz"

                            else{printf("%i\n", i);}  //print numbers 1 to 100
                        }
                
                }
        
    }

    return 0;
}

