#include <iostream>
#include <stdio.h>

#include <stdlib.h>

#include<time.h>

using namespace std;
int main(){
    int ran;
    int a2,b2;
    int a3, num3 = 0;
    bool gar = false;

    cout<<" ";
    srand(time(0));
    for(int i = 1;i<=7;i++){
        cout<<" "<<i;
    }
    cout<<endl;
    for(int i = 1;i<=7;i++){
        cout<<i<< " ";
        for(int a = 0;a<7;a++){
            if(gar ==true){
                cout<<0<<" ";
                gar = false;
            }
            else{
                ran = 1+(rand()%3);
                if(a2 == a){
                    cout << 2;
                    a2 = NULL;
                    gar = true;
                }
                if(b2 == a){
                    cout << 2;
                    b2 = NULL;
                    gar = true;
                }
                if(a3 == a){
                    if(num3 <= 3){
                        cout<<3;
                        num3 +=1;
                        gar = true;
                    }
                    else{
                        a3 = NULL;
                    }

                }
                if(a2 != a and b2 != a and a3 != a){
                    if(ran == 1){
                        cout<<1<<" ";//создает корабль с одним блоком
                        gar = true;
                    }
                    if(ran == 2){

                        cout<<2<<" ";//создает корабль с двумя блоками
                        a2 = a;
                        gar = true;
                    }
                    if(ran == 3){
                        cout<<3<<" ";
                        a3 = a;//создавет корабль с тремя блоками
                        num3 += 1;
                        gar = true;
                    }
                }
            }
            
        }
        cout<<endl;
        
    }

}