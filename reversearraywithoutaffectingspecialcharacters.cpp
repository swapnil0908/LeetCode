#include <iostream>
bool isAlphabet(char x){
    if((x>='a' && x<='z') || (x>='A' && x<='Z'))
        return true;
    return false;
}
void reverse(char str[]){
    int j=strlen(str);
    int i = 0;
    while(i<j){
    if(!isAlphabet(str[i]))
        i++;
    else if(!isAlphabet(str[j]))
        j--;
    else if(isAlphabet(str[i]) && isAlphabet(str[j])){
        swap(str[i],str[j]);
        i++;
        j--;
    }
        }
}

int main() {
    char str[] = "a!!!b.c.d,e'f,ghi"; 
    cout << "Input string: " << str << endl; 
    reverse(str); 
    cout << "Output string: " << str << endl; 
    return 0; 
}