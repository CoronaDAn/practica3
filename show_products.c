void show_products (struct item products [MAX]){
    char salir;
    if (contador==50)
    {
        system("cls");
        printf("No hay mas productos en stock!!!!!!!!\n\n");
        menu();
    }
    else
    {
     system("cls");
     printf("\n\tNombre\t\t\t    Disponible\t\tPrecio\n");
    for (int i=0; i<MAX; i++)
    {
        if((products+i)->stock!=0)
        {
            printf("%s\t\t\t%d\t\t$%.2f\n",
            (products+i)->name, (products+i)->stock, (products+i)->price);
        }
    }
        printf("\nTecla s para salir:");
            scanf(" %c", &salir);
            if(salir=='s')
            {
                system("cls");
                menu();
            }
    }
}
