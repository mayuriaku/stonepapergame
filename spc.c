#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int stopaperscissor(char y, char co){
    // you win 1 draw 0 lose -1
    /*
    ss
    pp
    cc
    */
    if(y == co){
return 0;

    }
    // ------------------
    /*
    sp
    ps
    sc
    cs
    pc
    cp
    */
    if(y=='s' && co=='p'){
        return 1;
    }
    else if(y=='p' && co=='s'){
        return -1;
    }
    if(y=='p' && co=='c'){
        return -1;
    }
    else if(y=='c' && co=='p'){
        return 1;
    }
    if(y=='s' && co=='c'){
        return 1;
    }
    else if(y=='c' && co=='s'){
        return -1;
    }
}
int main(){
int res,num;
char y,co;

num = rand() % 100 + 1; // use rand() function to get the random number  
printf ("computer has choosen : %d\n ", num);
if(num<33){
    co='s';
}
else if(num>33 && num<66){
    co='p';
}
else{
co='c';
}

printf("chose 's' stone  ,'p' paper ,'c' scissor :\n");
scanf("%s",&y);
res= stopaperscissor(y,co);
printf("%c is your choice %c is computers choice  \n ",y,co);

if(res == 0){
    printf("game draw ");
}
else if( res == 1){
    printf("you win \n");
}
else{
    printf(" you lose");
}

return 0;
}