## Structure 

[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/String "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/File "Next")

កាលពីមុនយើងសិក្សាពី `Array` វាអាចផ្ទុកតម្លៃច្រើនតែវាមិនអាចផ្ទុកតម្លៃប្រភេទផ្សេងគ្នាបានទេ ដូច្នេះមេរៀននេះយើងសិក្សាពីការឱ្យតម្លៃប្រភេទផ្សេងគ្នាក្នុងអថេរតែមួយ ដែលហៅថា `structure` ។ 

```
struct structureName {
    dataType member1;
    dataType member2;
    ...
};

struct Person {
    char name[50];
    int id;
    float score;
};
```

## ការប្រើប្រាស់ structure

```
struct Person {
    char name[50];
    int id;
    float score;
};

void main() {
    struct Person p1, p2, p[10];
}
```

```
struct Person {
    char name[50];
    int id;
    float score;
}p1, p2, p[10];
```

## ការយកទិន្នន័យរបស់ structure មកប្រើប្រាស់ 
ដើម្បីយកមកប្រើ​ យើងមានវិធីសាស្ត្រពិរ៖
- `.` សមាជិកជាប្រភេទគណនា
- `->` សមាជិកប្រភេទ `structure pointer`

```
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
} dist1, dist2, sum;

void main() {
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);

    printf("Enter inch: ");
    scanf("%f", &dist1.inch);
    printf("2nd distance\n");

    printf("Enter feet: ");
    scanf("%d", &dist2.feet);

    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    // adding feet
    sum.feet = dist1.feet + dist2.feet;
    // adding inches
    sum.inch = dist1.inch + dist2.inch;

    // changing to feet if inch is greater than 12
    while (sum.inch >= 12) 
    {
        ++sum.feet;
        sum.inch = sum.inch - 12;
    }

    printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
}
```

## Nested Structure 

```
struct complex {
    int imag;
    float real;
};

struct number {
    struct complex comp;
    int integers;
} num1, num2;
```
ដើម្បីប្រើប្រាស់សមាជិករបស់ `struct` របស់ `num2`
```
num2.comp.imag = 20;
```

## Pointer ក្នុង structure 

```
struct name {
    member1;
    member2;
    .
    .
};

void main() {
    struct name *ptr, Harry;
}
```

### គំរូឧទាហរណ៍

```
#include <stdio.h>
struct person 
{
    int age;
    float weight;
};

void main() {
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);
}
```

```
#include <stdio.h>
#include <stdlib.h>
struct person {
    int age;
    float weight;
    char name[30];
};

int main()
{
    struct person *ptr;
    int i, n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    // allocating memory for n numbers of struct person
    ptr = (struct person*) malloc (n * sizeof(struct person));

    for(i = 0; i < n; ++i)
    {
        printf("Enter first name and age respectively: ");

        // To access members of 1st struct person,
        // ptr->name and ptr->age is used

        // To access members of 2nd struct person,
        // (ptr+1)->name and (ptr+1)->age is used
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("Displaying Information:\n");
    for(i = 0; i < n; ++i)
        printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
}
```

## ការប្រើប្រាស់ Pointer Structure ទៅក្នុង Function

```
#include <stdio.h>

struct student {
    char name[50];
    int age;
};

void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
}

void main() {
    struct student s1;

    printf("Enter name: ");

    // read string input from the user until \n is entered
    // \n is discarded
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1); // passing struct as an argument
}
```

គំរូឧទាហរណ៍មាន return function 

```
#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

struct student getInformation() {
    struct student s1;

    printf("Enter name: ");
    scanf ("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    return s1;
}

void main() {
    struct student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);
}
```

ពេលខ្លះ យើងតែងច្រលំគ្នាពេលបោះតម្លៃទៅមកក្នុង `Function` ។​​ តែព្យយាមអនុវត្តនិងចំណាំលក្ខណៈពិសេសរបស់ភាសានិមួយៗ។

```
#include <stdio.h>
typedef struct Complex
{
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *result) {
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag; 
}

void main() {
    complex c1, c2, result;

    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("For second number, \n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);

    addNumbers(c1, c2, &result); 
    printf("\nresult.real = %.1f\n", result.real);
    printf("result.imag = %.1f", result.imag);
}
```

ក្រោយពីបានលើឧទាហរណ៍ហើយ ព្យាយាមសរសេរដោយខ្លួនឯងនិងសិក្សាស្វែងយល់ពីវា​ នោះនឹងយល់ពីវាច្បាស់។ 
