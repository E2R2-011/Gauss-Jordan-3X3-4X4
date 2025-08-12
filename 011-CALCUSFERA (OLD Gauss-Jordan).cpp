#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float M_PI,a,angul,angul_ultim,areal,argu,b,bimag,c,cose,cose_imag_puro,grado,grados_divid,i,imag_puro,k,modulo,n,pi,r,rad,real_puro,seno,sin_imag_puro,t,t_divid,x,z,zareal,zbimag;
    float a1,a1g1,a1g2,a1g3,a1g4,a1g5,a2,a2g1,a2g2,a2g3,a2g4,a2g5,a3,a3g1,a3g2,a3g3,a3g4,a3g5,a4,a4g1,a4g2,a4g3,a4g4,a4g5,a5,a5g1,a5g2,a5g3,a5g4,a5g5;
	float b1,b1g1,b1g2,b1g3,b1g4,b1g5,b2,b2g1,b2g2,b2g3,b2g4,b2g5,b3,b3g1,b3g2,b3g3,b3g4,b3g5,b4,b4g1,b4g2,b4g3,b4g4,b4g5,b5,b5g1,b5g2,b5g3,b5g4,b5g5;
	float c1,c1g1,c1g2,c1g3,c1g4,c1g5,c2,c2g1,c2g2,c2g3,c2g4,c2g5,c3,c3g1,c3g2,c3g3,c3g4,c3g5,c4,c4g1,c4g2,c4g3,c4g4,c4g5,c5,c5g1,c5g2,c5g3,c5g4,c5g5;
	float d1,d1g1,d1g2,d1g3,d1g4,d1g5,d2,d2g1,d2g2,d2g3,d2g4,d2g5,d3,d3g1,d3g2,d3g3,d3g4,d3g5,d4,d4g1,d4g2,d4g3,d4g4,d4g5,d5,d5g1,d5g2,d5g3,d5g4,d5g5;
	float m,po,to;
	int option;
	long long int cuadrante,tipo,suma,num,fac,y,p,opcion;
    unsigned long long int q,w,u;
    cout << "  ________________________________________" << endl;
    cout << " |         === MENU DE OPCIONES ===       |" << endl;
    cout << " |                                        |" << endl;
    cout << " | (1) CONJETURA DE COLLATZ               |" << endl;
    cout << " | (2) FACTORIAL                          |" << endl;
    cout << " | (3) GAUSS-JORDAN 2X2                   |" << endl;
    cout << " | (4) GAUSS-JORDAN 3X3                   |" << endl;
    cout << " | (5) GAUSS-JORDAN 4X4                   |" << endl;
    cout << " | (6) PROMEDIO                           |" << endl;
    cout << " | (7) TEOREMA DE MOIVRE (a + bi)^(1/n)   |" << endl;
    cout << " | (8) TEOREMA DE MOIVRE (a + bi)^(n)     |" << endl;
    cout << " | (9) TEOREMA DEL BINOMIO GENERALIZADO   |" << endl;
    cout << " |________________________________________|" << endl;
    cout << "" << endl;
    cout << " Ingrese una opcion: ";
    cin >> option;
    cout << "" << endl;
    M_PI = 3.1415926535897932384626433832;
    switch (option) {
    case 1:
            cout << " " << endl;
            cout << "=========== CONJETURA DE COLLATZ ==========" << endl;
            cout << " " << endl;
            cout << "   Ingrese el numero inicial: ";
            cin >> u;
            cout << " " << endl;
            q = 1;
            do {
                while (u>1) {
                    if (u%2!=0) {
                        w = (3*u)+1;
                    } else {
                        w = u/2;
                    }
                    u = w;
            cout << "         Paso " << q << ": " << u << endl;
                    q = q + 1;
                }
            }
            while (u!=1);
        break;
    case 2:
            cout << "================ FACTORIAL ================" << endl;
            cout << "" << endl;
            cout << " Ingrese el numero: ";
            cin >> num;
            cout << "" << endl;
            if (num > 0) {
            x = 1;
            for (i=1;i<=num;i++) {
                x = x*i;
            }
            cout << "  " << num << "! = " << x << endl;
            }
        break;
    case 3:
            cout << "============ GAUSS-JORDAN 2X2 =============" << endl;
            cout << "" << endl;
            cout << "     Coloque los datos de la matriz" << endl;
            cout << " " << endl;
            cout << "             | A1 | A2 | A3 |" << endl;
            cout << "             | B1 | B2 | B3 |" << endl;
            cout << "" << endl;
            cout << "                A1: ";
            cin >> a1;
            cout << "                A2: ";
            cin >> a2;
            cout << "                A3: ";
            cin >> a3;
            cout << " " << endl;
            cout << "                B1: ";
            cin >> b1;
            cout << "                B2: ";
            cin >> b2;
            cout << "                B3: ";
            cin >> b3;
            a1g1 = a1/a1;
            a2g1 = a2/a1;
            a3g1 = a3/a1;
            b1g1 = b1-(a1g1*b1);
            b2g1 = b2-(a2g1*b1);
            b3g1 = b3-(a3g1*b1);
            b1g2 = b1g1/b2g1;
            b2g2 = b2g1/b2g1;
            b3g2 = b3g1/b2g1;
            a1g2 = a1g1-(a2g1*b1g2);
            a2g2 = a2g1-(a2g1*b2g2);
            a3g2 = a3g1-(a2g1*b3g2);
            cout << " " << endl;
            cout << "              Matriz resuelta: " << endl;
            cout << " " << endl;
            cout << "             | 1 | 0 | " << a3g2 << " |" << endl;
            cout << "             | 0 | 1 | " << b3g2 << " |" << endl;
        break;
    case 4:
            cout << "============ GAUSS-JORDAN 3X3 =============" << endl;
            cout << " " << endl;
            cout << "     Coloque los datos de la matriz" << endl;
            cout << " " << endl;
            cout << "          | A1 | A2 | A3 | A4 |" << endl;
            cout << "          | B1 | B2 | B3 | B4 |" << endl;
            cout << "          | C1 | C2 | C3 | C4 |" << endl;
            cout << " " << endl;
            cout << "                A1: ";
            cin >> a1;
            cout << "                A2: ";
            cin >> a2;
            cout << "                A3: ";
            cin >> a3;
            cout << "                A4: ";
            cin >> a4;
            cout << " " << endl;
            cout << "                B1: ";
            cin >> b1;
            cout << "                B2: ";
            cin >> b2;
            cout << "                B3: ";
            cin >> b3;
            cout << "                B4: ";
            cin >> b4;
            cout << " " << endl;
            cout << "                C1: ";
            cin >> c1;
            cout << "                C2: ";
            cin >> c2;
            cout << "                C3: ";
            cin >> c3;
            cout << "                C4: ";
            cin >> c4;
            a1g1 = a1/a1;
            a2g1 = a2/a1;
            a3g1 = a3/a1;
            a4g1 = a4/a1;
            b1g1 = b1-(b1*a1g1);
            b2g1 = b2-(b1*a2g1);
            b3g1 = b3-(b1*a3g1);
            b4g1 = b4-(b1*a4g1);
            c1g1 = c1-(c1*a1g1);
            c2g1 = c2-(c1*a2g1);
            c3g1 = c3-(c1*a3g1);
            c4g1 = c4-(c1*a4g1);
            b1g2 = b1g1/b2g1;
            b2g2 = b2g1/b2g1;
            b3g2 = b3g1/b2g1;
            b4g2 = b4g1/b2g1;
            c1g2 = c1g1-(b1g2*c2g1);
            c2g2 = c2g1-(b2g2*c2g1);
            c3g2 = c3g1-(b3g2*c2g1);
            c4g2 = c4g1-(b4g2*c2g1);
            c1g3 = c1g2/c3g2;
            c2g3 = c2g2/c3g2;
            c3g3 = c3g2/c3g2;
            c4g3 = c4g2/c3g2;
            a1g2 = a1g1-(a3g1*c1g3);
            a2g2 = a2g1-(a3g1*c2g3);
            a3g2 = a3g1-(a3g1*c3g3);
            a4g2 = a4g1-(a3g1*c4g3);
            b1g2 = b1g1-(b3g1*c1g3);
            b2g2 = b2g1-(b3g1*c2g3);
            b3g2 = b3g1-(b3g1*c3g3);
            b4g2 = b4g1-(b3g1*c4g3);
            b1g3 = b1g2/b2g2;
            b2g3 = b2g2/b2g2;
            b3g3 = b3g2/b2g2;
            b4g3 = b4g2/b2g2;
            a1g3 = a1g2-(a2g2*b1g3);
            a2g3 = a2g2-(a2g2*b2g3);
            a3g3 = a3g2-(a2g2*b3g3);
            a4g3 = a4g2-(a2g2*b4g3);
            cout << " " << endl;
            cout << "             Matriz resuelta: " << endl;
            cout << " " << endl;
            cout << "            | 1 | 0 | 0 | " << a4g3 << " |" << endl;
            cout << "            | 0 | 1 | 0 | " << b4g3 << " |" << endl;
            cout << "            | 0 | 0 | 1 | " << c4g3 << " |" << endl;
        break;
    case 5:
            cout << "============ GAUSS-JORDAN 4X4 =============" << endl;
            cout << "" << endl;
            cout << "     Coloque los datos de la matriz" << endl;
            cout << " " << endl;
            cout << "       | A1 | A2 | A3 | A4 | A5 |" << endl;
            cout << "       | B1 | B2 | B3 | B4 | B5 |" << endl;
            cout << "       | C1 | C2 | C3 | C4 | C5 |" << endl;
            cout << "       | D1 | D2 | D3 | D4 | D5 |" << endl;
            cout << "" << endl;
            cout << "                A1: ";
            cin >> a1;
            cout << "                A2: ";
            cin >> a2;
            cout << "                A3: ";
            cin >> a3;
            cout << "                A4: ";
            cin >> a4;
            cout << "                A5: ";
            cin >> a5;
            cout << " " << endl;
            cout << "                B1: ";
            cin >> b1;
            cout << "                B2: ";
            cin >> b2;
            cout << "                B3: ";
            cin >> b3;
            cout << "                B4: ";
            cin >> b4;
            cout << "                B5: ";
            cin >> b5;
            cout << " " << endl;
            cout << "                C1: ";
            cin >> c1;
            cout << "                C2: ";
            cin >> c2;
            cout << "                C3: ";
            cin >> c3;
            cout << "                C4: ";
            cin >> c4;
            cout << "                C5: ";
            cin >> c5;
            cout << " " << endl;
            cout << "                D1: ";
            cin >> d1;
            cout << "                D2: ";
            cin >> d2;
            cout << "                D3: ";
            cin >> d3;
            cout << "                D4: ";
            cin >> d4;
            cout << "                D5: ";
            cin >> d5;
            cout << " " << endl;
            a1g1 = a1/a1;
            a2g1 = a2/a1;
            a3g1 = a3/a1;
            a4g1 = a4/a1;
            a5g1 = a5/a1;
            b1g1 = b1-(b1*a1g1);
            b2g1 = b2-(b1*a2g1);
            b3g1 = b3-(b1*a3g1);
            b4g1 = b4-(b1*a4g1);
            b5g1 = b5-(b1*a5g1);
            c1g1 = c1-(c1*a1g1);
            c2g1 = c2-(c1*a2g1);
            c3g1 = c3-(c1*a3g1);
            c4g1 = c4-(c1*a4g1);
            c5g1 = c5-(c1*a5g1);
            d1g1 = d1-(d1*a1g1);
            d2g1 = d2-(d1*a2g1);
            d3g1 = d3-(d1*a3g1);
            d4g1 = d4-(d1*a4g1);
            d5g1 = d5-(d1*a5g1);
            b1g2 = b1g1/b2g1;
            b2g2 = b2g1/b2g1;
            b3g2 = b3g1/b2g1;
            b4g2 = b4g1/b2g1;
            b5g2 = b5g1/b2g1;
            c1g2 = c1g1-(c1g1*b1g2);
            c2g2 = c2g1-(c2g1*b1g2);
            c3g2 = c3g1-(c3g1*b1g2);
            c4g2 = c4g1-(c4g1*b1g2);
            c5g2 = c5g1-(c5g1*b1g2);
            d1g2 = d1g1-(d1g1*b1g2);
            d2g2 = d2g1-(d2g1*b1g2);
            d3g2 = d3g1-(d3g1*b1g2);
            d4g2 = d4g1-(d4g1*b1g2);
            d5g2 = d5g1-(d5g1*b1g2);
            c1g3 = c1g2-(c2g2*b1g2);
            c2g3 = c2g2-(c2g2*b2g2);
            c3g3 = c3g2-(c2g2*b3g2);
            c4g3 = c4g2-(c2g2*b4g2);
            c5g3 = c5g2-(c2g2*b5g2);
            d1g3 = d1g2-(d2g1*b1g2);
            d2g3 = d2g2-(d2g1*b2g2);
            d3g3 = d3g2-(d2g1*b3g2);
            d4g3 = d4g2-(d2g1*b4g2);
            d5g3 = d5g2-(d2g1*b5g2);
            c1g4 = c1g3/c3g3;
            c2g4 = c2g3/c3g3;
            c3g4 = c3g3/c3g3;
            c4g4 = c4g3/c3g3;
            c5g4 = c5g3/c3g3;
            d1g4 = d1g3-(d3g3*c1g4);
            d2g4 = d2g3-(d3g3*c2g4);
            d3g4 = d3g3-(d3g3*c3g4);
            d4g4 = d4g3-(d3g3*c4g4);
            d5g4 = d5g3-(d3g3*c5g4);
            d1g5 = d1g4/d4g4;
            d2g5 = d2g4/d4g4;
            d3g5 = d3g4/d4g4;
            d4g5 = d4g4/d4g4;
            d5g5 = d5g4/d4g4;
            a1g2 = a1g1-(a4g1*d1g5);
            a2g2 = a2g1-(a4g1*d2g5);
            a3g2 = a3g1-(a4g1*d3g5);
            a4g2 = a4g1-(a4g1*d4g5);
            a5g2 = a5g1-(a4g1*d5g5);
            b1g3 = b1g2-(b4g2*d1g5);
            b2g3 = b2g2-(b4g2*d2g5);
            b3g3 = b3g2-(b4g2*d3g5);
            b4g3 = b4g2-(b4g2*d4g5);
            b5g3 = b5g2-(b4g2*d5g5);
            c1g5 = c1g4-(c4g4*d1g5);
            c2g5 = c2g4-(c4g4*d2g5);
            c3g5 = c3g4-(c4g4*d3g5);
            c4g5 = c4g4-(c4g4*d4g5);
            c5g5 = c5g4-(c4g4*d5g5);
            a1g3 = a1g2-(a3g2*c1g5);
            a2g3 = a2g2-(a3g2*c2g5);
            a3g3 = a3g2-(a3g2*c3g5);
            a4g3 = a4g2-(a3g2*c4g5);
            a5g3 = a5g2-(a3g2*c5g5);
            b1g4 = b1g3-(b3g3*c1g5);
            b2g4 = b2g3-(b3g3*c2g5);
            b3g4 = b3g3-(b3g3*c3g5);
            b4g4 = b4g3-(b3g3*c4g5);
            b5g4 = b5g3-(b3g3*c5g5);
            a1g4 = a1g3-(a2g3*b1g4);
            a2g4 = a2g3-(a2g3*b2g4);
            a3g4 = a3g3-(a2g3*b3g4);
            a4g4 = a4g3-(a2g3*b4g4);
            a5g4 = a5g3-(a2g3*b5g4);
            cout << "             Matriz resuelta: " << endl;
            cout << " " << endl;
            cout << "         | 1 | 0 | 0 | 0 | " << a5g4 << " |" << endl;
            cout << "         | 0 | 1 | 0 | 0 | " << b5g4 << " |" << endl;
            cout << "         | 0 | 0 | 1 | 0 | " << c5g5 << " |" << endl;
            cout << "         | 0 | 0 | 0 | 1 | " << d5g5 << " |" << endl;
        break;
    case 6:
            cout << "" << endl;
            cout << "================= PROMEDIO ================" << endl;
            cout << "" << endl;
            cout << "   Ponga un numero negativo para salir " << endl;
            cout << "" << endl;
            po = 1;
            to = 0;
            do {
            cout << "   Ingrese el numero " << po << " : ";
            cin >> m;
            if (m >= 0){
            to = to + m;
            po = po + 1;
            }
            cout << " " << endl;
            } while (m >= 0);
            cout << "   El promedio es: " << to/(po-1) << endl;
        break;
    case 7:
            cout << "" << endl;
            cout << "===== CALCULADORA DE NUMEROS COMPLEJOS ====" << endl;
            cout << "============= TIPO (a+bi)^(1/n) ===========" << endl;
            cout << "" << endl;
            cout << "   Ingrese el valor real (a): ";
            cin >> a;
            cout << "" << endl;
            cout << "   Ingrese el valor imaginario (bi): ";
            cin >> b;
            cout << "" << endl;
            cout << "   Ingrese el denominador la potencia (n): ";
            cin >> n;
            cout << "" << endl;
            cout << "" << endl;
            z = 0;
            x = 1;
            // Cuadrantes
            if ((a>0) && (b>0)) {
                cuadrante = 1;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a<0) && (b>0)) {
                cuadrante = 2;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a<0) && (b<0)) {
                cuadrante = 3;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a>0) && (b<0)) {
                cuadrante = 4;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a==0) && (b>0)) {
                cuadrante = 90;
            }
            if ((a==0) && (b<0)) {
                cuadrante = 270;
            }
            if ((a>0) && (b==0)) {
                cuadrante = 0;
            }
            if ((a<0) && (b==0)) {
                cuadrante = 180;
            }
            // Cuadrante Complejo
            if ((cuadrante==1) || (cuadrante==2) || (cuadrante==3) || (cuadrante==4)) {
                r = pow(((pow(a,2))+(pow(b,2))),(.5));
                angul = atan(b/a);
                argu = angul*180/M_PI;
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: " << argu << " grados" << endl;
                grado = n*argu;
                modulo = pow(r,(1/n));
            }
            switch (cuadrante) {
            case 0:
                r = a;
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: 0 grados" << endl;
                modulo = pow(r,(1/n));
                t_divid = 360/n;
                cout << "   La forma polar es: " << modulo << "[cis(" << t_divid << "*k)]" << endl;
                for (i=0;i<=n-1;i++) {
                    cout << " " << endl;
                    cout << "     para k = " << z << endl;
                    angul_ultim = t_divid*z;
                    cout << "     z" << z << " = " << modulo << "[cis(" << angul_ultim*z << ")]" << endl;
                    c = z+1;
                    x = c;
                    z = x;
                    rad = (angul_ultim*M_PI)/180;
                    cose = cos(rad);
                    seno = sin(rad);
                    areal = (modulo)*cose;
                    bimag = (modulo)*seno;
                    cout << "     z" << z-1 << " = " << areal << " + " << bimag << "i" << endl;
                }
                break;
            case 180:
                r = pow((pow(a,2)),(.5));
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: " << cuadrante << " grados" << endl;
                modulo = pow(r,(1/n));
                grados_divid = 360/n;
                t_divid = 180/n;
                cout << "   La forma polar es: " << modulo << "[cis(" << t_divid << " + " << grados_divid << "*k)]" << endl;
                for (i=0;i<=n-1;i++) {
                    cout << " " << endl;
                    cout << "     para k = " << z << endl;
                    angul_ultim = t_divid+(grados_divid*z);
                    cout << "     z" << z << " = " << modulo << "[cis(" << angul_ultim << ")]" << endl;
                    c = z+1;
                    x = c;
                    z = x;
                    rad = (angul_ultim*M_PI)/180;
                    cose = cos(rad);
                    seno = sin(rad);
                    areal = (modulo)*cose;
                    bimag = (modulo)*seno;
                    cout << "     z" << z-1 << "= " << areal << " + " << bimag << "i" << endl;
                }
                break;
            case 90:
                r = pow((pow(b,2)),(.5));
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: " << cuadrante << " grados" << endl;
                modulo = pow(r,(1/n));
                grados_divid = 360/n;
                t_divid = 90/n;
                cout << "   La forma polar es: " << modulo << "[cis(" << t_divid << " + " << grados_divid << "*k)]" << endl;
                for (i=0;i<=n-1;i++) {
                    cout << " " << endl;
                    cout << "     para k = " << z << endl;
                    angul_ultim = t_divid+(grados_divid*z);
                    cout << "     z" << z << " = " << modulo << "[cis(" << angul_ultim << ")]" << endl;
                    c = z+1;
                    x = c;
                    z = x;
                    rad = (angul_ultim*M_PI)/180;
                    cose = cos(rad);
                    seno = sin(rad);
                    areal = (modulo)*cose;
                    bimag = (modulo)*seno;
                    cout << "     z" << z-1 << "= " << areal << " + " << bimag << "i" << endl;
                }
                break;
            case 270:
                r = pow((pow(b,2)),(.5));
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: " << cuadrante << " grados" << endl;
                modulo = pow(r,(1/n));
                grados_divid = 360/n;
                t_divid = 270/n;
                cout << "   La forma polar es: " << modulo << "[cis(" << t_divid << " + " << grados_divid << "*k)]" << endl;
                for (i=0;i<=n-1;i++) {
                    cout << " " << endl;
                    cout << "     para k = " << z << endl;
                    angul_ultim = t_divid+(grados_divid*z);
                    cout << "     z" << z << " = " << modulo << "[cis(" << angul_ultim << ")]" << endl;
                    c = z+1;
                    x = c;
                    z = x;
                    rad = (angul_ultim*M_PI)/180;
                    cose = cos(rad);
                    seno = sin(rad);
                    areal = (modulo)*cose;
                    bimag = (modulo)*seno;
                    cout << "     z" << z-1 << "= " << areal << " + " << bimag << "i" << endl;
                }
                break;
            case 1:
                t = argu;
                break;
            case 2: case 3:
                t = argu+180;
                break;
            case 4:
                t = argu+360;
                break;
            }
            // Proceso de Número Complejo
            if ((cuadrante==1) || (cuadrante==2) || (cuadrante==3) || (cuadrante==4)) {
                t_divid = t/n;
                grados_divid = 360/n;
                cout << "   La forma polar es: " << modulo << "[cis(" << t_divid << " + " << grados_divid << "*k)]" << endl;
                for (i=0;i<=n-1;i++) {
                    cout << " " << endl;
                    cout << "     para k = " << z << endl;
                    angul_ultim = t_divid+(grados_divid*z);
                    cout << "     z" << z << " = " << modulo << "[cis(" << angul_ultim << ")]" << endl;
                    c = z+1;
                    x = c;
                    z = x;
                    rad = (angul_ultim*M_PI)/180;
                    cose = cos(rad);
                    seno = sin(rad);
                    areal = (modulo)*cose;
                    bimag = (modulo)*seno;
                    cout << "     z" << z-1 << " = " << areal << " + " << bimag << "i" << endl;
                }
            }
        break;
    case 8:
            cout << " " << endl;
            cout << "===== CALCULADORA DE NUMEROS COMPLEJOS ====" << endl;
            cout << "============== TIPO (a+bi)^n ==============" << endl;
            cout << " " << endl;
            cout << "   Ingrese el valor real (a): ";
            cin >> a;
            cout << "" << endl;
            cout << "   Ingrese el valor imaginario (bi): ";
            cin >> b;
            cout << "" << endl;
            cout << "   Ingrese la potencia (n): ";
            cin >> n;
            cout << "" << endl;
            cout << "" << endl;
            // Cuadrante
            if ((a>0) && (b>0)) {
                cuadrante = 1;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a<0) && (b>0)) {
                cuadrante = 2;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a<0) && (b<0)) {
                cuadrante = 3;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((a>0) && (b<0)) {
                cuadrante = 4;
                cout << "   El cuadrante es: " << cuadrante << endl;
            }
            if ((b==0) && (a>0)) {
                cuadrante = 0;
                cout << "   El angulo es: " << cuadrante << endl;
            }
            if ((b==0) && (a<0)) {
                cuadrante = 180;
                cout << "   El angulo es: " << cuadrante << endl;
            }
            if ((a==0) && (b>0)) {
                cuadrante = 90;
                cout << "   El angulo es: " << cuadrante << endl;
            }
            if ((a==0) && (b<0)) {
                cuadrante = 270;
                cout << "   El angulo es: " << cuadrante << endl;
            }
            // Real puro
            if ((b==0)) {
                real_puro = pow(a,n);
                cout << "   La forma rectangular es: " << real_puro << " + 0i" << endl;
            }
            // Imaginario puro
            switch (cuadrante) {
            case 90:
                r = pow((pow(b,2)),(.5));
                imag_puro = (pow(r,n));
                grado = n*cuadrante;
                rad = (grado*M_PI)/180;
                cose = cos(rad);
                seno = sin(rad);
                cose_imag_puro = (imag_puro)*cose;
                sin_imag_puro = (imag_puro)*seno;
                cout << "   La forma polar es: " << imag_puro << "[cis(" << grado << ")]" << endl;
                cout << "   La forma rectangular es: " << cose_imag_puro << " + " << sin_imag_puro << "i" << endl;
                break;
            case 270:
                r = pow((pow(b,2)),(.5));
                imag_puro = (pow(r,n));
                grado = n*cuadrante;
                rad = (grado*M_PI)/180;
                cose = cos(rad);
                seno = sin(rad);
                cose_imag_puro = (imag_puro)*cose;
                sin_imag_puro = (imag_puro)*seno;
                cout << "   La forma polar es: " << imag_puro << "[cis(" << grado << ")]" << endl;
                cout << "   La forma rectangular es: " << cose_imag_puro << " + " << sin_imag_puro << "i" << endl;
                break;
            }
            // Proceso
            if (((a>0) && (b>0)) || ((a<0) && (b<0)) || ((a<0) && (b>0)) || ((a>0) && (b<0))) {
                r = pow(((pow(a,2))+(pow(b,2))),(.5));
                angul = atan(b/a);
                argu = angul*180/M_PI;
                cout << "   El Modulo (r) vale: " << r << endl;
                cout << "   El Angulo vale: " << argu << " grados" << endl;
                grado = n*argu;
                modulo = pow(r,n);
            }
            switch (cuadrante) {
            case 1:
                t = grado;
                break;
            case 2: case 3:
                t = grado+180;
                break;
            case 4:
                t = grado+360;
                break;
            case 0: case 180: case 270:
                t = 0;
                break;
            case 90:
                t = 90;
                break;
            }
            if (((a>0) && (b>0)) || ((a<0) && (b<0)) || ((a<0) && (b>0)) || ((a>0) && (b<0))) {
                rad = (t*M_PI)/180;
                cose = cos(rad);
                seno = sin(rad);
                areal = (pow(r,n))*cose;
                bimag = (pow(r,n))*seno;
                cout << "   La forma polar es: " << modulo << "[cis(" << t << ")]" << endl;
            }
            // Número complejo
            switch (cuadrante) {
            case 2: case 3:
                zareal = areal;
                zbimag = bimag;
                cout << "   La forma rectangular es: " << zareal << " + " << zbimag << "i" << endl;
                break;
            case 1: case 4:
                zareal = areal;
                zbimag = bimag;
                cout << "   La forma rectangular es: " << zareal << " + " << zbimag << "i" << endl;
                break;
            }
        break;
    case 9:
          cout << "=TEOREMA DEL BINOMIO DE NEWTON GENERALIZADO=" << endl;
          cout << "=========== DEL TIPO: (ax + b)^n ==========="<< endl;
          cout << " " << endl;
          cout << " Ingrese el valor de x (a): ";
          cin >> a;
          cout << " " << endl;
          cout << " Ingrese el valor independiente (b): ";
          cin >> b;
          cout << " " << endl;
          cout << " Ingrese la potencia (n): ";
          cin >> n;
          cout << " " << endl;
          cout << " " << endl;
            r = 2;
            cout << "   Resultado: " << pow(a,n) << "(x^" << n << ") + " << n*(pow(a,n-1)*b) << "(x^" << n-1 <<")";
            x = n*(n-1);
            i = 2;
            while (x != 0) {
                fac = 1;
                p = p - 1;
                for (z = 1; z <= i;z++) {
                fac = fac * z;
                }
                cout << " + " << (x/fac)*(pow(a,n-r)*pow(b,r)) << "(x^" << n - r << ")";
                x = x*(n - i);
                i = i + 1;
                r = r + 1;
            }
            cout << " " << endl;
        break;
    }
    cout << " " << endl;
    cout << "===========================================" << endl;
	return 0;
}
