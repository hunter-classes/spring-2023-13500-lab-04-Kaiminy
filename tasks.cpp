#include <iostream>

void box(int width, int height){
  for (int i=0; i< height; i++){
    for (int j=0;j<width;j++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
  }
}


void checkerboard(int width, int height){
  for (int i=1;i<=10;i++){
   for (int j=1;j<=10;j++){
     if (i%2!=0)
       std::cout<<("* ");
     else
       std::cout<<(" *");
   } 
    std::cout<<("\n");
  }
}

void cross(int n){
  
  n=n*2-1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j==i|| (j==(n-1)-i)){
        std::cout<<"*";
      }
      else{
        std::cout<<" ";
      }
    }
    std::cout<<"\n";
  }
}

void lower(int n){
  for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
      std::cout<<"*";
    }
    std::cout<<"\n";
  }
}


void upper (int n){
  for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        for (int j = i; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void trapezoid(int width, int height){
  int stars= width;
  int spaces=0;

  if (height*2>width){
   std::cout<<"This is a impossible shape \n";
  } else{
    for (int i=0;i<height;i++){
      for (int j=0;j<spaces;j++){
        std::cout<<" ";
      }
      for (int j=0;j<stars;j++){
        std::cout<<"*";
      }
      stars-=2;
      spaces +=1;
        std::cout<<"\n";
  }
}
}

void checkerboard3x3(int width, int height){
    std::string str;
    bool space = false;
    for(int i = 0; i < height; i++){
        if(i % 6 == 3 || i % 6 == 0){
            space = !space;
        }
        for(int j = 0; j < width; j++){
            if(j % 6 == 3 || j % 6 == 0){
                space = !space;
            }
            if(!space){
                str += "*";
            }else {
                str += " ";
            }
        }
        if(width % 6 == 3 || width % 6 == 0){
                space = !space;
        }
        str += "\n";
    }
  


}
