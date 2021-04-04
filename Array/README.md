[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Function "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Pointer "Next")

ដំបូងខ្ញុំសូមណែនាំបង្តិចពីបញ្ហាតូចៗ មុនពេលដែលយើងត្រូវស្គាល់ដល់ array (អារេ)។ យើងធ្លាប់បានរៀនកន្លងមក ពេលយើងត្រូវបញ្ចូលលេខមួយ យើងត្រូវតាងអថេរមួយដើម្បីផ្ទុកតម្លៃនោះ។ បើយើងត្រូវការ លេខចំនួន១០ដងត្រូវបញ្ចូលដោយអ្នកប្រើប្រាស់ នោះយើងអ្នកសរសេរកម្មវិធីត្រូវតាងអថេរចំនួន១០ដែរដើម្បីផ្ទុកតម្លៃទាំងនោះ។ 
ដោយសារតែបែបនេះហើយ ទើបយើងត្រូវរៀន Array ដើម្បីជំនួសការតាងអថេរច្រើនពេកមកតាងតែអថេរមួយអាចផ្ទុកតម្លៃជាច្រើនដែលអ្នកប្រើប្រាស់អាចបញ្ចូលមកកម្មវិធីសម្រាប់គណនារកអ្វីមួយ។​ 

## របៀបបង្កើត Array
```
datatype arrayName[arraySize];

ប្រភេទទិន្នន័យ ឈ្មោះអថេរ[ទំហំរបស់វា];
```
ឧទាហរណ៍៖
```
int data[100];
float num[20];
```

អ្វីដែលយើងបានតាងខាងលើនេះ វាមានន័យដូចរូបនេះដែរ។ ប្រៀបបានយើងបង្កើរទូដាក់ខោអាវមួយដែលមានឈ្មោះ CArrays ហើយមាន ៥ជាន់ ដែលគេត្រូវរាប់វាពីជាន់ទី០ ដល់ជាន់ទី៤។ 
![array](https://cdn.programiz.com/sites/tutorial2program/files/c-arrays.jpg)

## ការចូលទៅប្រើធាតុនិមួយៗក្នុង Array
ខ្ញុំសូមបង្ហាញ ជាឧទាហរណ៍មួយសម្រាប់ការបង្កើត Array មួយមានឈ្មោះ mark។ 

![Array mark](https://cdn.programiz.com/sites/tutorial2program/files/c-array-declaration.jpg)

### ការឱ្យតម្លៃ​ក្នុង ​Array 
យើងអាចបង្កើតតម្លៃស្រាប់ ពេលយើងតាងអថេរ Array។​ ប្រសិនបើទំហំអារេ ផ្ទុកបាន៥ ហើយយើងដាក់លេខទៅដល់៦លេខក៏មិនត្រឹមត្រូវដែរ។ 
យើងអាចឱ្យតម្លៃនៃ index និមួយៗទៅ `mark` ដែលមានទំហំស្មើ 5
```
int mark[5] = {19, 10, 8, 17, 9};
```
យើងអាចឱ្យតម្លៃនៃ index និមួយៗទៅ​ `mark` ដោយមិនដឹងទំហំបាន ដាក់លេខប៉ុន្មានខ្ទង់ក៏បាន។ 
```
int mark[] = {19, 10, 8, 17, 9};
```
វាមានន័យដូចរូបនេះអញ្ចឹង

![mark](https://cdn.programiz.com/sites/tutorial2program/files/c-array-initialization.jpg)

ឧទាហរណ៍៖ 
```
#include <stdio.h>

void main() {
    int mark[5] = {19, 10, 8, 17, 9};
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ", mark[i]);
    }
    //output: 19 10 8 17 9

    //ឬយើងអាចបង្ហាញតម្លៃតាម index ដែលយើងចង់បាន
    printf("%d", mark[1]); // 10
    printf("%d", mark[3]); // 17
}
```

### ការប្តូរធាតុក្នុង Array 
```
int mark[5] = {19, 10, 8, 17, 9};
mark[1] = 8;
mark[0] = -2;

// mark[5] = { -2, 8, 8, 17, 9};
```

## ការបញ្ចូល និងការបង្ហាញ​របស់ Array
យើងដឹងស្រាប់មកហើយ ពេលយើងបញ្ចូលលេខពី `keyboard` ក្នុងប្រើប្រាស់ យើងត្រូវប្រើ method `scanf()`។ 

```
int mark[4];
scanf("%d", &mark[1]); //​ មានន័យថាបញ្ចូលលេខទៅ index ទី១ mark

scanf("%d", &mark[i]); // បញ្ចូលលេខទៅ index ទីi 
```

ការបង្ហាញទៅលើអេក្រងដូចគ្នាដើរ​ យើងប្រើ method `printf()` ដើម្បីបង្ហាញលើ console។
```
printf("%d ", mark[1]); //បង្ហាញតែ​ mark ក្នុង index ទី១
printf("%d ", mark[i]); //បង្ហាញតែ​ mark ក្នុង index ទីi
```

ឧទាហរណ៍៖ 
```
#include <stdio.h>

void main() {
    int n;
    printf("Enter n = ");
    scanf("%d", &n); // បញ្ចូលតម្លៃ n

    int num[n]; // បង្កើតអារេដែលមានទំហំ n
    int i;
    for(i=0; i<n; i++) {
        printf("Enter array index %d : ", i);
        scanf("%d", &num[i]);
    }

    // បង្ហាញគ្រប់តម្លៃរបស់ array
    printf("All arrays : ");
    for(i=0; i<n; i++) {
        printf("%d ", num[i]);
    }
}
```
ឩទាហរណ៍៖ រកតម្លៃមធ្យមរបស់ array ដែលត្រូវបានបញ្ចូលដោយអ្នកប្រើប្រាស់។ 
```
#include <stdio.h>

void main() {
     int marks[10], i, n, sum = 0, average;

     printf("Enter number of index : ");
     scanf("%d", &n);

     for(i=0; i<n; ++i) {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);
          
          // ផលបូកសរុបក្នុង array
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d", average);
}
```

## Multidimensional Arrays
ពីចំនុចខាងលើ យើងបានរៀនការប្រើប្រាស់ `array` តែវាជាប្រភេទតែមួយថ្នាក់។ សម្រាប់មេរៀននេះយើងរៀនពីការបង្កើត `array` ដែលមានច្រើនថ្នាក់។​ 

```
int num[3][4];
```
យើងអាចបង្កើត array មួយហើយដែលមានច្រើនជាន់​ ប្រៀបបានជាសង់ផ្ទះវិឡាជាប់គ្នាច្រើនហើយ ក្នុងផ្ទះមានបន្ទបច្រើនទៀត។ 

![array](https://cdn.programiz.com/sites/tutorial2program/files/two-dimensional-array_0.jpg)

លំហាត់ខ្លះយើងត្រូវសិក្សាដល់ការដោះស្រាយ `array` ៣ជាន់ក៏មាន។ 
```
float num[2][4][3];
```
សម្រាប់មកវាមាន ២៤ ធាតុក្នុងអថេរតែមួយ។ 

### ការបង្កើត array 2D

```
int num[2][3] = {{1, 3, 0}, {-1, 5, 9}};
         
int num[][3] = {{1, 3, 0}, {-1, 5, 9}};
                
int num[2][3] = {1, 3, 0, -1, 5, 9};

int num[][] = {{1, 3, 0}, {-1, 5, 9}};
```

### ការបង្កើត array 3D

```
int num[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
```

លំហាត់ប្រភេទនេះ គេច្រើនយកទៅប្រើក្នុងការគណនាម៉ាទ្រីស `matrix` 

## ការប្រើ array ទៅក្នុង function 
ការបោះតម្លៃ array ខ្លួនវាទៅហើយ function ណាមួយដើម្បីធ្វើការ មានពីរបែបដែរ។ 

### បោះតែមួយធាតុទៅ function
```
#include <stdio.h>

void display(int age1, int age2) {
    printf("%d \n", age1);
    printf("%d \n", age2);
}

void main() {
    int ageArray[] = {2, 8, 4, 12};

    // បោះតែ២តម្លៃទៅ display()
    display(ageArray[1], ageArray[2]); // output: 8 4
}
```

### បោះតម្លៃខ្លួន array ទាំងអស់ទៅ function

```
#include <stdio.h>

float calculateSum(float age[]) {
    float sum = 0.0;
    for (int i = 0; i < 6; ++i) {
        sum += age[i];
    }
    return sum;
}
void main() {
    float result, age[] = {23.4, 55, 22.6, 3, 40.5, 18};

    // age ត្រូវបានបោះទាំងអស់ទៅ calculateSum()
    result = calculateSum(age); 
    printf("Result = %.2f", result); // Result = 162.50
}
```

សម្រាប់អ្នកចូលចិត្តស្រាវជ្រាវអាច ទៅរកមើលសិក្សាពីការ multidimensional array ប្រើក្នុង function។ ហើយការប្រើ Array ជាមួយ ​char​ (ខ្ញុំនឹងសរសេរវានៅមេរៀនក្រោយទៀត)។ 😫 

🤕🤕🤕 គេរៀនគេថា ហត់មិនសូវយល់ អ្នកខំសរសេរ ខំមិនសូវបានដេក😢 ប្រឹងទៅដើម្បីអ្នកសរសេរ 
