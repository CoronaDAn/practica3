void delete_product (struct item products [MAX]){

    int id;
    int cantidad;
    printf("\nQue numero de producto deseas quitar:");
    scanf("%i",&id);
    printf("cantidad:");
    scanf("%i",&cantidad);
    if(id>MAX || id<1)
    {
        system("cls");
        printf("id incorrecto!!!!!\n");
        menu();
    }
    else
    {
        if(cantidad>(products+id)->cart || cantidad<=0)
        {
            system("cls");
            printf("No existe esa cantidad en su carrito!!!!!\n\n");
            menu();
        }
        else
        {
            products[id].stock += cantidad;
            products[id].cart -= cantidad;
            contador -=cantidad;
            system("cls");
            menu();
        }
    }
}
