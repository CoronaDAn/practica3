#include<stdio.h>
#include<stdlib.h>

void menu();
#include "globals.c"
#include "load_products.c"
#include "show_products.c"
#include "add_product.c"
#include "delete_product.c"
#include "cart.c"
#include "menu.c"



int main()
{
    menu();
    getchar();
    return 0;
}
