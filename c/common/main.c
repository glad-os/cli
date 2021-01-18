/**
 * Copyright 2019 AbbeyCatUK
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "stdio.h"
#include "stdlib.h"



void request_command( void );
void execute_command( void );



char input[255];



int main( int argc, char **argv ) {

    while ( 1 ) {

        request_command();
        execute_command();

    }

    return 0;

}



void request_command( void ) {

    unsigned int    result;
    char            r[32];

    // test the APCS works ("result" should carry a value!)
    result = printf( "*" );
    //sprintf_i( (char *)r, result );
    //printf( r );

    gets( input );

}



void execute_command( void ) {

    int i = 0;
    while ( input[i] )
        i++;

    input[i++] = '.';
    input[i++] = 'B';
    input[i++] = 'I';
    input[i++] = 'N';
    input[i]   = 0x00;

    fork( input );
    printf( "(and now CLI can continue)\n" );

}

