#include <iostream>



using namespace std;

int main(){
    int GE1;
    int GE2;
   
    

    cout<<"Ingrese los goles del equipo1 "<<endl;
    cin>>GE1;
    cout<<"Ingrese los goles del equipo2"<<endl;
    cin>>GE2;
    
    if(GE1>GE2){
       cout<<"Equipo #1, tiene 3 puntos"<<endl;
       cout<<"Equipo #2, tiene 0 puntos";
    } else
        if(GE2>GE1){
        cout<<"Equipo #2, tiene 3 puntos"<<endl;
        cout<<"Equipo #1, tiene 0 puntos";
        }
        else {
		cout<<"Los equipos empataron Ambos tienen 1 punto";
		}
    

   
    return 0;
}
