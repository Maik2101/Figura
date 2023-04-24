#include <stdio.h>


// Función para calcular el área y el perímetro de un círculo
void calCirculo(double radio) {
    double PI = 3.14;
    double area = PI * (radio * radio);
    double perimetro = 2 * PI * radio;
    printf("\nEl area del circulo es: %lf\n", area);
    printf("\nEl perimetro del circulo es: %lf\n", perimetro);
}

// Función para calcular el área y el perímetro de un triángulo
void calTriangulo(double base, double altura, double l1, double l2) {
    double area = (base * altura) / 2.0;
    double perimetro = base + l1 + l2;
    printf("El area del triangulo es: %lf\n", area);
    printf("El perimetro del triangulo es: %lf\n", perimetro);
}

// Función para calcular el área y el perímetro de un rectángulo
void calRectangulo(double base, double altura) {
    double area = base * altura;
    double perimetro = 2 * (base + altura);
    printf("El area del rectangulo es: %lf\n", area);
    printf("El perimetro del rectangulo es: %lf\n", perimetro);
}

// Función para calcular el área y el perímetro de un cuadrado
void calCuadrado(double lado) {
    double area = (lado * lado);
    double perimetro = 4 * lado;
    printf("El area del cuadrado es: %lf\n", area);
    printf("El perimetro del cuadrado es: %lf\n", perimetro);
}

// Función para calcular el área y el perímetro de un trapecio
void calTrapecio(double bsMyor, double bsMnor, double altura, double l1, double l2) {
    double area = ((bsMyor + bsMnor) * altura) / 2.0;
    double perimetro = bsMyor + bsMnor + l1 + l2;
    printf("El area del trapecio es: %lf\n", area);
    printf("El perimetro del trapecio es: %lf\n", perimetro);
}

// Función para mostrar el menú y obtener la opción del usuario
int mostrarMenu() {
    int opcion;
    printf("---Menu de figuras a calcular---\n");
    printf("1. Circulo\n");
    printf("2. Triangulo\n");
    printf("3. Rectangulo\n");
    printf("4. Cuadrado\n");
    printf("5. Trapecio\n");
    printf("6. Salir\n");
    printf("Elija una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

int main() {
    int opcion;
    double radio, base, altura, l1, l2, bsMyor, bsMnor;

    do {
        opcion = mostrarMenu();
        switch (opcion) {
              case 1:
            printf("Ingrese el radio del circulo: ");
            scanf("%lf", &radio);
            calCirculo(radio);
            break;
        case 2:
            printf("Ingrese la base del triangulo: ");
            scanf("%lf", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%lf", &altura);
            printf("Ingrese el primer lado del triangulo: ");
            scanf("%lf", &l1);
            printf("Ingrese el segundo lado del triangulo: ");
            scanf("%lf", &l2);
            calTriangulo(base, altura, l1, l2);
            break;
        case 3:
            printf("Ingrese la base del rectangulo: ");
            scanf("%lf", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%lf", &altura);
            calRectangulo(base, altura);
            break;
        case 4:
            printf("Ingrese el lado del cuadrado: ");
            scanf("%lf", &l1);
            calCuadrado(l1);
            break;
        case 5:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%lf", &bsMyor);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%lf", &bsMnor);
            printf("Ingrese la altura del trapecio: ");
            scanf("%lf", &altura);
            printf("Ingrese el primer lado del trapecio: ");
            scanf("%lf", &l1);
            printf("Ingrese el segundo lado del trapecio: ");
            scanf("%lf", &l2);
            calTrapecio(bsMyor, bsMnor, altura, l1, l2);
            break;
        default:
            printf("Adios\n");
            break;
    }
} while (opcion != 6);

return 0;
}