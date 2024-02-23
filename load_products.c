void load_products(struct item products [MAX]){
    char *name[MAXNAME]={"1.Balones de basquetbol","2.Jersey de lakers NBA", "3.Tenis para basquetbol",
                            "4.Rodilleras basquetbol", "5.Bandas para cabello"};
    float price[MAX]={699.99,1800,4399,300,299.50};

    for (int i=0; i<MAX; i++){
        products[i].stock = 10;
        products[i].cart = 0;
        products[i].price = price[i];
        products[i].name = name[i];
    }
}
