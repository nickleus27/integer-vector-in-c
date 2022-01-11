//
//  main.c
//  hash_table_c
//
//  Created by Nicholas Anderson on 9/20/21.
//

#include <stdio.h>
#include "int_vector.h"

int main(int argc, const char * argv[]) {
    int input;

    printf("Please enter vector size\n");
    scanf("%d", &input);
    int_vector* t = new_int_vector(input);
    
    printf("Enter positive numbers to input into vector, enter -1 to print values out.\n");
    scanf("%d", &input);
    while(input != -1)
    {
        intv_push(t, input);
        scanf("%d", &input);
    }
    for(int i=0; i < intv_size(t); i++)
    {
        printf("%d\n",intv_get(t, i));
    }
    printf("Enter index to erase, print and exit.\n");
    scanf("%d", &input);
    //printf("This is erase %d\n",erase(&t, input));
    erase(t, input);
    for(int i=0; i < intv_size(t); i++)
    {
        printf("%d\n",intv_get(t, i));
    }
    intv_free(t);

    return 0;
}
