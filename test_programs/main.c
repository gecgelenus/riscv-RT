int main() {
    int a = 10;
    int b = 20;
    for(int i = 0; i < 10;i++){
        b += 1;
    }
    int *c = (int*)0x0300;
    *c = a + b;
    return *c;
}
