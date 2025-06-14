 #include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c)
    {
        printf("it is equilateral traingle");
    }
    else if((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("It is a valid triangle.\n");
    } else {
        printf("It is NOT a valid triangle.\n");
    }

    return 0;
}

    
