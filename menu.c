void menu()
 {
    struct item products [MAX];
    load_products(products);

      int opcion;
    printf("#################################\n");
    printf("####BIENVENIDO A CORONASTORE#####\n");
    printf("#################################\n\n");
    printf("Menu:\n");
    printf("1.Mostrar elementos de la tienda\n");
    printf("2.Mostrar carrito\n");
    printf("3.Agregar elementos al carrito\n");
    printf("4.eliminar elementos del carrito\n");
    printf("5.Salir de la aplicacion\n");

    printf("Opcion de numero elegida:");
    scanf("%i", &opcion);
    switch(opcion)
    {
    case 1:

        show_products(products);
        break;
    case 2:
        cart(products);
        break;
    case 3:
        show_products(products);
        add_product(products);
        break;
    case 4:
        cart(products);
        delete_product(products);7
        break;
    case 5:
        //salir(&inv, &nom);
        break;
    default:
        printf("La opcion no es valida\n");
        getchar();

    }
}
