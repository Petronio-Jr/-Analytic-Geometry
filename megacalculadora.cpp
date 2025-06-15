/* Calculadora de matrizes 
06/04/2025    
Criador Petrônio       
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int a, b, c, d, e, f, g, h, i;
    int a2, b2, c2, d2, e2, f2, g2, h2, i2;
    int opcao, det, ordem, n, m, n2, m2;
    
    printf("\n\t\tCalculadora de matrizes.\n");
    printf("\nPressione 1 para continuar ou 0 para sair: ");
    scanf("%d", &opcao);

    while (opcao != 0) {

        printf("\n\n\tO que voce deseja calcular?\n");
        printf("\n\t1.Determinante");
        printf("\n\t2.Matriz transposta");
        printf("\n\t3.Matriz inversa");
        printf("\n\t4.Matriz adjunta");
        printf("\n\t5.Soma");
        printf("\n\t6.subtracao");
        printf("\n\t7.Multiplicacao");
        printf("\n\t0.Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                det = a;

                printf("\n\tA determinante da matriz e igual a: %d", det);
                printf("\n\t");
            }
            else {
                if (ordem == 2) {
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    det = (a * e) - (b * d);

                    printf("\n\tA determinante e igual a: %d", det);
                    printf("\n\t");
                }
                else {
                    if (ordem == 3) {

                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        det = a * 1 * (e * i - f * h) + b * -1 * (d * i - f * g) + c * 1 * (d * h - e * g);

                        printf("\n\tA determinante e igual a: %d", det);
                        printf("\n\t");
                    }
                }
            }break;
        case 2:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tA transposta da matriz eh: %d", a);
                printf("\n\t");

            }
            else {
                if (ordem == 2) {
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    printf("\n\tA transposta da matriz eh:\n");
                    printf("\n\t%d %d", a, d);
                    printf("\n\t%d %d", b, e);
                    printf("\n\t");
                }
                else {
                    if (ordem == 3) {

                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        printf("\n\tA transposta da matriz eh:\n");
                        printf("\n\t%d %d %d", a, d, g);
                        printf("\n\t%d %d %d", b, e, h);
                        printf("\n\t%d %d %d", c, f, i);
                        printf("\n\t");

                    }
                }break;
        case 3:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tA Matriz Inversa eh: %d", a);
                printf("\n\t");
            }
            else {
                if (ordem == 2) {
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    det = (a * e) - (b * d);

                    if (det == 0) {
                        printf("\n\tNao existe matriz inversa com det = 0.\n");
                    }

                    printf("\n\tA Matriz Inversa eh:\n");
                    printf("\n\t%d", e);
                    printf("/%d", det);
                    printf("\t%d", -b);
                    printf("/%d", det);
                    printf("\n\t%d", -d);
                    printf("/%d", det);
                    printf("\t%d", a);
                    printf("/%d", det);
                    printf("\n\t");

                }
                else {
                    if (ordem == 3) {

                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        det = (a * e * i + b * f * g + c * d * h) - (b * d * i + a * f * h + c * e * g);

                        if (det == 0) {
                            printf("\n\tNao existe matriz inversa com det = 0.\n");
                        }

                        printf("\n\tA Matriz inversa eh:");

                        printf("\n\t%d",e * i - h * f);
                        printf("/%d", det);
                        printf("\t  %d",(b * i - h * c)*(-1));
                        printf("/%d", det);
                        printf("\t  %d", b * f - c * e);
                        printf("/%d", det);
                        printf("\n\t%d", (d* i - f * g)*(-1));
                        printf("/%d", det);
                        printf("\t  %d", a * i - c * g);
                        printf("/%d", det);
                        printf("\t  %d",(a * f - d * c)* (-1));
                        printf("/%d", det);
                        printf("\n\t%d",   d * h - e * g);
                        printf("/%d", det);
                        printf("\t  %d",(a * h - b * g)* (-1));
                        printf("/%d", det);
                        printf("\t  %d",a * e - b * d);
                        printf("/%d", det);
                        printf("\n\t");
                    }




                }
            }break;
        case 4:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tA Matriz adjunta eh %d", a);
                printf("\n\t");
            }
            else {
                if (ordem == 2) {
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    printf("\n\tA Matriz adjunta eh:\n");

                    printf("\n\t%d", e);
                    printf("\t%d", -d);
                    printf("\n\t%d", -b);
                    printf("\t%d", a);
                    printf("\n\t");
                }
                else {
                    if (ordem == 3) {

                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        printf("\n\t%d", 1 * (e * i - f * h));
                        printf("\t%d", -1 * (b * i - c * h));
                        printf("\t%d", 1 * (b * f - c * e));
                        printf("\n\t%d", -1 * (d * i - f * g));
                        printf("\t%d", 1 * (a * i - c * g));
                        printf("\t%d", -1 * (a * f - c * d));
                        printf("\n\t%d", 1 * (d * h - e * g));
                        printf("\t%d", -1 * (a * h - b * g));
                        printf("\t%d", 1 * (a * e - b * d));


                        printf("\n\t");
                    }
                }
            }break;
        case 5:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tPrimeira matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tSegunda matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a2);

                printf("\n\tA nova matriz eh %d", a + a2);
                printf("\n\t");
            }
            else {
                if (ordem == 2) {
                    printf("\n\tPrimeira matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    printf("\n\tSegunda matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a2);
                    printf("\tInsira A12: ");
                    scanf("%d", &b2);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d2);
                    printf("\tInsira A22: ");
                    scanf("%d", &e2);

                    printf("\n\tA nova Matriz eh:\n");

                    printf("\n\t%d", a + a2);
                    printf("\t%d", b + b2);
                    printf("\n\t%d", d + d2);
                    printf("\t%d", e + e2);
                    printf("\n\t");
                }
                else {
                    if (ordem == 3) {

                        printf("\n\tPrimeira matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        printf("\n\tSegunda matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a2);
                        printf("\tInsira A12: ");
                        scanf("%d", &b2);
                        printf("\tInsira A13: ");
                        scanf("%d", &c2);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d2);
                        printf("\tInsira A22: ");
                        scanf("%d", &e2);
                        printf("\tInsira A23: ");
                        scanf("%d", &f2);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g2);
                        printf("\tInsira A32: ");
                        scanf("%d", &h2);
                        printf("\tInsira A33: ");
                        scanf("%d", &i2);

                        printf("\n\t%d", a + a2);
                        printf("\t%d", b + b2);
                        printf("\t%d", c + c2);
                        printf("\n\t%d", d + d2);
                        printf("\t%d", e + e2);
                        printf("\t%d", f + f2);
                        printf("\n\t%d", g + g2);
                        printf("\t%d", h + h2);
                        printf("\t%d", i + i2);


                        printf("\n\t");
                    }
                }

            } break;
        case 6:
            printf("\n\tQual a ordem da matriz (ate 3): ");
            scanf("%d", &ordem);

            if (ordem == 1) {
                printf("\n\tPrimeira matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tSegunda matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a2);

                printf("\n\tA nova matriz eh %d", a - a2);
                printf("\n\t");
            }
            else {
                if (ordem == 2) {
                    printf("\n\tPrimeira matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d);
                    printf("\tInsira A22: ");
                    scanf("%d", &e);

                    printf("\n\tSegunda matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a2);
                    printf("\tInsira A12: ");
                    scanf("%d", &b2);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d2);
                    printf("\tInsira A22: ");
                    scanf("%d", &e2);

                    printf("\n\tA nova Matriz eh:\n");

                    printf("\n\t%d", a - a2);
                    printf("\t%d", b - b2);
                    printf("\n\t%d", d - d2);
                    printf("\t%d", e - e2);
                    printf("\n\t");
                }
                else {
                    if (ordem == 3) {

                        printf("\n\tPrimeira matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);
                        printf("\tInsira A13: ");
                        scanf("%d", &c);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d);
                        printf("\tInsira A22: ");
                        scanf("%d", &e);
                        printf("\tInsira A23: ");
                        scanf("%d", &f);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g);
                        printf("\tInsira A32: ");
                        scanf("%d", &h);
                        printf("\tInsira A33: ");
                        scanf("%d", &i);

                        printf("\n\tSegunda matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a2);
                        printf("\tInsira A12: ");
                        scanf("%d", &b2);
                        printf("\tInsira A13: ");
                        scanf("%d", &c2);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d2);
                        printf("\tInsira A22: ");
                        scanf("%d", &e2);
                        printf("\tInsira A23: ");
                        scanf("%d", &f2);
                        printf("\n\tInsira A31: ");
                        scanf("%d", &g2);
                        printf("\tInsira A32: ");
                        scanf("%d", &h2);
                        printf("\tInsira A33: ");
                        scanf("%d", &i2);

                        printf("\n\t%d", a - a2);
                        printf("\t%d", b - b2);
                        printf("\t%d", c - c2);
                        printf("\n\t%d", d - d2);
                        printf("\t%d", e - e2);
                        printf("\t%d", f - f2);
                        printf("\n\t%d", g - g2);
                        printf("\t%d", h - h2);
                        printf("\t%d", i - i2);


                        printf("\n\t");
                    }
                }
            }
            }break;
        case 7:
            printf("\n\tQual a ordem da primeira matriz (ate 3 x 3)\n");
            printf("\n\tNumero de linhas : ");
            scanf("%d", &n);
            printf("\tNumero de colunas: ");
            scanf("%d", &m);

            printf("\n\tQual a ordem da segunda matriz:");
            printf("\n\tNumero de linhas : ");
            scanf("%d", &n2);
            printf("\tNumero de colunas: ");
            scanf("%d", &m2);


            if (n == 1 && m == 1 && n2 == 1 && m2 == 1) {
                printf("\n\tPrimeira matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a);

                printf("\n\tSegunda matriz ");
                printf("\n\tInsira A11: ");
                scanf("%d", &a2);

                printf("\n\tA nova matriz eh %d", a * a2);
                printf("\n\t");
            }
            else {
                if (n == 1 && m == 2 && n2 == 2 && m2 == 1) {
                    printf("\n\tPrimeira matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a);
                    printf("\tInsira A12: ");
                    scanf("%d", &b);

                    printf("\n\tSegunda matriz ");
                    printf("\n\tInsira A11: ");
                    scanf("%d", &a2);
                    printf("\n\tInsira A21: ");
                    scanf("%d", &d2);

                    printf("\n\tA nova matriz eh %d", a * a2 + b * d2);
                    printf("\n\t");
                }
                else {
                    if (n == 1 && m == 2 && n2 == 2 && m2 == 3) {
                        printf("\n\tPrimeira matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a);
                        printf("\tInsira A12: ");
                        scanf("%d", &b);

                        printf("\n\tSegunda matriz ");
                        printf("\n\tInsira A11: ");
                        scanf("%d", &a2);
                        printf("\tInsira A12: ");
                        scanf("%d", &b2);
                        printf("\tInsira A13: ");
                        scanf("%d", &c2);
                        printf("\n\tInsira A21: ");
                        scanf("%d", &d2);
                        printf("\tInsira A22: ");
                        scanf("%d", &e2);
                        printf("\tInsira A23: ");
                        scanf("%d", &f2);

                        printf("\n\tA nova Matriz eh:\n");

                        printf("\n\t%d", a * a2 + b * d2);
                        printf("\t%d", a * b2 + b * e2);
                        printf("\t%d", a * c2 + b * f2);
                        printf("\n\t");
                    }
                    else {
                        if (n == 1 && m == 1 && n2 == 1 && m2 == 3) {
                            printf("\n\tPrimeira matriz ");
                            printf("\n\tInsira A11: ");
                            scanf("%d", &a);

                            printf("\n\tSegunda matriz ");
                            printf("\n\tInsira A11: ");
                            scanf("%d", &a2);
                            printf("\tInsira A12: ");
                            scanf("%d", &b2);
                            printf("\tInsira A13: ");
                            scanf("%d", &c2);

                            printf("\n\tA nova Matriz eh:\n");

                            printf("\n\t%d", a * a2);
                            printf("\t%d", a * b2);
                            printf("\t%d", a * c2);
                            printf("\n\t");
                        }
                        else {
                            if (n == 1 && m == 1 && n2 == 1 && m2 == 2) {
                                printf("\n\tPrimeira matriz ");
                                printf("\n\tInsira A11: ");
                                scanf("%d", &a);

                                printf("\n\tSegunda matriz ");
                                printf("\n\tInsira A11: ");
                                scanf("%d", &a2);
                                printf("\tInsira A12: ");
                                scanf("%d", &b2);

                                printf("\n\tA nova Matriz eh:\n");

                                printf("\n\t%d", a * a2);
                                printf("\t%d", a * b2);
                                printf("\n\t");

                            }
                            else {
                                if (n == 1 && m == 2 && n2 == 2 && m2 == 2) {
                                    printf("\n\tPrimeira matriz ");
                                    printf("\n\tInsira A11: ");
                                    scanf("%d", &a);
                                    printf("\tInsira A12: ");
                                    scanf("%d", &b);

                                    printf("\n\tSegunda matriz ");
                                    printf("\n\tInsira A11: ");
                                    scanf("%d", &a2);
                                    printf("\tInsira A12: ");
                                    scanf("%d", &b2);
                                    printf("\n\tInsira A21: ");
                                    scanf("%d", &d2);
                                    printf("\tInsira A22: ");
                                    scanf("%d", &e2);

                                    printf("\n\tA nova Matriz eh:\n");

                                    printf("\n\t%d", a * a2 + b * d2);
                                    printf("\t % d", a* b2 + b * e2);
                                    printf("\n\t");
                                }

                                else {
                                    if (n == 1 && m == 3 && n2 == 3 && m2 == 3) {
                                        printf("\n\tPrimeira matriz ");
                                        printf("\n\tInsira A11: ");
                                        scanf("%d", &a);
                                        printf("\tInsira A12: ");
                                        scanf("%d", &b);
                                        printf("\tInsira A13: ");
                                        scanf("%d", &c);

                                        printf("\n\tSegunda matriz ");
                                        printf("\n\tInsira A11: ");
                                        scanf("%d", &a2);
                                        printf("\tInsira A12: ");
                                        scanf("%d", &b2);
                                        printf("\tInsira A13: ");
                                        scanf("%d", &c2);
                                        printf("\n\tInsira A21: ");
                                        scanf("%d", &d2);
                                        printf("\tInsira A22: ");
                                        scanf("%d", &e2);
                                        printf("\tInsira A23: ");
                                        scanf("%d", &f2);
                                        printf("\n\tInsira A31: ");
                                        scanf("%d", &g2);
                                        printf("\tInsira A32: ");
                                        scanf("%d", &h2);
                                        printf("\tInsira A33: ");
                                        scanf("%d", &i2);

                                        printf("\n\tA nova Matriz eh:\n");

                                        printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                        printf("\t%d", a * b2 + b * e2 + c * h2);
                                        printf("\t%d", a * c2 + b * f2 + c * i2);
                                        printf("\n\t");
                                    }
                                    else {
                                        if (n == 1 && m == 3 && n2 == 3 && m2 == 2) {
                                            printf("\n\tPrimeira matriz ");
                                            printf("\n\tInsira A11: ");
                                            scanf("%d", &a);
                                            printf("\tInsira A12: ");
                                            scanf("%d", &b);
                                            printf("\tInsira A13: ");
                                            scanf("%d", &c);

                                            printf("\n\tSegunda matriz ");
                                            printf("\n\tInsira A11: ");
                                            scanf("%d", &a2);
                                            printf("\tInsira A12: ");
                                            scanf("%d", &b2);
                                            printf("\n\tInsira A21: ");
                                            scanf("%d", &d2);
                                            printf("\tInsira A22: ");
                                            scanf("%d", &e2);
                                            printf("\n\tInsira A31: ");
                                            scanf("%d", &g2);
                                            printf("\tInsira A32: ");
                                            scanf("%d", &h2);

                                            printf("\n\tA nova Matriz eh:\n");

                                            printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                            printf("\t%d", a * b2 + b * e2 + c * h2);
                                            printf("\n\t");

                                        }
                                        else {
                                            if (n == 2 && m == 2 && n2 == 2 && m2 == 3) {
                                                printf("\n\tPrimeira matriz ");
                                                printf("\n\tInsira A11: ");
                                                scanf("%d", &a);
                                                printf("\tInsira A12: ");
                                                scanf("%d", &b);
                                                printf("\n\tInsira A21: ");
                                                scanf("%d", &d);
                                                printf("\tInsira A22: ");
                                                scanf("%d", &e);

                                                printf("\n\tSegunda matriz ");
                                                printf("\n\tInsira A11: ");
                                                scanf("%d", &a2);
                                                printf("\tInsira A12: ");
                                                scanf("%d", &b2);
                                                printf("\tInsira A13: ");
                                                scanf("%d", &c2);
                                                printf("\n\tInsira A21: ");
                                                scanf("%d", &d2);
                                                printf("\tInsira A22: ");
                                                scanf("%d", &e2);
                                                printf("\tInsira A23: ");
                                                scanf("%d", &f2);

                                                printf("\n\tA nova Matriz eh:\n");

                                                printf("\n\t%d", a * a2 + b * d2);
                                                printf("\t%d", a * b2 + b * e2);
                                                printf("\t%d", a * c2 + b * f2);
                                                printf("\n\t%d", d * a2 + e * d2);
                                                printf("\t%d", d * b2 + e * e2);
                                                printf("\t%d", d * c2 + e * f2);
                                                printf("\n\t");
                                            }
                                            else {
                                                if (n == 3 && m == 2 && n2 == 2 && m2 == 1) {

                                                    printf("\n\tPrimeira matriz ");
                                                    printf("\n\tInsira A11: ");
                                                    scanf("%d", &a);
                                                    printf("\tInsira A12: ");
                                                    scanf("%d", &b);
                                                    printf("\n\tInsira A21: ");
                                                    scanf("%d", &d);
                                                    printf("\tInsira A22: ");
                                                    scanf("%d", &e);
                                                    printf("\n\tInsira A31: ");
                                                    scanf("%d", &g);
                                                    printf("\tInsira A32: ");
                                                    scanf("%d", &h);

                                                    printf("\n\tSegunda matriz ");
                                                    printf("\n\tInsira A11: ");
                                                    scanf("%d", &a2);
                                                    printf("\tInsira A21: ");
                                                    scanf("%d", &d2);

                                                    printf("\n\tA nova Matriz eh:\n");

                                                    printf("\n\t%d", a * a2 + b * d2);
                                                    printf("\n\t%d", c * a2 + d * d2);
                                                    printf("\n\t%d", g * a2 + h * d2);


                                                    printf("\n\t");
                                                }
                                                else {
                                                    if (n == 2 && m == 1 && n2 == 1 && m2 == 2) {
                                                        printf("\n\tPrimeira matriz ");
                                                        printf("\n\tInsira A11: ");
                                                        scanf("%d", &a);
                                                        printf("\tInsira A21: ");
                                                        scanf("%d", &d);

                                                        printf("\n\tSegunda matriz ");
                                                        printf("\n\tInsira A11: ");
                                                        scanf("%d", &a2);
                                                        printf("\tInsira A12: ");
                                                        scanf("%d", &b2);

                                                        printf("\n\tA nova Matriz eh:\n");

                                                        printf("\n\t%d", a * a2);
                                                        printf("\t%d", a * b2);
                                                        printf("\n\t%d", d * a2);
                                                        printf("\t%d", d * b2);
                                                        printf("\n\t");
                                                    }
                                                    else {
                                                        if (n == 2 && m == 1 && n2 == 1 && m2 == 1) {
                                                            printf("\n\tPrimeira matriz ");
                                                            printf("\n\tInsira A11: ");
                                                            scanf("%d", &a);
                                                            printf("\tInsira A21: ");
                                                            scanf("%d", &d);

                                                            printf("\n\tSegunda matriz ");
                                                            printf("\n\tInsira A11: ");
                                                            scanf("%d", &a2);;

                                                            printf("\n\tA nova Matriz eh:\n");

                                                            printf("\n\t%d", a * a2);
                                                            printf("\t%d", d * a2);
                                                            printf("\n\t");
                                                        }
                                                        else {
                                                            if (n == 2 && m == 1 && n2 == 1 && m2 == 3) {
                                                                printf("\n\tPrimeira matriz ");
                                                                printf("\n\tInsira A11: ");
                                                                scanf("%d", &a);
                                                                printf("\n\tInsira A21: ");
                                                                scanf("%d", &d);

                                                                printf("\n\tSegunda matriz ");
                                                                printf("\n\tInsira A11: ");
                                                                scanf("%d", &a2);
                                                                printf("\tInsira A12: ");
                                                                scanf("%d", &b2);
                                                                printf("\tInsira A13: ");
                                                                scanf("%d", &c2);

                                                                printf("\n\tA nova Matriz eh:\n");

                                                                printf("\n\t%d", a * a2);
                                                                printf("\t%d", a * b2);
                                                                printf("\t%d", a * c2);
                                                                printf("\n\t%d", d * a2);
                                                                printf("\t%d", d * b2);
                                                                printf("\t%d", d * c2);
                                                                printf("\n\t");
                                                            }
                                                            else {
                                                                if (n == 2 && m == 2 && n2 == 2 && m2 == 1) {
                                                                    printf("\n\tPrimeira matriz ");
                                                                    printf("\n\tInsira A11: ");
                                                                    scanf("%d", &a);
                                                                    printf("\tInsira A12: ");
                                                                    scanf("%d", &b);
                                                                    printf("\n\tInsira A21: ");
                                                                    scanf("%d", &d);
                                                                    printf("\tInsira A22: ");
                                                                    scanf("%d", &e);

                                                                    printf("\n\tSegunda matriz ");
                                                                    printf("\n\tInsira A11: ");
                                                                    scanf("%d", &a2);
                                                                    printf("\n\tInsira A21: ");
                                                                    scanf("%d", &d2);

                                                                    printf("\n\tA nova Matriz eh:\n");

                                                                    printf("\n\t%d", a * a2 + b * d2);
                                                                    printf("\n\t%d", d * a2 + e * d2);
                                                                    printf("\n\t");
                                                                }
                                                                else {
                                                                    if (n == 2 && m == 3 && n2 == 3 && m2 == 1) {
                                                                        printf("\n\tPrimeira matriz ");
                                                                        printf("\n\tInsira A11: ");
                                                                        scanf("%d", &a);
                                                                        printf("\tInsira A12: ");
                                                                        scanf("%d", &b);
                                                                        printf("\tInsira A13: ");
                                                                        scanf("%d", &c);
                                                                        printf("\n\tInsira A21: ");
                                                                        scanf("%d", &d);
                                                                        printf("\tInsira A22: ");
                                                                        scanf("%d", &e);
                                                                        printf("\tInsira A23: ");
                                                                        scanf("%d", &f);

                                                                        printf("\n\tSegunda matriz ");
                                                                        printf("\n\tInsira A11: ");
                                                                        scanf("%d", &a2);
                                                                        printf("\n\tInsira A21: ");
                                                                        scanf("%d", &d2);
                                                                        printf("\n\tInsira A31: ");
                                                                        scanf("%d", &g2);

                                                                        printf("\n\tA nova Matriz eh:\n");

                                                                        printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                        printf("\n\t%d", c * a2 + d * d2 + f * g2);
                                                                        printf("\n\t");
                                                                    }
                                                                    else {
                                                                        if (n == 2 && m == 3 && n2 == 3 && m2 == 3) {
                                                                            printf("\n\tPrimeira matriz ");
                                                                            printf("\n\tInsira A11: ");
                                                                            scanf("%d", &a);
                                                                            printf("\tInsira A12: ");
                                                                            scanf("%d", &b);
                                                                            printf("\tInsira A13: ");
                                                                            scanf("%d", &c);
                                                                            printf("\n\tInsira A21: ");
                                                                            scanf("%d", &d);
                                                                            printf("\tInsira A22: ");
                                                                            scanf("%d", &e);
                                                                            printf("\tInsira A23: ");
                                                                            scanf("%d", &f);

                                                                            printf("\n\tSegunda matriz ");
                                                                            printf("\n\tInsira A11: ");
                                                                            scanf("%d", &a2);
                                                                            printf("\tInsira A12: ");
                                                                            scanf("%d", &b2);
                                                                            printf("\tInsira A13: ");
                                                                            scanf("%d", &c2);
                                                                            printf("\n\tInsira A21: ");
                                                                            scanf("%d", &d2);
                                                                            printf("\tInsira A22: ");
                                                                            scanf("%d", &e2);
                                                                            printf("\tInsira A23: ");
                                                                            scanf("%d", &f2);
                                                                            printf("\n\tInsira A31: ");
                                                                            scanf("%d", &g2);
                                                                            printf("\tInsira A32: ");
                                                                            scanf("%d", &h2);
                                                                            printf("\tInsira A33: ");
                                                                            scanf("%d", &i2);

                                                                            printf("\n\tA nova Matriz eh:\n");

                                                                            printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                            printf("\t%d", a * b2 + b * e2 + c * h2);
                                                                            printf("\t%d", a * c2 + b * f2 + c * i2);
                                                                            printf("\n\t%d", d * a2 + e * d2 + f * g2);
                                                                            printf("\t%d", d * b2 + e * e2 + f * h2);
                                                                            printf("\t%d", d * c2 + e * f2 + f * i2);
                                                                            printf("\n\t");
                                                                        }
                                                                        else {
                                                                            if (n == 3 && m == 3 && n2 == 3 && m2 == 2) {
                                                                                printf("\n\tPrimeira matriz ");
                                                                                printf("\n\tInsira A11: ");
                                                                                scanf("%d", &a);
                                                                                printf("\tInsira A12: ");
                                                                                scanf("%d", &b);
                                                                                printf("\tInsira A13: ");
                                                                                scanf("%d", &c);
                                                                                printf("\n\tInsira A21: ");
                                                                                scanf("%d", &d);
                                                                                printf("\tInsira A22: ");
                                                                                scanf("%d", &e);
                                                                                printf("\tInsira A23: ");
                                                                                scanf("%d", &f);
                                                                                printf("\n\tInsira A31: ");
                                                                                scanf("%d", &g);
                                                                                printf("\tInsira A32: ");
                                                                                scanf("%d", &h);
                                                                                printf("\tInsira A33: ");
                                                                                scanf("%d", &i);

                                                                                printf("\n\tSegunda matriz ");
                                                                                printf("\n\tInsira A11: ");
                                                                                scanf("%d", &a2);
                                                                                printf("\tInsira A12: ");
                                                                                scanf("%d", &b2);
                                                                                printf("\n\tInsira A21: ");
                                                                                scanf("%d", &d2);
                                                                                printf("\tInsira A22: ");
                                                                                scanf("%d", &e2);
                                                                                printf("\n\tInsira A31: ");
                                                                                scanf("%d", &g2);
                                                                                printf("\tInsira A32: ");
                                                                                scanf("%d", &h2);

                                                                                printf("\n\tA nova Matriz eh:\n");

                                                                                printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                                printf("\t%d", a * b2 + b * e2 + c * h2);
                                                                                printf("\n\t%d", d * a2 + e * d2 + f * g2);
                                                                                printf("\t%d", d * b2 + e * e2 + f * h2);
                                                                                printf("\n\t%d", g * a2 + h * d2 + i * g2);
                                                                                printf("\t%d", g * b2 + h * e2 + i * h2);
                                                                                printf("\n\t");
                                                                            }
                                                                            else {
                                                                                if (n == 3 && m == 3 && n2 == 3 && m2 == 1) {
                                                                                    printf("\n\tPrimeira matriz ");
                                                                                    printf("\n\tInsira A11: ");
                                                                                    scanf("%d", &a);
                                                                                    printf("\tInsira A12: ");
                                                                                    scanf("%d", &b);
                                                                                    printf("\tInsira A13: ");
                                                                                    scanf("%d", &c);
                                                                                    printf("\n\tInsira A21: ");
                                                                                    scanf("%d", &d);
                                                                                    printf("\tInsira A22: ");
                                                                                    scanf("%d", &e);
                                                                                    printf("\tInsira A23: ");
                                                                                    scanf("%d", &f);
                                                                                    printf("\n\tInsira A31: ");
                                                                                    scanf("%d", &g);
                                                                                    printf("\tInsira A32: ");
                                                                                    scanf("%d", &h);
                                                                                    printf("\tInsira A33: ");
                                                                                    scanf("%d", &i);

                                                                                    printf("\n\tSegunda matriz ");
                                                                                    printf("\n\tInsira A11: ");
                                                                                    scanf("%d", &a2);
                                                                                    printf("\n\tInsira A21: ");
                                                                                    scanf("%d", &d2);
                                                                                    printf("\n\tInsira A31: ");
                                                                                    scanf("%d", &g2);


                                                                                    printf("\n\tA nova Matriz eh:\n");

                                                                                    printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                                    printf("\n\t%d", d * a2 + e * d2 + f * g2);
                                                                                    printf("\n\t%d", g * a2 + h * d2 + i * g2);

                                                                                    printf("\n\t");


                                                                                }
                                                                                else {
                                                                                    if (n == 3 && m == 1 && n2 == 1 && m2 == 2) {
                                                                                        printf("\n\tPrimeira matriz ");
                                                                                        printf("\n\tInsira A11: ");
                                                                                        scanf("%d", &a);
                                                                                        printf("\n\tInsira A21: ");
                                                                                        scanf("%d", &d);
                                                                                        printf("\n\tInsira A31: ");
                                                                                        scanf("%d", &g);

                                                                                        printf("\n\tSegunda matriz ");
                                                                                        printf("\n\tInsira A11: ");
                                                                                        scanf("%d", &a2);
                                                                                        printf("\tInsira A12: ");
                                                                                        scanf("%d", &b2);

                                                                                        printf("\n\tA nova Matriz eh:\n");

                                                                                        printf("\n\t%d", a * a2);
                                                                                        printf("\t%d", a * b2);
                                                                                        printf("\n\t%d", d * a2);
                                                                                        printf("\t%d", d * b2);
                                                                                        printf("\n\t%d", g * a2);
                                                                                        printf("\t%d", g * b2);
                                                                                        printf("\n\t");
                                                                                    }
                                                                                    else {
                                                                                        if (n == 3 && m == 1 && n2 == 1 && m2 == 1) {
                                                                                            printf("\n\tPrimeira matriz ");
                                                                                            printf("\n\tInsira A11: ");
                                                                                            scanf("%d", &a);
                                                                                            printf("\n\tInsira A21: ");
                                                                                            scanf("%d", &d);
                                                                                            printf("\n\tInsira A31: ");
                                                                                            scanf("%d", &g);

                                                                                            printf("\n\tSegunda matriz ");
                                                                                            printf("\n\tInsira A11: ");
                                                                                            scanf("%d", &a2);

                                                                                            printf("\n\tA nova Matriz eh:\n");

                                                                                            printf("\n\t%d", a * a2);
                                                                                            printf("\n\t%d", d * a2);
                                                                                            printf("\n\t%d", g * a2);
                                                                                            printf("\n\t");
                                                                                        }
                                                                                        else {
                                                                                            if (n == 3 && m == 2 && n2 == 2 && m2 == 2) {
                                                                                                printf("\n\tPrimeira matriz ");
                                                                                                printf("\n\tInsira A11: ");
                                                                                                scanf("%d", &a);
                                                                                                printf("\tInsira A12: ");
                                                                                                scanf("%d", &b);
                                                                                                printf("\n\tInsira A21: ");
                                                                                                scanf("%d", &d);
                                                                                                printf("\tInsira A22: ");
                                                                                                scanf("%d", &e);
                                                                                                printf("\n\tInsira A31: ");
                                                                                                scanf("%d", &g);
                                                                                                printf("\tInsira A32: ");
                                                                                                scanf("%d", &h);

                                                                                                printf("\n\tSegunda matriz ");
                                                                                                printf("\n\tInsira A11: ");
                                                                                                scanf("%d", &a2);
                                                                                                printf("\tInsira A12: ");
                                                                                                scanf("%d", &b2);
                                                                                                printf("\n\tInsira A21: ");
                                                                                                scanf("%d", &d2);
                                                                                                printf("\tInsira A22: ");
                                                                                                scanf("%d", &e2);

                                                                                                printf("\n\tA nova Matriz eh:\n");

                                                                                                printf("\n\t%d", a * a2 + b * d2);
                                                                                                printf("\t%d", a * b2 + b * e2);
                                                                                                printf("\n\t%d", d * a2 + e * d2);
                                                                                                printf("\t%d", d * b2 + e * e2);
                                                                                                printf("\n\t%d", g * a2 + h * d2);
                                                                                                printf("\t%d", g * b2 + h * e2);
                                                                                                printf("\n\t");
                                                                                            }
                                                                                            else {
                                                                                                if (n == 1 && m == 3 && n2 == 3 && m2 == 1) {
                                                                                                    printf("\n\tPrimeira matriz ");
                                                                                                    printf("\n\tInsira A11: ");
                                                                                                    scanf("%d", &a);
                                                                                                    printf("\tInsira A12: ");
                                                                                                    scanf("%d", &b);
                                                                                                    printf("\tInsira A13: ");
                                                                                                    scanf("%d", &c);

                                                                                                    printf("\n\tSegunda matriz ");
                                                                                                    printf("\n\tInsira A11: ");
                                                                                                    scanf("%d", &a2);
                                                                                                    printf("\n\tInsira A21: ");
                                                                                                    scanf("%d", &d2);
                                                                                                    printf("\n\tInsira A31: ");
                                                                                                    scanf("%d", &g2);


                                                                                                    printf("\n\tA nova matriz eh %d", a * a2 + b * d2 + c * g2);
                                                                                                    printf("\n\t");

                                                                                                }
                                                                                                else {

                                                                                                    if (n == 3 && m == 1 && n2 == 1 && m2 == 3) {
                                                                                                        printf("\n\tPrimeira matriz ");
                                                                                                        printf("\n\tInsira A11: ");
                                                                                                        scanf("%d", &a);
                                                                                                        printf("\n\tInsira A21: ");
                                                                                                        scanf("%d", &d);
                                                                                                        printf("\n\tInsira A31: ");
                                                                                                        scanf("%d", &g);

                                                                                                        printf("\n\tSegunda matriz ");
                                                                                                        printf("\n\tInsira A11: ");
                                                                                                        scanf("%d", &a2);
                                                                                                        printf("\tInsira A12: ");
                                                                                                        scanf("%d", &b2);
                                                                                                        printf("\tInsira A13: ");
                                                                                                        scanf("%d", &c2);

                                                                                                        printf("\n\tA nova Matriz eh:\n");

                                                                                                        printf("\n\t%d", a * a2);
                                                                                                        printf("\t%d", a * b2);
                                                                                                        printf("\t%d", a * c2);
                                                                                                        printf("\n\t%d", d * a2);
                                                                                                        printf("\t%d", d * b2);
                                                                                                        printf("\t%d", d * c2);
                                                                                                        printf("\n\t%d", g * a2);
                                                                                                        printf("\t%d", g * b2);
                                                                                                        printf("\t%d", g * c2);
                                                                                                        printf("\n\t");
                                                                                                    }
                                                                                                    else {

                                                                                                        if (n == 2 && m == 2 && n2 == 2 && m2 == 2) {
                                                                                                            printf("\n\tPrimeira matriz ");
                                                                                                            printf("\n\tInsira A11: ");
                                                                                                            scanf("%d", &a);
                                                                                                            printf("\tInsira A12: ");
                                                                                                            scanf("%d", &b);
                                                                                                            printf("\n\tInsira A21: ");
                                                                                                            scanf("%d", &d);
                                                                                                            printf("\tInsira A22: ");
                                                                                                            scanf("%d", &e);

                                                                                                            printf("\n\tSegunda matriz ");
                                                                                                            printf("\n\tInsira A11: ");
                                                                                                            scanf("%d", &a2);
                                                                                                            printf("\tInsira A12: ");
                                                                                                            scanf("%d", &b2);
                                                                                                            printf("\n\tInsira A21: ");
                                                                                                            scanf("%d", &d2);
                                                                                                            printf("\tInsira A22: ");
                                                                                                            scanf("%d", &e2);

                                                                                                            printf("\n\tA nova Matriz eh:\n");

                                                                                                            printf("\n\t%d", a * a2 + b * d2);
                                                                                                            printf("\t%d", a * b2 + b * e2);
                                                                                                            printf("\n\t%d", d * a2 + e * d2);
                                                                                                            printf("\t%d", d * b2 + e * e2);
                                                                                                            printf("\n\t");
                                                                                                        }
                                                                                                        else {

                                                                                                            if (n == 2 && m == 3 && n2 == 3 && m2 == 2) {
                                                                                                                printf("\n\tPrimeira matriz ");
                                                                                                                printf("\n\tInsira A11: ");
                                                                                                                scanf("%d", &a);
                                                                                                                printf("\tInsira A12: ");
                                                                                                                scanf("%d", &b);
                                                                                                                printf("\tInsira A13: ");
                                                                                                                scanf("%d", &c);
                                                                                                                printf("\n\tInsira A21: ");
                                                                                                                scanf("%d", &d);
                                                                                                                printf("\tInsira A22: ");
                                                                                                                scanf("%d", &e);
                                                                                                                printf("\tInsira A23: ");
                                                                                                                scanf("%d", &f);

                                                                                                                printf("\n\tSegunda matriz ");
                                                                                                                printf("\n\tInsira A11: ");
                                                                                                                scanf("%d", &a2);
                                                                                                                printf("\tInsira A12: ");
                                                                                                                scanf("%d", &b2);
                                                                                                                printf("\n\tInsira A21: ");
                                                                                                                scanf("%d", &d2);
                                                                                                                printf("\tInsira A22: ");
                                                                                                                scanf("%d", &e2);
                                                                                                                printf("\n\tInsira A31: ");
                                                                                                                scanf("%d", &g2);
                                                                                                                printf("\tInsira A32: ");
                                                                                                                scanf("%d", &h2);

                                                                                                                printf("\n\tA nova Matriz eh:\n");

                                                                                                                printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                                                                printf("\t%d", a * b2 + b * e2 + c * h2);
                                                                                                                printf("\n\t%d", d * a2 + e * d2 + f * g2);
                                                                                                                printf("\t%d", d * b2 + e * e2 + f * h2);
                                                                                                                printf("\n\t");
                                                                                                            }
                                                                                                            else {

                                                                                                                if (n == 3 && m == 2 && n2 == 2 && m2 == 3) {
                                                                                                                    printf("\n\tPrimeira matriz ");
                                                                                                                    printf("\n\tInsira A11: ");
                                                                                                                    scanf("%d", &a);
                                                                                                                    printf("\tInsira A12: ");
                                                                                                                    scanf("%d", &b);
                                                                                                                    printf("\n\tInsira A21: ");
                                                                                                                    scanf("%d", &d);
                                                                                                                    printf("\tInsira A22: ");
                                                                                                                    scanf("%d", &e);
                                                                                                                    printf("\n\tInsira A31: ");
                                                                                                                    scanf("%d", &g);
                                                                                                                    printf("\tInsira A32: ");
                                                                                                                    scanf("%d", &h);

                                                                                                                    printf("\n\tSegunda matriz ");
                                                                                                                    printf("\n\tInsira A11: ");
                                                                                                                    scanf("%d", &a2);
                                                                                                                    printf("\tInsira A12: ");
                                                                                                                    scanf("%d", &b2);
                                                                                                                    printf("\tInsira A13: ");
                                                                                                                    scanf("%d", &c2);
                                                                                                                    printf("\n\tInsira A21: ");
                                                                                                                    scanf("%d", &d2);
                                                                                                                    printf("\tInsira A22: ");
                                                                                                                    scanf("%d", &e2);
                                                                                                                    printf("\tInsira A23: ");
                                                                                                                    scanf("%d", &f2);

                                                                                                                    printf("\n\tA nova Matriz eh:\n");

                                                                                                                    printf("\n\t%d", a * a2 + b * d2);
                                                                                                                    printf("\t%d", a * b2 + b * e2);
                                                                                                                    printf("\t%d", a * c2 + b * f2);
                                                                                                                    printf("\n\t%d", d * a2 + e * d2);
                                                                                                                    printf("\t%d", d * b2 + e * e2);
                                                                                                                    printf("\t%d", d * c2 + e * f2);
                                                                                                                    printf("\n\t%d", g * a2 + h * d2);
                                                                                                                    printf("\t%d", g * b2 + h * e2);
                                                                                                                    printf("\t%d", g * c2 + h * f2);
                                                                                                                    printf("\n\t");
                                                                                                                }
                                                                                                                else {

                                                                                                                    if (n == 3 && m == 3 && n2 == 3 && m2 == 3) {

                                                                                                                        printf("\n\tPrimeira matriz ");
                                                                                                                        printf("\n\tInsira A11: ");
                                                                                                                        scanf("%d", &a);
                                                                                                                        printf("\tInsira A12: ");
                                                                                                                        scanf("%d", &b);
                                                                                                                        printf("\tInsira A13: ");
                                                                                                                        scanf("%d", &c);
                                                                                                                        printf("\n\tInsira A21: ");
                                                                                                                        scanf("%d", &d);
                                                                                                                        printf("\tInsira A22: ");
                                                                                                                        scanf("%d", &e);
                                                                                                                        printf("\tInsira A23: ");
                                                                                                                        scanf("%d", &f);
                                                                                                                        printf("\n\tInsira A31: ");
                                                                                                                        scanf("%d", &g);
                                                                                                                        printf("\tInsira A32: ");
                                                                                                                        scanf("%d", &h);
                                                                                                                        printf("\tInsira A33: ");
                                                                                                                        scanf("%d", &i);

                                                                                                                        printf("\n\tSegunda matriz ");
                                                                                                                        printf("\n\tInsira A11: ");
                                                                                                                        scanf("%d", &a2);
                                                                                                                        printf("\tInsira A12: ");
                                                                                                                        scanf("%d", &b2);
                                                                                                                        printf("\tInsira A13: ");
                                                                                                                        scanf("%d", &c2);
                                                                                                                        printf("\n\tInsira A21: ");
                                                                                                                        scanf("%d", &d2);
                                                                                                                        printf("\tInsira A22: ");
                                                                                                                        scanf("%d", &e2);
                                                                                                                        printf("\tInsira A23: ");
                                                                                                                        scanf("%d", &f2);
                                                                                                                        printf("\n\tInsira A31: ");
                                                                                                                        scanf("%d", &g2);
                                                                                                                        printf("\tInsira A32: ");
                                                                                                                        scanf("%d", &h2);
                                                                                                                        printf("\tInsira A33: ");
                                                                                                                        scanf("%d", &i2);

                                                                                                                        printf("\n\t%d", a * a2 + b * d2 + c * g2);
                                                                                                                        printf("\t%d", a * b2 + b * e2 + c * h2);
                                                                                                                        printf("\t%d", a * c2 + b * f2 + c * i2);
                                                                                                                        printf("\n\t%d", d * a2 + e * d2 + f * g2);
                                                                                                                        printf("\t%d", d * b2 + e * e2 + f * h2);
                                                                                                                        printf("\t%d", d * c2 + e * f2 + f * i2);
                                                                                                                        printf("\n\t%d", g * a2 + h * d2 + i * g2);
                                                                                                                        printf("\t%d", g * b2 + h * e2 + i * h2);
                                                                                                                        printf("\t%d", g * c2 + h * f2 + i * i2);
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        printf("\n\tNao eh possivel multiplicar duas matrizes com essas ordens.\n");
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                
            }
        }
    }
            return 0;
}
                           
