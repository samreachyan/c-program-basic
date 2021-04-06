## String

[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Pointer "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Structure "Next")

មេរៀន `String` ជាមេរៀនសិក្សាពីអក្សរ វាកើតចេញពីការប្រើប្រាស់ `Array` ជាប្រភេទទិន្នន័យ `char` ឬ `pointer។` មេរៀននេះសម្រាប់ភាសា `C++` គ៏មានប្រភេទទិន្នន័យ `string` ស្រាប់តែម្តង។​ 

```
char s[] = "c string";
```

![alt](https://cdn.programiz.com/sites/tutorial2program/files/c-string.jpg)

យើងឃើញអក្សរនៅក្រោយគេ​ `\0` = `null` ហើយ `s[]` មិនបានកំណត់ទំហំ `string` ។

## ការប្រើប្រាស់ 
ការប្រកាសអថេរ `char` លក្ខណៈ `string`
```
char c[] = "abcd";
char c[50] = "abcd";
char c[] = {'a', 'b', 'c', 'd', '\0'};
char c[5] = {'a', 'b', 'c', 'd', '\0'};
```
ប្រសិនបើអ្នកយល់ពី `array` ហើយគឺវាមិនមានអ្វីខុសគ្នានោះទេ៖

![string](https://cdn.programiz.com/sites/tutorial2program/files/c-string-initialization.jpg)

**ចំណាំ​៖**
```
#include <stdio.h>

void main() {
    char c[100];
    c = "C programming"; // Error ត្រូវប្រើ strcpy function ទើបអាចចំលងចូលបាន
    strcpy(c, "C programming"); 

    printf("%s​ \n", c);
}
```

## ការបញ្ចូលអក្សរពីអ្នកប្រើប្រាស់
យើងបានដឹងស្រាប់មកហើយ គឺគេទទួលអក្សរពីអ្នកប្រើប្រាស់តាម​ function `scanf()` ។ តែអ្នកត្រូវកត់ចំនាំបន្តិចសម្រាប់ `char array` ឬ `string` ។ តែសម្រាប់ `scanf()` វាទទួលបានតែអក្សរមានតែមួយពាក្យ គឺមុនអក្សរមាន ដកឃ្លា tab ឬ ចុះបន្ទាត់។ 

```
#include <stdio.h>
void main() {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.​\n", name);

    //output: Enter name: Reach Handsome
    //        Your name is Reach.
}
```

តែសម្រាប់ `scanf()` វាទទួលបានតែអក្សរមានតែមួយពាក្យ គឺមុនអក្សរមាន ដកឃ្លា tab ឬ ចុះបន្ទាត់។ ដើម្បីទទួលបានអក្សរប្រើពាក្យមាន ដកឃ្លា នោះយើងត្រូវប្រើ `fgets` ឬ `puts` ។

```
#include <stdio.h>
void main() {
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
```

## ការប្រើប្រាស់ string ទៅក្នុង function

ការបោះតម្លៃជាប្រភេទទិន្នន័យ `string` ទៅក្នុង `function`
```
#include <stdio.h>
void displayString(char str[]) {
    printf("String Output: ");
    puts(str);
}
void main() {
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);
```

ការប្រើប្រាស់ `pointer` ជាមួយ `string` មិនខុសពីមេរៀនមុខដែរ

```
#include <stdio.h>

void main() {
    char name[] = "Harry Potter";

    printf("%c", *name);     // H
    printf("%c", *(name+1));   // a
    printf("%c", *(name+7));   // o

    char *namePtr;

    namePtr = name;
    printf("%c", *namePtr);     // H
    printf("%c", *(namePtr+1));   // a
    printf("%c", *(namePtr+7));   // o
}
```

**ចំណាំប្រភេទ function**
- `strlen()` ជាមុខងារប្រើប្រាស់សម្រាប់រាប់ចំនួនព្ជញ្ញនៈ
- `strcpy() `ប្រើប្រាស់ចំលងអក្សរពីអថេរមួយទៅអថេរមួយទៀត
- `strcmp()` ប្រៀបធៀបអក្សរពីរអថេរ បើដូចគ្នាគី 0 ខុសគ្នាគឺ 1
- `strcat()` សម្រាប់បង្ហាញអក្សរក្នុងខ្លនវា 

