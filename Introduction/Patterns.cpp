#include <iostream>
using namespace std;
/*
pattern 1

****
 ***
  **
   * 
*/
int main(){                             
    int n;                              
    cin >> n;                           
                                        
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i-1){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= n -i + 1){
            cout << "*" ;
            k = k +1;
        }
        i = i +1;
        cout << endl;
    }
}

/*
pattern 2

1111
 222
  33
   4
*/
int main(){
    int n ;
    cin >> n;

    int i = 1;
    while( i <= n){
        int j = 1;
        while(j <= i -1){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= n - i + 1){
            cout << i ;
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
pattern 3

    1
   22
  333
 4444
55555
*/
int main(){
    int n ;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while (j <= n -i){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= i){
            cout << i;
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
pattern 4

1234
 234
  34
   4
*/
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
        int j = 1;
        while(j <= i-1){
            cout << " ";
            j = j + 1;
        }
        int k=1;
        while(k <= n-i+1){
            cout << k;
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
pattern 5

      1
    2 3
  4 5 6
7 8 9 10  
*/
int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n-i){
            cout << " ";
            j = j+1;
        }
        int k =1;
        while(k <= i){
            cout << count;
            k = k + 1;
            count = count + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
pattern 6

   1
  121
 12321
1234321
*/
int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n-i){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= i){
            cout << k;
            if (k == i){
                while(k >= 2){
                    cout << k-1;
                    k = k -1;
                }
                break;
            }
            k = k + 1;
        }
        i = i + 1;
        cout << endl;
    }

}

/*
pattern 7

1234554321
1234**4321
123****321
12******21
1********1
*/

int main(){
    int n;
    cin >> n;

    int i = 1;
    while( i <= n){
        int j = 1;
        while(j <= n-i+1){
            cout << j;
            j = j + 1;
        }
        int k = 1;
        while(k <= i-1){
            cout << "*";
            k = k + 1;
        }
        int m = 1;
        while(m <= i -1){
            cout << "*";
            m = m + 1;
        }
        int p = n-i+1;
        while(p > 0){
            cout << p;
            p = p -1;
        }
        i = i + 1;
        cout << endl;
    }
}