float height;
main() {
    printf("Enter height of a person in centimeters: ");
    scanf("%f", &height);

    if (height < 150){
    printf("Category: Dwarf");
    }else if (height == 150){
    printf("Category: Average");
    }else if (height >= 165){
        printf("Category: Tail");
    }
    return 0;
}
