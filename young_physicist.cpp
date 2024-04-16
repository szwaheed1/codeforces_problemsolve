#include <iostream>

using namespace std;



int main(){
    int n;
    cin >> n;

    int vct[n][3];

    for(int i=0; i < n; i++){
        for(int j=0; j < 3; j++){
            cin >> vct[i][j];
        }
    }

    int x=0, y=0, z=0;

    for(int i=0; i < n; i++){
        x += vct[i][0];
        y += vct[i][1];
        z += vct[i][2];
    }

    if(x==0 && y==0 && z==0){
        cout << "YES";
    } else{
        cout << "NO";
    }


    return 0;
}
