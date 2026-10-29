#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
	char opcion;
	float x,y;
	float L, L1, L2, L3, b, a, h, D, dM, dm, r, Perimetro, Area, area, bm, bM;
	
    printf("Este programa calcula las siguientes areas y perimetros:\n");
	
    printf("\nElija una opcion:\n A) Triangulo\n B) Circulo\n C) Cuadrado\n D) Rectangulo\n E) Rombo\n F) Trapecio\n G) Pentagono\n H) Hexagono\n I) Paralelogramo \nSeleccion: ");
    /*scanf("%f",&opcion);
	opcion=getchar()
    
    switch(opcion)*/
	switch (opcion=getchar())
	{
		case 'A': case 'a': system("cls");
							printf("\n Dame el valor del primer lado: ");
	                          scanf("%f", &L1);

                            printf("\n Dame el valor del segundo lado: ");
	                          scanf("%f", &L2);

                            printf("\n Dame el valor del tercer lado: ");
	                          scanf("%f", &L3);

                            printf("\n Dame el valor de la base del triangulo: ");
                              scanf("%f", &b);

                            printf("\n Dame el valor de la altura del triangulo: ");
                              scanf("%f", &h);


                           Perimetro= L1 + L2 + L3;

                           Area= b * h / 2;

                           printf("\n El perimetro de tu triamgulo es: %f", Perimetro);

                           printf("\n El area de tu triangulo es: %f", Area);

							break;

		case 'B': case 'b': system("cls");
		
                            printf("\n\nDame el valor del DIAMETRO: ");
	                        scanf("%f", &D);
	
                            printf("\n Dame el valor del radio: ");
	                        scanf("%f", &r);
	
                            Perimetro= D*PI;

                            Area= PI*pow(r,2);

                            printf("\n El perimetro de tu triamgulo es: %f", Perimetro);
	
                            printf("\n El area de tu triangulo es: %f", Area);


						    break;

		case 'C': case 'c': system("cls");
							
		                    printf("\n\nDame el valor de cualquiera de los 4 lados: ");
	                        scanf("%f", &L);   
    
                            Perimetro= L*4;

                            Area= L*L;

                            printf("\n El perimetro de tu Cuadrado es: %f", Perimetro);
	
                            printf("\n El area de tu Cuadrado es: %f", Area);

		                    break;
		
		case 'D': case 'd': system("cls");
		                    
		                    printf("\n\nDame el valor de la base: ");
							scanf("%f", &b);
							
							printf("\n Dame el valor de la altura: ");
							scanf("%f", &h);
							
							Perimetro= 2*h + 2*b;
							Area= b * h;

                            printf("\n El perimetro de tu rectangulo es: %f", Perimetro);
	
                            printf("\n El area de tu rectangulo es: %f", Area);

							break;

		case 'E': case 'e': system("cls");
	
                            printf("\n\nDame el valor de cualquiera de los lados: ");
	                        scanf("%f", &L);
							
							printf("\n Dame el valor de la diagonal mayor: ");
							scanf("%f", &dM);
							
							printf("\n Dame el valor de la diagonal menor: ");
							scanf("%f", &dm);
    
                            Perimetro= L*4;

                            Area= dM*dm/2;

                            printf("\n El perimetro de tu triamgulo es: %f", Perimetro);
	
                            printf("\n El area de tu triangulo es: %f", Area);

							break;
		
		case 'F': case 'f': system("cls");
		 
		                    printf("\n\nDame el valor de cualquiera de los lados: ");
	                        scanf("%f", &L);

                            Perimetro= L*4;
	
                            printf("\n Dame el valor de la base mayor: ");
	                        scanf("%f", &bM);
		
                            printf("\n Dame el valor de la base menor: ");
	                        scanf("%f", &bm);

                            printf("\n Dame el valor de la altura: ");
	                        scanf("%f", &h);

                            Area= bM+bm*h/2;

                            printf("\n El perimetro de tu trapecio es: %f", Perimetro);
	
                            printf("\n El area de tu trapecio es: %f", Area);
		                    
							break;

        case 'G': case 'g': system("cls");
		                
		                    printf("\n\nDame el valor de cualquiera de los lados: ");
						    scanf("%f", &L);
						
						    Perimetro= L*5;
						
						    printf("\n Dame el valor del apotema: ");
						    scanf("%f", &a);
						
						    Area= Perimetro*a/2;

                            printf("\n El perimetro de tu pentagono es: %f", Perimetro);
	
                            printf("\n El area de tu pentagono es: %f", Area);

						    break;

		case 'H': case 'h': system("cls");	
		                    
		                    printf("\n\nDame el valor de cualquiera de los lados: ");
	                        scanf("%f", &L);

                            Perimetro= L*6;
	
                            printf("\n Dame el valor del apotema: ");
							scanf("%f", &a);
							
							Area= Perimetro*a/2;
							
							printf("\n El perimetro de tu Hexagono es: %f", Perimetro);
							
							printf("\n El area de tu Hexagono es: %f", Area);

							break;

	    case 'I': case 'i': system("cls");	
		                    
                            printf("\n\n Dame el valor del lado a: ");
	                        scanf("%f", &a);

                            printf("\n Dame el valor de la base: ");
	                        scanf("%f", &b);
		
                            printf("\n Dame el valor de la altura: ");
                            scanf("%f", &h);

                            Perimetro= 2*a+2*b;

                            Area= b+h/2;

                            printf("\n El perimetro de tu paralelogramo es: %f", Perimetro);
	
                            printf("\n El area de tu paralelogramo es: %f", Area);

							break;

	    default: printf("La opcion que digito no existe.\n");
	}

	getch();
	return 0;
}

