# មុខងារ​ - Function

[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Loop "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Array "Next")

មុខងារដើរតួយ៉ាងសំខាន់ ក្នុងកិច្ចការមួយមានមុខងារជាច្រើនដែរត្រូវធ្វើ ដូច្នេះហើយទើបយើងត្រូវបង្កើត function ដើម្បីឱ្យវាដោះស្រាយ។ គេមានបញ្ហាគណិតវិធីមួយ យើងត្រូវកំណត់ការដោះស្រាយ រួចបែងចែកមកជាបញ្ហាតូចៗដើម្បីដោះស្រាយ។ 

## ការបង្កើតមុខងារ​ 

```
datatype FunctionName([params], [params], ...) {
    // code;
}
```
ឧទាហរណ៍៖
```
int Sum(int n){
    // code;
    return តម្លៃ;
}
float Power(int n, int p){
    // code;
    return តម្លៃ;
}
char FindLastChar(char * word){
    // code;
    return 'តម្លៃ';
}
void Display(){
    // code;
}
```

មុខងារ មាន២ប្រភេទ៖​ មុខងារត្រឡប់តម្លៃ (return function) និងមុខងារធ្វើការ (none return function)។​ ការបង្កើត មុខងារ ពេលខ្លះអាចត្រូវការអថេរ `parameter` ឱ្យមុខងារ ពេលខ្លះមិនត្រូវការអថេរ `parameter` ដូចឧទាហរណ៍ខាងលើ។ 

## របៀបប្រើប្រាស់មុខងារ 

ខ្ញុំសូមណែនាំការបង្កើតមុខងារក្នុង file តែមួយ។​ គេអាចសរសេរបានពីររបៀបគឺ៖ 
### 1. សររសេរមុខងារលើ main function 

```
#include <stdio.h>
int function1(int n){
    //code;
    return value;
}
void main() {
    //code;
    function1(n);
    //code;
}
```

### 2. សរសេរមុខងារក្រោម main function

```
#include <stdio.h>
int function1(int n); // ត្រូវតែដាក់ប្រភេទ និង ឈ្មោះមុខងារដូចគ្នានៅក្រោម

void main() {
    //code;
    function1(n);
    //code;
}
int function1(int n){
    //code;
    return value;
}
```

ឧទាហរណ៍ការប្រើប្រាស់ return function ៖ 

![images1](https://cdn.programiz.com/sites/tutorial2program/files/pass-arguments-c-programming.jpg)

![images2](https://cdn.programiz.com/sites/tutorial2program/files/c-return-statement.jpg)

## មុខងារប្រើជ្រំដែល - Recursive function
Recursive function មានន័យថា យើងប្រើវាហើយ ហៅវាប្រើក្នុងខ្លួនវាវិញទៀត។ 

```
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```

ឧទាហរណ៍៖
```
#include <stdio.h>
int sum(int n) {
    if (n != 0)
        // sum() ហៅប្រើក្នុងខ្លួនវាទៀត
        return n + sum(n-1); 
    else
        return n;
}

void main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
}
```

![function calls itself](https://cdn.programiz.com/sites/tutorial2program/files/recursion-natural-numbers.png)

## ការប្រើប្រាស់អថេរទៅមុខងារ

### static variable 

```
#include <stdio.h>

void display() {
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
void main() {
    display();
    display();
}
```
### global variable 

```
#include <stdio.h>
int n = 5;  // global variable

void display() {
    ++n;   
    printf("n = %d", n);
}

void main() {
    ++n;     
    display();
}
```

ងាយៗ ដំបូងតែច្រើនបន្តិច 😆