#include <iostream>
#include <string>
using namespace std;

int main(){
    //PROGRAM TO ADD TWO MATRICES
    cout << "Enter a:";
    int a;
    cin >> a;

    cout << "Enter b:";
    int b;
    cin >> b;

    cout << "Enter c:";
    int c;
    cin >> c;

    cout << "Enter d:";
    int d;
    cin >> d;

    cout << "Enter e:";
    int e;
    cin >> e;

    cout << "Enter f:";
    int f;
    cin >> f;

    cout << "Enter g:";
    int g;
    cin >> g;

    cout << "Enter h:";
    int h;
    cin >> h;

    cout << "Enter i:";
    int i;
    cin >> i ;
    cout << '\n' << endl;

    cout << "Enter A:";
    int A;
    cin >> A;

    cout << "Enter B:";
    int B;
    cin >> B;
    
    cout << "Enter C:";
    int C;
    cin >> C;

    cout << "Enter D:";
    int D;
    cin >> D;

    cout << "Enter E:";
    int E;
    cin >> E;

    cout << "Enter F:";
    int F;
    cin >> F;    
    
    cout << "Enter G:";
    int G;
    cin >> G;
        
    cout << "Enter H:";
    int H;
    cin >> H;
       
    cout << "Enter I:";
    int I;
    cin >> I >> endl;


    int matrice_a[3][3]={a,b,c,d,e,f,g,h,i};
    int matrice_b[3][3] = {A,B,C,D,E,F,G,H,I};

    int matrice_c[3][3] = {(a+A), (b+B), (c + C), 
    (d + D),(e + E), (f + F), (g + G), (h + H),(i + I)};

    cout << a + A << "  "  <<  b + B << "  "   <<  c + C << endl;
    cout << d+ D << "  "    << e + E << "  "    <<f + F << endl;
    cout << g + G << "  "     <<h + H << "  "    <<i + I << endl;




    return 0;
}