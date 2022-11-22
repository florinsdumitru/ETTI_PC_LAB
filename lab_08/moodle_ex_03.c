
// moodle ex 03 - count char occurences
int main() {
    char arr[10240 + 1];
    char single;
    int n = 0;
    
    scanf("%[^\n]", arr);
    getchar();
    single = getchar();

    for (int i = 0; i < 10240; i++) {
        if (arr[i] == single) {
            n++;
        } else if (arr[i] == '\0') {
            break;
        }
    }
    
    printf("%d", n);
    return 0;
}
