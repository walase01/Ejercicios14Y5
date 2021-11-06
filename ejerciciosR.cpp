#include<iostream>

using namespace std;

//5. Pascal case: "Hola mundo" -> "HolaMundo"

void pascalCase(char line[]);

// 14. Vector (x,y) opposite : Vector

void opposite(int vec1[],int vec2[]);


int main(){
	
	char arr[] = "hola Mundo ";  
	int numero1[] = {1,2,3,4,5};
	int numero2[] = {6,7,8,1,2};
	pascalCase(arr);
	opposite(numero1,numero2);
	cout<<"Pascal case"<<"\n"; 
	cout<<arr;
	
	return 0;
}

void opposite(int vect1[],int vect2[]){
	
	int vecResult[5];
	
	for(int i=0;i<5;i++){
		vecResult[i] = vect1[i] - vect2[i];
	}
	
	cout<<"Opposite"<<"\n";
	cout<<"[";
	for(int i=0;i<5;i++){
		cout<<vecResult[i]<<" ";
	}
	cout<<"]"<<"\n";
}

void pascalCase(char line[]){
    bool active = true;

    for(int i = 0; line[i] != '\0'; i++) {
        if(isalpha(line[i])) {
            if(active) {
                line[i] = toupper(line[i]);
                active = false;
            } else {
                line[i] = tolower(line[i]);
            }
        } else if(line[i] == ' ') {
            active = true;
        }
    }
}
