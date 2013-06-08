#include <iostream>
#include <fstream>
using namespace std;

class Means {
      public:
          Means(float a, float b, float c);
          float time;
          float price;
          float How_Much_I_Hate;
          Means add_means(Means next) {
                Means temp (0,0,0);
                temp.time = time + next.time;
                temp.price = price + next.price;
                temp.How_Much_I_Hate = How_Much_I_Hate + next.How_Much_I_Hate;
                return temp;
          }
                
};
Means::Means(float a, float b, float c) {
     time = a;
     price = b;
     How_Much_I_Hate = c;
}
      
                
int main() {
    Means Caltrain (1.5, 9, 2);
    system("PAUSE");
    return 0;
}
