void cart (struct item products [MAX]){
    char salir;
     if (contador==0)
    {
        system("cls");
        printf("No hay productos en el carrito !!!!!!!!\n\n");
        menu();

    }
    else
    {
     system("cls");
     printf("\n\tNombre\t\t\t    Agregado\t\tPrecio\t\t\ttotal\n");
    for (int i=0; i<MAX; i++)
    {
        if((products+i)->cart != 0)
        {
            printf("%s\t\t\t%d\t\t$%.2f\t\t\t$%.2f\n",
            (products+i)->name, (products+i)->cart, (products+i)->price, (products+i)->cart*(products+i)->price);
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
