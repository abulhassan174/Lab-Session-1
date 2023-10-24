int height;
int width;

int main(){
    printf("Enter height of a rectangle: ");
    scanf("%d", &height);

    printf("Enter width of a rectangle: ");
    scanf("%d", &width);

    printf("Perimeter = %d\n", 2*(width+height));
    printf("Area = %d", width * height);

}
